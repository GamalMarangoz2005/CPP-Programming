#include <iostream>

int main()
{
    // Look at this snippet: 

    int* ptr = new int(100);
    ptr = new int(200);
    delete ptr;

    /*
    1. What value gets deleted by delete ptr ?
    2. Did this code cause a memory leak ? Why or why not ?
    */

    /*
    My Answer was:
    I think that values got deleted is the new int(100) because the pointer is now 
    referencing the space of new int(200) and we lost track of the new int(100) and 
    I think this caused a memory leak because we lost track of the original 100 spaces 
    of int allocated initially because it now references the new int 200.
    */

    /*
    The Correct Answer is:

    int* ptr = new int (100);
    A space on the heap is allocated storing 100. ptr holds its address (let's call it Address A).

    ptr = new int(100);
    A second space on the heap is allocated storing 200 at Address B. ptr is overwritten
    with Address B. Address A(100) is now lost forever in memory.

    delete ptr;
    This deletes whatever the memory address ptr currently holds, which is Address B (200).
    */

    /*
    Analyzing my answers.

    - I was wrong because I have said that 100 is delete but, 200 is deleted because 
    it is currently pointing to 200 because of the last change in the line ptr = new int(200);
    so, the delete ptr; is immediately after the line so, this means the 200 is deleted because
    it had already overwritten the first allocation of the 100. 

    - Despite, the answer is wrong but, the explanation is correct because the pointer is now 
     referencing to the 200 and overwritten the 100.
    
    - The answer to the second question is actually correct and a memory leak occurred because
    ptr was overwritten with new int(200); which means the address of 100 was lost without calling delete
    on it first. That memory block containing 100 remains allocated until the program closes. 
     */

     // How to fix this problem
}