#include <iostream>

int main() {

    /*
    When using the `new` keyword, C++ allocates memory on the Heap and returns it's
    memory address, which we store in the pointer.
    */

    // 1. Allocate space for one int on the Heap.
    int* heapPtr = new int(50);
    std::cout << "Value on heap: " << *heapPtr << "\n";

    // 2. IMPORTANT: You MUST free heap memory when done !
    delete heapPtr;

    // 3. Best Practice: Reset pointer to nullptr after deleting.
    heapPtr = nullptr;

    /*
    Every `new` must eventually have a matching `delete`. If we lose the pointer
    before calling `delete`, that memory remains unallocated and unreachable--
    this is called a **Memory Leak**.
    */


    return 0;
}