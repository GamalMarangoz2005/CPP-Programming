## Memory Inspection & Address Arithmetic

To solidify how pointers hold raw memory addresses, try these foundational exercises:

* **Address Printing & Dereferencing:** Declare a standard integer, print its memory address using the address-of operator (`&`), and assign it to an `int*`. Use the dereference operator (`*`) to read and modify the value through the pointer.
* **Array Traversal via Arithmetic:** Create an array of five elements. Point a variable to the first element and loop through the array using pointer incrementing (`ptr++`) instead of standard array indexing (`arr[i]`), observing how the memory addresses shift by the exact byte size of the data type.

## Heap Allocation & Resource Control

Understanding the distinction between stack and heap memory is vital when dealing with manual resource management:

* **Manual Allocation Blocks:** Allocate an integer buffer on the heap using `new[]` of a size specified at runtime, fill it with data, and cleanly free it using `delete[]`.

## Working with Double Pointers

* **Modifying Pointers via Functions:** Write a function that accepts an `int**` (pointer to a pointer) to reassign a pointer's address to a newly allocated block of memory, observing how pass-by-value applies to pointers themselves.

---

[Pointers in C++](https://www.youtube.com/watch?v=DTxHyVn0ODg&utm_source=gemini) provides a clear conceptual breakdown of how memory addresses operate under the hood in C++.

Would you like to move on to exploring smart pointers and RAII next?