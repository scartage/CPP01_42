# Exercise 01: Moar brainz!
## Overview
This exercise focuses on demonstrating the use of dynamic memory allocation for managing arrays of objects in C++. It involves creating a "horde" of Zombie objects, each initialized with a given name, and then managing this collection in memory efficiently.

## Key Concepts
- **Dynamic Memory Allocation**
  - Heap vs. Stack: Understanding the difference between memory allocated on the heap and the stack. The heap allows for flexible memory allocation during runtime, essential for creating an array of objects whose size might not be known at compile time.
  - new Operator: Used for allocating memory on the heap. It not only reserves memory but also calls the constructor to initialize the object(s).
- **Constructors and Destructors**
  - Overloading Constructors: Implementing multiple constructors within a class to allow for different initialization contexts.
  - Destructor: Ensures proper cleanup of resources or memory when an object's lifecycle ends.
- **Managing Arrays of Objects**
  - Single Allocation: The exercise demonstrates allocating an array of Zombie objects in a single operation, which is efficient and simplifies memory management.
  - Initialization: Post-allocation, each Zombie in the array is initialized with a given name.
- **Memory Management Best Practices**
  - Avoiding Memory Leaks: Ensuring that dynamically allocated memory is properly freed using delete[] when it is no longer needed.
  - Resource Management: Understanding the importance of constructors and destructors in managing resources, especially when dealing with dynamic memory allocation.

## Implementation Details
### Zombie Class
The Zombie class includes:
- Private member _name for storing the zombie's name.
- Public constructor for initialization with a name, and a default constructor.
- A method announce() for the zombie to introduce itself.
- A destructor that outputs a debug message.

### zombieHorde Function
This function dynamically creates an array of Zombie objects, each initialized with the same name. It demonstrates efficient memory allocation and object initialization practices in C++.

## Testing and Validation
The main function tests the zombieHorde by creating a horde, invoking announce on each Zombie, and then cleaning up the allocated memory. It's crucial to test for memory leaks and ensure all dynamically allocated memory is properly released.

## Conclusion
This exercise provides a practical example of using dynamic memory to manage arrays of objects in C++. It reinforces the importance of understanding memory allocation, object lifecycle management, and the use of constructors and destructors for efficient and safe C++ programming.
