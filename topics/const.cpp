#include <iostream>
#include <string>

int main()
{
    // we are free to change this integer value
    int a = 5;
    a = 2;
    std::cout << "\nWe are free to change this integer value\nint a = 5;\na = 2;\n" << std::endl;


    // if we have another variable that is constant like this
    const int b = 5;

    // changing here is not allowed because it is a constant value.
    //b = 2; 
    std::cout << "If we have another variable that is constant like this\nconst int b = 5;\n\n" 
              << "Changing here is not allowed because it is a constant value.\nb = 2;\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;

    // -------------------------------------------------------------------------------------------------------------------------




    // creating a pointer in the heap
    int* c = new int;
    *c = 2;
    
    std::cout   << "\nCreating a pointer in the heap\n"
    << "int* c = new int;\n"
    << "*c = 2;\n" << std::endl;

    std::cout << "Output\n" << *c << "\n" << std::endl;

    // also we can dereference our pointer to the MAX_AGE variable that we had created.
    const int MAX_AGE = 90;
    c =(int*)&MAX_AGE;

    std::cout << "Also we can dereference our pointer to the \nMAX_AGE variable that we had created\n\n"
              << "const int MAX_AGE = 90;\nc = (int*)&MAX_AGE;\n" << std::endl;
    std::cout << "Output\n" << *c << "\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;


    // -------------------------------------------------------------------------------------------------------------------------



    

    // creating a constant pointer
    const int* d = new int;
    //*d = 2; // we cannot dereference and change the value of d

    // but, here notice that we don't get any errors.
    // we cannot change the contents of that pointer
    // or the data at this memory address; when changing 
    // pointer d to point to something else like MAX_AGE
    // that's not a problem.
    d = (int*)&MAX_AGE;

    std::cout << "\nCreating a constant pointer\n"
              << "const int* d = new int;\n"
              << "*d = 2;                 | not allowed to change the data at the address!\n"
              << " d = (int*)&MAX_AGE;    | allowed to change the memory address referring to\n"
              << std::endl;
    std::cout << "Output\n" << *d << "\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;


    // -------------------------------------------------------------------------------------------------------------------------


    // what we do here that we can change the contents of the pointer
    // but, we cannot re-assign the actual pointer itself to point to
    // something else.
    int* const e = new int;
    *e = 2;
    //e = (int*)&MAX_AGE;

    std::cout << "\nWe cannot re-assign the actual pointer to point to something else\n"
              << "but, we can change the contents of the pointer or the data in the address\n"
              << "that this pointer is pointing to\n\n"
              << "int* const e = new int;\n*e = 2;                    | allowed !\n"
              << " e = (int*)&MAX_AGE;       | not allowed !\n" << std::endl;
    std::cout << "Output\n" << *e << "\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;


    // -------------------------------------------------------------------------------------------------------------------------



    // the key here that both keywords const int and int const
    // both are before the *. We cannot dereference them and change
    // their values but, we can change the pointer referencing to.
    int const* f1 = new int;
    const int* f2 = new int;

    std::cout << "\nBoth of those pointers cannot dereferenced and alter the data in the addresses they are pointing to\n"
              << "but, we can change the address that they are pointing to so, they could be referring to another addresses\n"
              << "\nint const* f1  = new int;\n" << "const int* f2 = new int;\n" << std::endl;

    // we can change what the pointer is pointing to
    // but, we cannot change the contents of what that 
    // pointer is pointing to.
    // *f1 = 2; // we can't change the contents of that pointer.
    f1 = nullptr; // this is feasible
    f1 = (int*)&MAX_AGE; // this is also feasible.

    std::cout << "*f1 = 2;                  | can't change the contents of that pointer.\n"
              << " f1 = nullptr;            | this is feasible !\n"
              << " f1 = (int*)&MAX_AGE;     | this is feasible !\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;



    // -------------------------------------------------------------------------------------------------------------------------




    // we can't change what the pointer is pointing to
    // but, we can change the contenents of what that 
    // pointer is pointing to.
    int* const g1 = new int;
    // const* int g2 = new int; // is a wrong syntax by the way.

    *g1 = 2;
    //  g1 = (int*)&MAX_AGE;
    //  g1 = nullptr;

    // *g2 = 4;
    //  g2 = (int*)&MAX_AGE;
    //  g2 = nullptr;

    std::cout << "\nBoth of these pointers cannot be pointing to another addresses\n"
              << "but, we can change the contents of what that pointer is pointing to\n\n"
              << "int* const g1 = new int; | this is a valid syntax !\n"
              << "const* int g2 = new int; | this is invalid syntax !\n"
              << "\n*g1 = 2;                 | allowed to change the data to 2\n"
              << " g1 = (int*)&MAX_AGE;    | not allowed to change the reference\n"
              << " g1 = nullptr;           | not allowed to change the reference\n" << std::endl;
    std::cout << "Output\n" << *g1 << "\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;

    // -------------------------------------------------------------------------------------------------------------------------


    /*
    this is means that we cannot change the contents of the 
    pointer using dereferencing neither changing what is the 
    pointer pointing to; doing so will make the compiler 
    generate an error
    */
    const int* const h = new int;
    // *h = 2;
    //  h = (int*)&MAX_AGE;
    //  h = nullptr;
    
    std::cout   << "\nThis pointer specifically is constant in both\n"
                << "dereferencing it to change the data in the address that it is pointing to\n"
                << "even changing the address itself that it is pointing to which means we cannot\n"
                << "change the address that it is pointing to once, it is declared once !\n\n"
                << "const int* const h = new int;\n"
                << "*h = 2;                | not allowed to change the data\n" << " h = (int*)&MAX_AGE    | not allowed to change the reference\n"  << " h = nullptr;          | not allowed to change the reference\n" << std::endl;

    std::cout << "Output\n" << *h << "\n" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------------------" << std::endl;

    // -------------------------------------------------------------------------------------------------------------------------

    std::cout << "System Prompt: ";
    std::cin.get();

    // -------------------------------------------------------------------------------------------------------------------------


    return 0;
}