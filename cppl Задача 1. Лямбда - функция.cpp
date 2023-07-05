#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    setlocale(LC_ALL, "Rus");

    std::vector<int> vec{ 4, 7, 9, 14, 12 };

    auto print = [](const int& n)
    {
        std::cout << n << " ";
    };

    std::cout << "Входные данные: ";
    std::for_each(vec.cbegin(), vec.cend(), print);
    std::cout << std::endl;

    std::for_each(vec.begin(), vec.end(), [&vec](int& i)
        {
            if (i % 2 != 0)
            {
                (i) *= 3;
            }
        });

    std::cout << "Выходные данные: ";
    std::for_each(vec.cbegin(), vec.cend(), print);
    std::cout << std::endl;

}