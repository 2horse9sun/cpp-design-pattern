# Singleton

The Singleton design pattern is a creational design pattern that ensures **only one instance of a particular class is created** and **provides a global point of access to that instance**. It is often used in situations where having multiple instances of a class would cause issues, such as when there is a need to control access to a shared resource or when a specific object needs to be shared across different parts of an application.

We use the Singleton design pattern for several reasons:

1. Ensuring a single instance: When there is a need for **only one instance of a class to be used** across the application, the Singleton pattern ensures that only one instance is created and provides a global point of access to that instance.
2. Controlling access to shared resources: When there is a **shared resource** that needs to be accessed by multiple parts of an application, the Singleton pattern can be used to ensure that only one instance of the resource is created and that access to it is controlled.
3. Providing a single point of configuration: When there is a need for **a single point of configuration** across the application, the Singleton pattern can be used to ensure that there is only one instance of the configuration object, and it can be accessed and modified from a single location.
4. Reducing memory footprint: When creating multiple instances of an object would result in a large memory footprint, the Singleton pattern can be used to create a single instance of the object and **reuse** it throughout the application.