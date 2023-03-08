# Bridge

The Bridge pattern is a design pattern in software engineering that **decouples an abstraction from its implementation** so that the two can vary independently.

In other words, the Bridge pattern provides a way to separate the interface (abstraction) from the implementation (concrete classes) and allows them to evolve independently. It involves **creating two separate hierarchies, one for the abstraction and one for the implementation, and connecting them through a bridge interface**.

# Use Cases

1. GUI toolkits: GUI toolkits often use the bridge pattern to separate the abstraction of a GUI component, such as a button or a text field, from its implementation on different platforms, such as Windows, macOS, or Linux. This allows the GUI component to be used across different platforms without having to change the code for the abstraction. ([GUI Toolkit](./use-cases/GUI))
2. Remote control systems: Remote control systems, such as TV remote controls or car remote controls, can use the bridge pattern to separate the abstraction of the remote control interface from the implementation of the commands sent to the device being controlled. This allows the same remote control interface to be used with different devices without having to modify the code for the abstraction.
3. Database drivers: Database drivers can use the bridge pattern to separate the abstraction of the database interface from the implementation of the database driver. This allows the same database interface to be used with different database engines without having to modify the code for the abstraction.
4. Logging frameworks: Logging frameworks can use the bridge pattern to separate the abstraction of the logging interface from the implementation of the logging back-end. This allows the same logging interface to be used with different back-ends, such as a file, a database, or a remote server, without having to modify the code for the abstraction.
5. Messaging systems: Messaging systems, such as email clients or instant messaging clients, can use the bridge pattern to separate the abstraction of the messaging interface from the implementation of the messaging protocol. This allows the same messaging interface to be used with different protocols, such as SMTP or IMAP, without having to modify the code for the abstraction.