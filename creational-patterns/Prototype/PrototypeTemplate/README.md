# Prototype - Implementation

Prototype design pattern in C++ is achieved by implementing **the copy constructor and assignment operator overloading**. Some key points worth paying attention to:

1. We should perform **deep copy** in the clone process. That is to say, the memory a pointer points to should be copied to a newly reallocated space.
2. Don't forget to deallocate all created resources in the deconstructor.