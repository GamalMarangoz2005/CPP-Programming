#include <iostream>

int main()
{

    /*
        How to fix it ?
        To re-assign a pointer to a new heap allocation safely,
        always free the previous memory first:
    */

    int* ptr = new int(100);

    // Free the original allocation first;
    delete ptr;

    // Now safe to allocate new memory
    ptr = new int(200);

    // Clean up the second allocation when finished
    delete ptr;
    ptr = nullptr;



    return 0;
}