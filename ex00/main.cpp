#include "easyfind.h"
#include <vector>
#include <deque>
#include <list>
int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::deque<int> d;
    d.push_back(4);
    d.push_back(6);
    d.push_back(6);
    std::list<int> l;
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    try
    {
        std::cout << easyfind(l, 7) << '\n';
        std::cout << easyfind(l, 8) << '\n';
        std::cout << easyfind(d, 0) << '\n';
        std::cout << easyfind(d, 4) << '\n';
        std::cout << easyfind(v, 2) << '\n';
        std::cout << easyfind(v, 1) << '\n';
        std::cout << easyfind(v, 3) << '\n';
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}