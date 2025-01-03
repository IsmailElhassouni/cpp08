#pragma once
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
class Span
{
    unsigned int N;
    vector<unsigned int> v;
public:
    Span();
    Span(unsigned int N);
    Span(Span const &other);
    Span &operator=(Span const &other);
    ~Span();
    void addNumber(unsigned int N);
    void addNumber(vector<unsigned int>::iterator begin, vector<unsigned int>::iterator end);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};
