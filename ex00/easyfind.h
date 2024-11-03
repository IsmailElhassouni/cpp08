#pragma once
#include <iostream>
#include <exception>
#include <algorithm>
template <typename T> int easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(),container.end(),value);
    if( it!= container.end())
    {
        return value;
    }
    else
        throw std::runtime_error("Value not found");
}