#include "easyfind.h"
#include <vector>
#include <deque>
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
    try
    {
        std::cout << easyfind(d, 0) << '\n';
        std::cout << easyfind(d, 4) << '\n';
        std::cout << easyfind(v, 2) << '\n';
        std::cout << easyfind(v, 1) << '\n';
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}