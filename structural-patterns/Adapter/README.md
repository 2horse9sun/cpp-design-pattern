# Adapter

The Adapter pattern is a structural design pattern that allows **objects with incompatible interfaces to work together by creating a bridge between them**. It is used when you have an **existing class that provides some useful functionality, but its interface does not match the requirements of your client code**. 

# Use Cases

1. Integrating with legacy code: An Adapter can be used to integrate new code with legacy code that has a different interface. This can be useful when you need to update an existing system with new functionality, but don't want to modify its original implementation.
2. Reusing existing code: An Adapter can be used to reuse existing code in a new context that has a different interface. This can be useful when you have an existing library or component that provides some useful functionality, but its interface does not match the requirements of your client code. ([C++ STL container adapter](./use-cases/ContainerAdapter))
3. Supporting multiple interfaces: An Adapter can be used to support multiple interfaces for the same object, such as in a plugin or extension system. This can be useful when you want to provide multiple ways of using an object, without modifying its original implementation.
4. Simplifying interfaces: An Adapter can be used to simplify complex interfaces by providing a simpler interface that delegates to the original object. This can be useful when you want to hide the complexity of an object from the client code.
5. Improving testability: An Adapter can be used to improve testability by providing a testable interface for an object that is otherwise difficult to test. This can be useful when you want to write automated tests for an object that has complex dependencies or side effects.