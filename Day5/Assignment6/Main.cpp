#include <iostream>
#include "Card.h"
#include "fucntionalities.h"
#include "NoMatchingCard.h"

int main()
{
    // [1]
    Card *card[5] = {nullptr};
    try
    {
        createObjects(card);
        // [2]
        Card **a = CreditCardWithMatchingIssuer(card, CardType::MASTERCARD);
        for (int i = 0; i < 5 && a[i] != nullptr; i++)
        {
            std::cout << *card[i] << std::endl;
        }

        // [3]
        if (returnCardPointer(card, 123634) != nullptr)
        {
            std::cout << *returnCardPointer(card, 1236) << std::endl;
        }

        // [4]
        std::cout << CvvNumber(card, 145) << std::endl;
    }
    catch (NoMatchingCard &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

// in pass the result container by reference