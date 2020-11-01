// Find_If.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    std::vector<int>numbers{ 1,2,3,4,5 };
    auto it = std::find_if(numbers.begin(), numbers.end(), [&](int number) {return number == 1; });

    std::cout << *it;

}