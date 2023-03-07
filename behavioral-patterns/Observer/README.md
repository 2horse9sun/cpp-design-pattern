# Observer

The Observer design pattern is a behavioral pattern that is used to establish a **one-to-many relationship** between objects. In this pattern, when **one object changes its state, all of its dependent objects are notified and updated automatically**.

The Observer pattern consists of two main components: the Subject and the Observer. The Subject is the object that maintains a list of its dependents (Observers) and notifies them automatically of any changes to its state. The Observer is the object that registers with the Subject and receives notifications when the Subject's state changes.

The Observer pattern is used to **reduce coupling between objects and promote loose coupling**. It is often used when **a change in one object requires changes in other objects, but the objects are not tightly coupled**. For example, when developing user interfaces, the Observer pattern is often used to update the view (Observer) when the model (Subject) changes. This decouples the model from the view, allowing them to change independently without affecting each other.

# Use Cases

1. Event handling: An Observer can be used to handle events, such as user input, network events, or system events. This can simplify the code for event handling and make it more modular and reusable.
2. UI updates: An Observer can be used to update the user interface when the underlying data changes. This can ensure that the UI remains in sync with the data and reduces the need for manual updates. ([MVC architecture](./use-cases/MVC))
3. Message passing: An Observer can be used to pass messages between objects, such as in a publish-subscribe system. This can simplify the code for message passing and make it more flexible and scalable.
4. Monitoring: An Observer can be used to monitor the state of a system, such as a network or a server. This can alert users or administrators when the system enters an error state or needs attention.
5. Logging: An Observer can be used to log events or data changes, such as in a debugging or auditing system. This can help diagnose problems or track changes over time.