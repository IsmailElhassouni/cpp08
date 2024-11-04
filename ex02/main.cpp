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
MutantStack<int>::iterator its = mstack.begin();
MutantStack<int>::iterator end=mstack.end()-1;
std::cout<<*its<<"\t"<<*end<<std::endl;
}