#include <iostream>
#include <string.h>

bool strCat( char* dest, size_t length, const char* src ) { 
    auto lengthOfDest = strlen( dest );
    auto lengthOfSrc = strlen( src );

    while( *dest != '\0') { ++dest; }

    if( (lengthOfDest + lengthOfSrc + 1) < length ) {
        while ( *dest++ = *src++ );
        return true;
    }
    return false;
}

int main()
{
    const unsigned int sizeOfArr = 32;
    char firstStr[sizeOfArr] =  { "Hello " };
    char secondStr[]  = { "World!" };
    auto res = strCat( firstStr, sizeOfArr, secondStr );
    std::cout << "Result: " << res << std::endl;
    std::cout << firstStr << std::endl;

    return 0;
}