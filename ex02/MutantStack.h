#pragma once
#include <iostream>
#include <vector>
#include <stack>
template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        iterator begin()
        {
            return  this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};
