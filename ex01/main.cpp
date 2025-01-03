#include "Span.h"
int main()
{
{	std::cout << "\033[33m" << "Test range iterators\n"<< "\033[0m";
	Span sp = Span(5);
	std::vector<unsigned int> v;
	v.push_back(6);
	v.push_back(3);
	v.push_back(17);
	v.push_back(9);
	v.push_back(11);
	sp.addNumber(v.begin(), v.end());
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;}
{	
	std::cout << "\033[33m" << "Test spam add Number\n"<< "\033[0m";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}
	
	}
