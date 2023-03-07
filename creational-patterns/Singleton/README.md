# Singleton

The Singleton design pattern is a creational design pattern that ensures **only one instance of a particular class is created** and **provides a global point of access to that instance**. It is often used in situations where having multiple instances of a class would cause issues, such as when there is a need to control access to a shared resource or when a specific object needs to be shared across different parts of an application.

We use the Singleton design pattern for several reasons:

1. Ensuring a single instance: When there is a need for **only one instance of a class to be used** across the application, the Singleton pattern ensures that only one instance is created and provides a global point of access to that instance.
2. Controlling access to shared resources: When there is a **shared resource** that needs to be accessed by multiple parts of an application, the Singleton pattern can be used to ensure that only one instance of the resource is created and that access to it is controlled.
3. Providing a single point of configuration: When there is a need for **a single point of configuration** across the application, the Singleton pattern can be used to ensure that there is only one instance of the configuration object, and it can be accessed and modified from a single location.
4. Reducing memory footprint: When creating multiple instances of an object would result in a large memory footprint, the Singleton pattern can be used to create a single instance of the object and **reuse** it throughout the application.

# Implementation

General steps:

1. Create a **private static instance** variable of the class within the class itself.
2. Create a **public static method that acts as a global point of access** to the single instance of the class.
3. Use the public static method to access the single instance of the class throughout the application.
4. Make the **constructor of the class private** to prevent other classes from instantiating it directly.
5. Make the **copy constructor of the class private** to prevent other classes from copying the initialized singleton to a new singleton.
6. Make the **assignment operator of the class private** to prevent other classes from assigning the initialized singleton to a new singleton.

There are two types of Singleton design pattern:

1. **Eager Initialization** Singleton: In this approach, the instance of the Singleton class is **created at the time of class loading, rather than when it is first accessed**. This approach ensures that the Singleton instance is always available, but it can be memory-intensive if the Singleton class is not used frequently.
2. **Lazy Initialization** Singleton: In this approach, the Singleton instance is **created only when it is first accessed**. This approach conserves memory, but it can **lead to issues with concurrency** if multiple threads attempt to access the Singleton instance at the same time.

## Thread-safety issue in lazy initialization Singleton

```c++
// Thread 1
1 SingletonLazy* SingletonLazy::GetInstance() {
2  if(SingletonLazy::singleton_lazy_ == nullptr){
3    SingletonLazy::singleton_lazy_ = new SingletonLazy();
4  }
5  return SingletonLazy::singleton_lazy_;
6 }

// Thread 2
7 SingletonLazy* SingletonLazy::GetInstance() {
8   if(SingletonLazy::singleton_lazy_ == nullptr){
9     SingletonLazy::singleton_lazy_ = new SingletonLazy();
10  }
11  return SingletonLazy::singleton_lazy_;
12 }
```

Instruction flows leading to unsafety:

1. Thread 1 Line 1: `singleton_lazy_` is `nullptr` so Thread 1 Line 2 will be executed in the next cycle of Thread 1.
2. Thread 2 Line 1: Thread 2 preempts the CPU. `singleton_lazy_` is `nullptr` so Thread 2 Line 2 will be executed in the next cycle of Thread 2.
3. Thread 1 Line 2-5: Thread 1 creates a Singleton instance.
4. Thread 2 Line 2-5: Thread 2 creates another Singleton instance which breaks the singleton rule.

Solution: double-checked locking

```c++
SingletonThreadSafe* SingletonThreadSafe::GetInstance() {
  if(SingletonThreadSafe::singleton_thread_safe_ == nullptr) {
    mtx.lock();
    if (SingletonThreadSafe::singleton_thread_safe_ == nullptr) {
      SingletonThreadSafe::singleton_thread_safe_ = new SingletonThreadSafe();
    }
    mtx.unlock();
  }
  return SingletonThreadSafe::singleton_thread_safe_;
}
```

Nevertheless, the above solution is still not thread-safe. Instruction flows leading to unsafety:

```c++
SingletonThreadSafe* SingletonThreadSafe::GetInstance() {
  if(SingletonThreadSafe::singleton_thread_safe_ == nullptr) {
    mtx.lock();
    if (SingletonThreadSafe::singleton_thread_safe_ == nullptr) {
//      SingletonThreadSafe::singleton_thread_safe_ = new SingletonThreadSafe();
//      break down into low level instructions:
//        1. Allocate memory for SingletonThreadSafe instance
//        2. Call constructor of SingletonThreadSafe for initialization
//        3. Make singleton_thread_safe_ point to the allocated memory
    }
    mtx.unlock();
  }
  return SingletonThreadSafe::singleton_thread_safe_;
}
```

Step 2 and 3 are dependent on Step 1 but are independent of each other so that the compiler may swap the order of Step 2 and 3 for optimization. 

Consider the following scenario:

1. `singleton_thread_safe_` points to the allocated memory but the memory are not initialized in Thread 1.
2. Thread 2 preempts the CPU and return `singleton_thread_safe_` (since it is not `nullptr`).
3. The main thread preempts the CPU and access members of `SingletonThreadSafe` by dereference `singleton_thread_safe_`. However, the memory which `singleton_thread_safe_` is not initialized.

Solution: use `volatile` modifier to prevent compiler from reordering instructions associated with `singleton_thread_safe_`.

# Use Cases

1. Configuration settings: A Singleton can be used to store configuration settings that need to be accessed throughout an application. ([Single DB Config Instance](./use-cases/DBConfig))
2. Logging: A Singleton can be used to implement a logging service that allows different parts of an application to log messages to the same file or database.
3. Caching: A Singleton can be used to implement a caching service that stores frequently accessed data in memory.
4. Database connections: A Singleton can be used to manage database connections, ensuring that only one connection is created and shared across an application.
5. GUI components: A Singleton can be used to manage GUI components, ensuring that only one instance of a particular component (e.g., a dialog box or a menu bar) is created and used across an application.
6. Object factories: A Singleton can be used to implement an object factory that creates and manages a pool of reusable objects.