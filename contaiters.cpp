#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::stack<std::vector> myStack;

    myStack.push(5);
    myStack.push(7);
    myStack.push(2);

    std::cout << myStack.top() << std::endl;
    myStack.pop();

    std::cout << myStack.top() << std::endl;
    myStack.pop();

    std::cout << myStack.top() << std::endl;
    myStack.pop();

    return 0;
}