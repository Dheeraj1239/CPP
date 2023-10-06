#ifndef FUCNTIONALITIES_H
#define FUCNTIONALITIES_H

#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "DebitCardType.h"
#include <iostream>
#include <list>
#include "NoMatchingCard.h"
#define SIZE 5

// void createObjects(DebitCard* dcard[2], CreditCard* ccard[3]){
bool checkNull(Card *card[5]) // check if there is atleat one data
{
    for (int i = 0; i < 5; i++)
    {
        if (card[i] != nullptr)
        {
            return false;
        }
    }
    return true;
}

void createObjects(Card *card[5])
{
    card[0] = new DebitCard(1234, 345, CardType::MASTERCARD, 123.45, 35, DebitCardType::DELUXE);
    card[1] = new DebitCard(1235, 346, CardType::RUPAY, 123.45, 35, DebitCardType::PREMIUM);

    card[2] = new CreditCard(1236, 347, CardType::VISA, 123.45, 35, 12);
    card[3] = new CreditCard(1237, 348, CardType::MASTERCARD, 123.45, 35, 12);
    card[4] = new CreditCard(1238, 349, CardType::RUPAY, 123.45, 35, 12);
}

Card** CreditCardWithMatchingIssuer(Card *card[5], CardType cardType)
{
    // std::list<Card *> ls;
    static Card* res[5];
    int k = 0;
    if (!checkNull(card))
    {

        for (int i = 0; i < 5; i++)
        {
            if (card[i] != nullptr && card[i]->getCtype() == cardType)
            {
                res[k++] = card[i];
            }
        }
    }
    else
    {
        throw std::runtime_error(" Your Container is Empty");
    }
    return res;
}

Card *returnCardPointer(Card *card[5], int num)
{
    int idx = -1;
    if (checkNull(card))
    {
        throw std::runtime_error(" Your Container is Empty");
    }
    else
    {

        for (int i = 0; i < 5; i++)
        {
            if (card[i]->number() == num)
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            // std::cout << "No Card Exists" << std::endl;
            throw NoMatchingCard("No Card Exists");
            // return nullptr;
        }
    }

    return card[idx];
}

float CvvNumber(Card *card[5], int num)
{
    float max = 0.0f;
    int idx = 0;
    if (checkNull(card))
    {
        throw std::runtime_error(" Your Container is Empty");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (card[i]->annualCharge() > max)
            {
                idx = i;
                max = card[i]->cvvNumber();
            }
        }
    }

    return card[idx]->cvvNumber();
}




#endif // FUCNTIONALITIES_H
