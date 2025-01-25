# STL (Standard Template Library):

The STL (Standard Template Library) is a key part of C++ that provides a collection of **generic classes and functions**. These tools help with common programming tasks such as data manipulation, searching, and sorting. as it provides robust implementations of data structures and algorithms.

## Key Components of STL
1. **Containers**

    These are data structures to store collections of data:
- **Sequence Containers:** Store elements in a specific order.
    - `vector` (dynamic arrays)
    - `deque` (double-ended queues)
    - `list` (doubly linked lists)
- **Associative Containers:** Store elements in a sorted order (by key).
    - `set`, `multiset`
    - `map`, `multimap`
- **Container Adapters:** Wrappers around sequence containers.
    - `stack`, `queue`, `priority_queue`

2. **Iterators**

    Abstractions for traversing through containers:

- Input Iterator
- Output Iterator
- Forward Iterator
- Bidirectional Iterator
- Random Access Iterator

3. Algorithms

    Generic functions that operate on containers:

- Searching: `find`, `binary_search`
- Sorting: `sort`, `stable_sort`
- Modifying: `copy`, `transform`, `replace`
- Other operations: `accumulate`, `adjacent_find`

4. **Functors**

    Objects that act as functions, e.g., `greater`, `less`.

5. **Utility Components**

    Common utilities for C++ programs:

- `pair`
- `std::make_pair`