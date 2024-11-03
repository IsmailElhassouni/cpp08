#include <iostream>
#include <unistd.h>
#include "MutantStack.h"
#include "vector"
#include <stack>
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;

// MutantStack<int>::it its = mstack.begin();
}