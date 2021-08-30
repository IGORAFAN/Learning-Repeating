#include <iostream>
#include <vector>


void findPairs(const std::vector<int>& vector) {
    size_t counter = 0;
    for( auto iter = vector.begin(); iter != vector.end(); ++iter ) {   
        counter = 0;
        for ( auto tempStorage = vector.begin(); tempStorage != vector.end(); ++tempStorage ) {
            if( iter != tempStorage && iter.operator*() == tempStorage.operator*() ){
                continue;
            }
            if( counter >= vector.size() - 1 ) {
                std::cout << "Doesn't has pair: " << iter.operator*() << std::endl; 
            }
            ++counter;
        }
    }
}

int main()
{
    std::vector<int> myVec = { 4, 2, 5, 3, 6, 4, 2, 5, 6, 1, 1};

    findPairs( myVec );

    return 0;
}