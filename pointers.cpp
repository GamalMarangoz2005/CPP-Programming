#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x << std::endl;

int main()
{

    // it is a heap allocated memory
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr = &buffer;

    delete[] buffer;
    std::cin.get();

    return 0;
}