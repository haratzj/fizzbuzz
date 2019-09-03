#include <iostream>

int main () {
    std::string fizz = "Fizz", buzz = "Buzz", fizzbuzz = "FizzBuzz";
    for (int num = 1; num <= 100; num++){
        if (num%15 == 0){
            std::cout << fizzbuzz << "\n";
        } else if (num%3 == 0)
        {
            std::cout << fizz << "\n";
        } else if (num%5 == 0)
        {
            std::cout << buzz << "\n";
        }  else
        {
            std::cout << num << "\n";
        }
    }
    return 0;
}