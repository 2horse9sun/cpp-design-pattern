# Proxy

A proxy is a **wrapper or agent object** that is being called by the client to **access the real serving object behind the scenes**. Use of the proxy can simply be forwarding to the real object, or can **provide additional logic**. In the proxy, extra functionality can be provided, for example caching when operations on the real object are resource intensive, or **checking preconditions before operations** on the real object are invoked. For the client, usage of a proxy object is similar to using the real object, because both implement the same interface. (Wikipedia)

# Use Cases

1. Remote access: A Proxy can be used to provide remote access to an object, such as a remote service or a database. This can improve performance and scalability by reducing network traffic and client-server roundtrips.
2. Security: A Proxy can be used to control access to an object, such as by enforcing authentication, authorization, or encryption. This can improve security and prevent unauthorized access to sensitive data or resources.
3. Caching: A Proxy can be used to cache results from an expensive operation, such as a database query or a web service call. This can improve performance by reducing the number of times the operation needs to be performed. ([PerformanceMonitor](./use-cases/PerformanceMonitor))
4. Lazy initialization: A Proxy can be used to lazily initialize an object, such as by deferring its creation until it is actually needed. This can improve performance and reduce memory usage by avoiding the creation of objects that may not be used.
5. Logging and monitoring: A Proxy can be used to log or monitor access to an object, such as by recording the number of times it is accessed or the parameters of its methods. This can help diagnose problems, track usage patterns, or audit system activity.