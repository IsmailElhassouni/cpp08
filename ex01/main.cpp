#include "Span.h"
int main()
{
    try{
Span sp = Span(10);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << '\n';
std::cout << sp.longestSpan() << '\n';
        }    
        catch(std::exception &e){
            std::cout<<e.what()<<'\n';
        };
}