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
mstack.push(3);
mstack.push(737);
MutantStack<int>::iterator its = mstack.begin();
MutantStack<int>::iterator end=mstack.end();
std::cout<<*its<<"\t"<<*end<<std::endl;
mstack.pop();
std::cout<<mstack.top()<<std::endl;
std::cout<<mstack.size()<<std::endl;
end--;
its =end;
std::cout<<*its<<"\t"<<*end<<std::endl;
std::cout<<"-------------------"<<std::endl;
std::list<int> l1;
l1.push_back(5);
l1.push_back(17);
l1.push_back(3);
l1.push_back(737);
std::list<int>::iterator itlist = l1.begin();
std::list<int>::iterator endlist=l1.end();
std::cout<<*itlist<<"\t"<<*endlist<<std::endl;
l1.pop_back();
std::cout<<l1.back()<<std::endl;
std::cout<<l1.size()<<std::endl;
endlist--;
itlist =endlist;
std::cout<<*itlist<<"\t"<<*endlist<<std::endl;
std::cout<<"-------------------"<<std::endl;
MutantStack<int, std::vector<int> > mstack2;
mstack2.push(5);
mstack2.push(17);
mstack2.push(3);
mstack2.push(737);

MutantStack<int,std::vector<int> >::iterator begin = mstack2.begin();
MutantStack<int,std::vector<int> >::iterator e=mstack2.end();

std::cout<<*begin<<"\t"<<*e<<std::endl;
mstack2.pop();
std::cout<<mstack2.top()<<std::endl;
std::cout<<mstack2.size()<<std::endl;
e--;
begin = e;
std::cout<<*begin<<"\t"<<*e<<std::endl;

}