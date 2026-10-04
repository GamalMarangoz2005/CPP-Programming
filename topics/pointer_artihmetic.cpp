/*
Pointer Arithmetic

Because arrays are stored sequentially in memory,
adding or subtracting integers from a pointer moves it 
by increments of the data type's byte size.
*/

#include <iostream>

int main()
{
    int numbers[] = {10, 20, 30, 40};
    int* ptr = numbers; // Points to numbers[0]

    std::cout << *ptr << "\n";           //Output: 10
    std::cout << *(ptr + 1) << "\n";  // Output: 20 (moves forward by sizeof(int) bytes)
    std::cout << *(ptr + 2) << "\n";  // Output: 30

    ptr++; // Advances pointer to numbers[1]
    std::cout << *ptr << "\n"; // Output: 20

    return 0;
}