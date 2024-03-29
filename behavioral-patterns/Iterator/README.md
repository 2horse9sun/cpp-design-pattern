# Iterator

The Iterator design pattern is a behavioral design pattern that provides a way to **access the elements of a collection sequentially without exposing its underlying representation**. The key idea behind the Iterator pattern is to **encapsulate the traversal of the collection within an object called an iterator**, which is responsible for **keeping track of the current position within the collection and providing methods to move to the next or previous element, as well as to retrieve the current element**.

The Iterator pattern is useful in situations where you have a collection of objects that you want to iterate over without exposing the internal structure of the collection. By using an iterator, you can **separate the traversal algorithm from the collection itself** (i.e., C++ STL), which makes it easier to change the algorithm without affecting the collection.

Another benefit of the Iterator pattern is that it allows you to provide a standard interface for iterating over different types of collections. For example, you can define a single iterator interface that can be used to iterate over arrays, linked lists, trees, or any other type of collection.

# Use Cases

1. Collection traversal: An Iterator can be used to traverse the elements of a collection, such as an array, a list, or a tree. This can simplify the code for iterating over the collection and make it more modular and reusable. ([C++ STL vector iterator](./use-cases/VectorIterator))
2. Lazy loading: An Iterator can be used to load elements of a collection on demand, rather than all at once. This can improve performance and reduce memory usage, especially for large collections.
3. Filtering and mapping: An Iterator can be used to filter or map elements of a collection, without modifying the underlying collection. This can simplify the code for data processing and make it more flexible and reusable.
4. Pagination: An Iterator can be used to paginate a large collection, by fetching a small number of elements at a time. This can improve performance and reduce network usage, especially for web applications.
5. Custom iteration order: An Iterator can be used to define a custom iteration order for a collection, rather than relying on the default order. This can allow for more efficient algorithms or better user experience.