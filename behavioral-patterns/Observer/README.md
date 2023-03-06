# Observer

The Observer design pattern is a behavioral pattern that is used to establish a **one-to-many relationship** between objects. In this pattern, when **one object changes its state, all of its dependent objects are notified and updated automatically**.

The Observer pattern consists of two main components: the Subject and the Observer. The Subject is the object that maintains a list of its dependents (Observers) and notifies them automatically of any changes to its state. The Observer is the object that registers with the Subject and receives notifications when the Subject's state changes.

The Observer pattern is used to **reduce coupling between objects and promote loose coupling**. It is often used when **a change in one object requires changes in other objects, but the objects are not tightly coupled**. For example, when developing user interfaces, the Observer pattern is often used to update the view (Observer) when the model (Subject) changes. This decouples the model from the view, allowing them to change independently without affecting each other.

