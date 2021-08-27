#include <iostream>
#include <iterator>

const char * concatStr( char* dest, const char* src )
{ 
    char* firstAdrOfDest = dest;
    const char* firstAdrOfSrc = src;

    size_t sizeOfFirst = 0;
    size_t sizeOfLast = 0;

    while( *dest != '\0') {
        ++dest;
        ++sizeOfFirst;
    }
    while (*src != '\0') {
        ++src;
        ++sizeOfLast;
    }

    std::cout << std::size(firstAdrOfDest) << " " << sizeOfFirst << " " << sizeOfLast << std::endl;

    if( std::size(firstAdrOfDest) > sizeOfFirst + sizeOfLast ) {
        while (*dest++ = *firstAdrOfSrc++);
        return firstAdrOfDest;
    }
    else {
        return nullptr;
    }
}

int main()
{
    char firstStr[32] =  { "Hello " };
    char secondStr[]  = { "World!" };
    concatStr( firstStr, secondStr );

    std::cout << firstStr << std::endl;

    return 0;
}