#include <iostream>
#include <unistd.h>
#include "MutantStack.h"
#include "vector"
#include <stack>
int main()
{
    MutantStack<int> mstack;

    std::list<int> l1;
    l1.push_back(5);
    l1.push_back(17);
    l1.push_back(3);
    l1.push_back(737);
    MutantStack<int, std::list<int> >::iterator it = l1.begin();
    MutantStack<int, std::list<int> >::iterator endit=l1.end();
    std::list<int>::iterator itlist = l1.begin();
    std::list<int>::iterator endlist=l1.end();
    std::cout<<*itlist<<"\t"<<*endlist<<std::endl;
    std::cout<<*it<<"\t"<<*endit<<std::endl;
    l1.pop_back();

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