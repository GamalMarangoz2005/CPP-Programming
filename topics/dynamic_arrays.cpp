#include <iostream>

int main()
{
    /*
        Dynamic Arrays ( new[] and delete[] )
        When allocating a single variable on the heap, we use new and delete.
        When allocating an array whose size is determined at runtime, we use new[] and delete[].
    */

    // Consider this example
    int size = 5;

    // allocates contiguous heap memory for 5 integers.
    int* arr = new int[size]; 

    for(int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10; // Access using array indexing or *(arr + i)
        std::cout << "Arr[" << i << "]: " << arr[i] << "\n";
    }

    // ALWAYS use delete[] for heap arrays !
    delete[] arr;
    arr = nullptr;


    return 0;
}