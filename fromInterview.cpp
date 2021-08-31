#include <exception>
#include <iostream>
#include <vector>

void Register(int number, void* handler)
void Unregister( int number );

void Registrator()
{   
    std::vector<int> myVec;
    try{
        Register(1, func1 );
        myVec.emplace(1);
        Register(2, func2 );
        myVec.emplace(2);
        Register(3, func3 );
        myVec.emplace(3);
    }
    catch( const std::exception& ex ){
        std::cout << ex.what() << std::endl;
        for(auto iter : myVec)
        {
            Unregister(iter.at());
        }
        throw;
    }
}

void Register(int number, void* handler);
void Unregister( int number );

void Registrator()
{ 
    Register(1, func1 );
    Register(2, func2 );
    Register(3, func3 );
}