/*

    for End-Users

*/

#include <iostream>

float square(float number)
{
    return number * number;
}

float percentage(float number, float pct_factor)
{
    return number * (pct_factor / 100);
}

float cube(float number)
{
    return number * number * number;
}

int Factorial(int number)
{
    if (number < 0)
    {
        throw std::runtime_error("Negative number problem");
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * Factorial(number - 1);
    }
}

void SwitchMenu()
{
    while (true)
    {
        int choice = 0;
        std::cout << "Enter a number ";
        float number;
        std::cin >> number;
        std::cout << "Enter 1 for square \n2 fro cube \n 3 for Facorial \n 4 to quit";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            square(number);
            break;
        case 2:
            cube(number);
        case 3:
            try
            {
                Factorial((int)number); // explicit type casting!  native cpp style of casting static_cast<int>(number) ; compile time casting
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
            break;
        case 4:
            return; // exit(0);  // exit with zero errors
        default:
            std::cout << "Enter valid choice";
            break;
        }
    }
}

int main()
{
    SwitchMenu();

    return 0;
}


/**
 * checked and unchecked exception concept ??
*/