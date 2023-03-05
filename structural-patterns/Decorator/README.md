# Decorator

The Decorator Design Pattern is a structural design pattern that **allows behavior to be added to an individual object, either statically or dynamically**, without affecting the behavior of other objects from the same class. This pattern is often used when we want to modify the functionality of a single object or a small set of objects, without affecting the entire class or its clients.

The Decorator pattern works by **wrapping an object with one or more decorators that add behavior to the object**. Each decorator has the same interface as the object it decorates, and it can modify the object's behavior before or after delegating to the underlying object.

## Decorator vs Proxy

Decorator Pattern focuses on **dynamically** adding functions to an object, while Proxy Pattern focuses on controlling access to an object. **Relationship between a *Proxy* and the real subject is typically set at compile time**, *Proxy* instantiates it in some way, **whereas *Decorator* is assigned to the subject at runtime**, knowing only subject's interface. ([stack overflow](https://stackoverflow.com/a/18618841))

