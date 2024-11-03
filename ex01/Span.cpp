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
    check++;
}
unsigned int Span::shortestSpan()
{
    if (v.size() < 2)
        throw std::runtime_error("Not enough elements");
    unsigned int min = longestSpan();
    for(vector<unsigned int>::iterator it = v.begin(); it != v.end(); it++)
    {
        for(vector<unsigned int>::iterator ft_it = v.begin(); ft_it != v.end(); ft_it++)
        {
            if(ft_it != it && (*ft_it - *it) < min)
                min = *ft_it - *it;
        }
    }
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