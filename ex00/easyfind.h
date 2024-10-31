#pragma once
#include <iostream>
#include <exception>
template <typename T> int easyfind(T &container, int value)
{
    for( typename T::iterator it=container.begin(); it != container.end(); it++)
    {
        if (*it == value)
            return *it;
    }
    throw std::runtime_error("Value not found");
}