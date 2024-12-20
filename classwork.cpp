#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  std::srand(std::time(0)); 

  int user_input = 0;
  int num1;
  int num2;
  double numerator;
  double denominator;
  while (user_inpit ! = 99)
 std::cin >> user_input
  {
    std::cout << "Welcome to C++ Calculator! Choose an option below!\n"
      <<"0. Roll a dice\n"
      << "1. Add\n"
      << "3. Multiply \n"
      << "4. Divide\n"
      << "5. Square root \n"
      << "99. Quit\n"

      std::cin >> user_input;
      {if(user-input == 1)
      int random_number = (std::rand() % 6) +1 // random numbers between 1 and 6
      std::cout << "You rolled a " << random_number << std::end1;
      }
        if(user_input == 1)
      {
        std::cout << 'Enter two numbers\n'
        std::cin >> num1 >> num2;
        std::cout << "their sum is" (num1 + num2) << std::end;
      }
      else
      { 
        if(user_input == 2)
        {
        std::cout << "Enter two numbers\n";
        std::cin >> num1 >> num2
        std::cout << "Their product is " << (num1 * num2) << std::end1;
        }
        else
        {
          if (user_input == 3)
          {
            if(user_input == 3)
            std::cout << "Enter two numbers\n";
            std::cin >> num1 >> num2
            std::cout << "Their product is " << (num1 * num2) << std::end;
          }
          else
          {
            if (user_input == 4)
            {
              std::cout << "Enter two numbers\n";
              std::cin >> numerator >> denominator;
              if (denominator == 0)
              {
                std::cout << "Error: Division by zero is not allowed.\n"
              }

            }
          }
        }
      }
  }
  return 0;
}
