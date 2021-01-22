/*
 * @Author: Jingsheng Lyu
 * @Date: 2021-01-22 20:49:46
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2021-01-22 21:55:18
 * @FilePath: /Homework_Solution/HW2/guess_game.cpp
 * @Github: https://github.com/jingshenglyu
 * @Web: https://jingshenglyu.github.io/
 * @E-Mail: jingshenglyu@gmail.com
 */
#include <iostream>
#include <random>

int main(int argc, char const *argv[])
{

    int number, random;
    random = (std::rand() % 100);

    while (std::cin >> number)
    {
        if (number < random && number >= 0)
        {
            std::cout << "This number is larger." << std::endl;
        }
        else if (number > random && number <= 99)
        {
            std::cout << "This number is smaller." << std::endl;
        }
        else if (std::cin.fail())
        {
            std::cout << "Error encountered, exiting..." << std::endl;
        }
        else if (number < 0 || number > 99)
        {
            std::cout << "[WARNING] : Number must be between 0 and 99" << std::endl;
        }

        else if (number == random)
        {
            std::cout << "Great! You're right!" << std::endl;
            break;
        }
    };

    return 0;
}