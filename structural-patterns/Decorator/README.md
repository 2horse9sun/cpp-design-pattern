# Decorator

The Decorator Design Pattern is a structural design pattern that **allows behavior to be added to an individual object, either statically or dynamically**, without affecting the behavior of other objects from the same class. This pattern is often used when we want to modify the functionality of a single object or a small set of objects, without affecting the entire class or its clients.

The Decorator pattern works by **wrapping an object with one or more decorators that add behavior to the object**. Each decorator has the same interface as the object it decorates, and it can modify the object's behavior before or after delegating to the underlying object.

## Decorator vs Proxy

Decorator Pattern focuses on **dynamically** adding functions to an object, while Proxy Pattern focuses on controlling access to an object. **Relationship between a *Proxy* and the real subject is typically set at compile time**, *Proxy* instantiates it in some way, **whereas *Decorator* is assigned to the subject at runtime**, knowing only subject's interface. ([stack overflow](https://stackoverflow.com/a/18618841))

# Use Cases

1. Adding functionality: A Decorator can be used to add new functionality to an object, such as logging, caching, encryption, or validation. This can be useful when you want to add functionality to an existing object, but don't want to modify its original implementation.
2. Extending behavior: A Decorator can be used to extend the behavior of an object, such as adding new methods or properties. This can be useful when you want to add functionality to an object, but don't want to create a new subclass or modify its original implementation. ([TextFormatting](./use-cases/TextFormatting))
3. Combining behavior: A Decorator can be used to combine the behavior of multiple objects, such as in a composite pattern. This can be useful when you want to create complex objects from simpler ones, while preserving their individual behavior.
4. Simplifying interfaces: A Decorator can be used to simplify complex interfaces by providing a simpler interface that delegates to the original object. This can be useful when you want to hide the complexity of an object from the client code.
5. Separating concerns: A Decorator can be used to separate concerns by encapsulating different aspects of an object's behavior in separate decorators. This can make the code more modular and easier to maintain.