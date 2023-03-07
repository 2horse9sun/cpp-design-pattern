# Iterator

The Iterator design pattern is a behavioral design pattern that provides a way to **access the elements of a collection sequentially without exposing its underlying representation**. The key idea behind the Iterator pattern is to **encapsulate the traversal of the collection within an object called an iterator**, which is responsible for **keeping track of the current position within the collection and providing methods to move to the next or previous element, as well as to retrieve the current element**.

The Iterator pattern is useful in situations where you have a collection of objects that you want to iterate over without exposing the internal structure of the collection. By using an iterator, you can **separate the traversal algorithm from the collection itself** (i.e., C++ STL), which makes it easier to change the algorithm without affecting the collection.

Another benefit of the Iterator pattern is that it allows you to provide a standard interface for iterating over different types of collections. For example, you can define a single iterator interface that can be used to iterate over arrays, linked lists, trees, or any other type of collection.

