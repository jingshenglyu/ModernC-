/*
 * @Author: Jingsheng Lyu
 * @Date: 2021-01-22 20:49:46
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2021-02-27 21:40:25
 * @FilePath: /ModernCpp/Homework_Solution/HW2/guess_game.cpp
 * @Github: https://github.com/jingshenglyu
 * @Web: https://jingshenglyu.github.io/
 * @E-Mail: jingshenglyu@gmail.com
 */
#include <iostream>
#include <random>

int main(int argc, char const *argv[]) {

  int number, random;
  random = (std::rand() % 100);

  while (std::cin >> number) {
    if (number < 0 || number > 99) {
      std::cout << "[WARNING] : Number must be between 0 and 99\n";
    } else if (number < random) // no need to test if it's out of bounds
    {
      std::cout << "This number is larger.\n";
    } else if (number > random) // no need to test if it's out of bounds
    {
      std::cout << "This number is smaller.\n";
    } else // no need to test anything
    {
      std::cout << "Great! You're right!\n";
      break;
    }
  };
  if (std::cin.fail()) {
    std::cerr << "Error encountered, exiting...\n";

    return 1;
  }

  return 0;
}

