/**
 Write a program that prints in the terminal all prime numbers from 3 till 99.
 Remember: A number is a prime when any division by a smaller number results in
 a remainder that is never zero.
*/
#include <iostream>
#include <cmath> // for sqrt

int main()
{
    for (int num = 3; num <= 99; num++)
    {
        bool isPrime = true;

        // check divisibility
        for (int i = 2; i <= std::sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break; // not prime
            }
        }

        if (isPrime)
        {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
