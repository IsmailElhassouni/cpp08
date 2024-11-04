#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>
#include <iterator>
#include <list>
template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack & operator= (const MutantStack& other) ;
        ~MutantStack() {};
        iterator begin()
        {
            return  this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};
template<typename R,class Container > MutantStack<R,Container>::MutantStack() : std::stack<R,Container>() {}
template<typename R,class Container > MutantStack<R,Container>::MutantStack(const MutantStack &other) : std::stack<R,Container>(other) {}
template<typename R,class Container > MutantStack<R, Container>&  MutantStack<R, Container>::operator=(const MutantStack<R, Container> &other) 
{
    if (this != &other)
        std::stack<R,Container>::operator=(other);
    return *this;
};
