#include <iostream>

int main()
{
    int score = 100;

    // declare a pointer 'ptr' that holds the address of an integer variable
    int* ptr = &score;

    std::cout << "Value of score: " << score << "\n";
    std::cout << "Address of score: " << &score  << "\n";
    std::cout << "Address stored in ptr: " << ptr << "\n";
    std::cout << "Value pointed to by ptr: " << *ptr << "\n";

    // Modifying the value using the pointer
    *ptr = 250;
    std::cout << "New value of score: " << score << "\n"; // Output: 250
    

    return 0;
}