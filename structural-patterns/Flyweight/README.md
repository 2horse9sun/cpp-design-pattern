# Flyweight

The Flyweight design pattern is a software design pattern that aims to minimize the memory usage and improve performance by **sharing common data across multiple objects**. It is used when we need to create a large number of similar objects that have overlapping data and can be shared.

In this pattern, instead of each object storing its own copy of data, a separate shared object called the "flyweight" is used to store the common data. The flyweight object is immutable and can be shared among multiple objects. The unique data for each object, called the "extrinsic state," is stored separately and passed to the flyweight objects when needed.

# Use Cases

1. Memory efficiency: By sharing common data among multiple objects, the Flyweight pattern reduces the memory footprint. Instead of each object storing its own copy of the data, they refer to the shared flyweight object.
2. Performance improvement: Sharing data reduces the amount of memory that needs to be accessed, improving performance. Additionally, by separating the intrinsic and extrinsic states, the flyweight objects can be reused, eliminating the need to create new objects.
3. Scalability: The Flyweight pattern is particularly useful when dealing with a large number of objects. It allows you to create a large number of lightweight objects without exhausting system resources.
4. Maintainability: By separating the intrinsic and extrinsic states, the Flyweight pattern improves code maintainability. Changes to the extrinsic state can be made without modifying the shared flyweight object, reducing the impact on the overall system.
5. Consistency: Since the flyweight objects are immutable and shared, they ensure consistency across objects. Any changes made to the shared flyweight object will be reflected in all the objects using it.