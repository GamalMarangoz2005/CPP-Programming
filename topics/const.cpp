#include <iostream>
#include <string>

int main()
{
    // we are free to change this integer value
    int a = 5;
    a = 2;



    // if we have another variable that is constant like this
    const int b = 5;

    // changing here is not allowed because it is a constant value.
    //b = 2; 



    // creating a pointer in the heap
    int* c = new int;
    *c = 2;
    std::cout << *c << std::endl;

    // also we can dereference our pointer to the MAX_AGE variable that we had created.
    const int MAX_AGE = 90;
    c =(int*)&MAX_AGE;
    std::cout << *c << std::endl;






    // creating a constant pointer
    const int* d = new int;
    //*d = 2; // we cannot dereference and change the value of d

    // but, here notice that we don't get any errors.
    // we cannot change the contents of that pointer
    // or the data at this memory address; when changing 
    // pointer d to point to something else like MAX_AGE
    // that's not a problem.
    d = (int*)&MAX_AGE;
    std::cout << *d << std::endl;


    // what we do here that we can change the contents of the pointer
    // but, we cannot re-assign the actual pointer itself to point to
    // something else.
    int* const e = new int;
    *e = 2;
    //e = (int*)&MAX_AGE;
    std::cout << *e << std::endl;

    // the key here that both keywords const int and int const
    // both are before the *. We cannot dereference them and change
    // their values but, we can change the pointer referencing to.
    int const* f1 = new int;
    const int* f2 = new int;

    // we can change what the pointer is pointing to
    // but, we cannot change the contents of what that 
    // pointer is pointing to.
    *f1 = 2; // we can't change the contents of that pointer.
    f1 = nullptr; // this is feasible
    f1 = (int*)&MAX_AGE; // this is also feasible.


    // we can't change what the pointer is pointing to
    // but, we can change the contenents of what that 
    // pointer is pointing to.
    int* const g1 = new int;
    //const* int g2 = new int; // is a wrong syntax by the way.
    *g1 = 2;
     g1 = (int*)&MAX_AGE;
     g1 = nullptr;
    std::cout << *g1 << std::endl;
    
    /*
    this is means that we cannot change the contents of the 
    pointer using dereferencing neither changing what is the 
    pointer pointing to; doing so will make the compiler 
    generate an error
    */
    const int* const h = new int;
    *h = 2;
    h = (int*)&MAX_AGE;
    h = nullptr;
    std::cout << *h << std::endl;

    std::cin.get();
}