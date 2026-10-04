#include <iostream>

int main()
{
    /*
        Trace the following code

        What are the outputs of 
        variables a and b ?
    */

    int a = 10;
    int b = 20;
    int* p = &a;

    *p = 30;
     p = &b;
    *p = 40;
}