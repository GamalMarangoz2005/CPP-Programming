#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int* singlePointer = &a;
    int** doublePointer = &singlePointer;

    cout << "\n--- The Memory Addresses of Variables and Pointers ---\n";

    cout << "The Address of A             " << &a << '\n';
    cout << "The Address of singlePointer " << &singlePointer << '\n';
    cout << "The Address of doublePointer " << &doublePointer << '\n';

    cout << '\n';

    cout << "--- The Values of Variables and Pointers ---\n";
    cout << "The Value of A is " << a << '\n';
    cout << "The Value of singlePointer is " << singlePointer << '\n';
    cout << "The Value of doublePointer is " << doublePointer << '\n';

    cout << '\n';

    cout << "--- The Values of Pointers Dereferencing ---\n";
    cout << "The Dereference of singlePointer value is " << *singlePointer << '\n';
    cout << "The Single Dereference of doublePointer value is " << *doublePointer << '\n';
    cout << "The Double Dereference of doublePointer value is " << **doublePointer << '\n';

    cout << '\n';

    cout << "\nInsights\n\n";
    cout << "- Each of the variables and pointers has an independent memory address\n";    
    cout << "\n- The value of a single pointer is the memory address of the variable that the pointer is pointing to.\n";
    cout << "\n- The value of a double pointer is the memory address of the pointer that the pointer is pointing to.\n";
    cout << "\n- The dereferencing of a single pointer is the value of the variable that this pointer is pointing to.\n";
    cout << "\n- The single dereferencing of a double pointer is the value of the single pointer that this double pointer is pointing to which means memory address of the variable that the single pointer is pointing to.\n";
    cout << "\n- The double dereferencing of a double pointer is the value of the variable that the single pointer that was pointed by this double pointer.\n";
    
    
    /*
    The Outcomes from this Experiments are the following
    1. Variables, Single pointers and double pointers each of them has an independent memory address.
      1A. Accessing the addresses for each of the variables, pointers, double pointers and even multi-level pointers are accessed using the & operator followed
      by it's name -> &variable, &singlePointer, &doublePointer will show us the memory addresses of those locations themselves in the memory regardless of what is stored
      inside them.
    2. Pointers are variables storing memory addresses.
      2A. Pointers are storing memory address. Single pointers are storing the memory address of variables.
      2B. If we want to get access to the value of the variable itself then, we use the dereferencing * operator to get the value of what is inside this memory address.
      2C. Double pointers are storing the memory address of the single pointers. If we print the pointer then, it will show the memory address of the pointer it is pointing to.
            If we dereference the doublePointer using one * then, we get the value of the single pointer and if we double ** like this then, we as if we are dereferencing that single pointer
            that our double pointer is pointing to which means we get the value of the variable that the single pointer is pointing to but, since the double pointer is pointing to the single pointer
            then, double dereferencing gets us to the original memory location of the variable that we are pointing to and prints the value and we can even alter it.
    3. Pointers could be elevated to multiple levels which means I can make a pointer that is pointing to another pointer and this another pointer is 
        pointing to specific memory address of a variable.

    */


    return 0;
}