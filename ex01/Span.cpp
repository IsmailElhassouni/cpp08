#include "Span.h"
Span::Span() : N(0) {}
Span::Span(unsigned int n) : N(n) {}
Span::Span(Span const &other) : N(other.N), v(other.v) {}
Span &Span::operator=(Span const &other)
{
    N = other.N;
    v = other.v;
    return *this;
}
Span::~Span() {}
void Span::addNumber(unsigned int n)
{
    static unsigned int check;
    if(check == N)
        throw std::runtime_error("Span is full");
    v.push_back(n);
}
unsigned int Span::shortestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough elements");
    vector<unsigned int> temp = v;
    std::sort(temp.begin(), temp.end());
    unsigned int min=temp[temp.size()/2] - temp[temp.size()/2-1];
    return min;
}
unsigned int Span::longestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough elements");
    vector<unsigned int> temp = v;
    std::sort(temp.begin(), temp.end());
    unsigned int max=temp[temp.size()-1] - temp[0];
    return max;
}