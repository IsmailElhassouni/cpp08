#pragma once
#include <iostream>
#include <vector>
#include <stack>
template <typename T, class f = std::deque<T> >
class MutantStack: public std::stack<T, f>
{
    private:
        f s;
    public:
        typedef typename f:iterator it;
        it begin()
        {
            return  c.begin();
        }
}