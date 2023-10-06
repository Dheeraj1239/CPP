#ifndef FUCNTIONALITIES_H
#define FUCNTIONALITIES_H

#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "DebitCardType.h"
#include <iostream>
#include <list>

// void createObjects(DebitCard* dcard[2], CreditCard* ccard[3]){
bool checkNull(Card *card[5]);

void createObjects(Card *card[5]);

Card** CreditCardWithMatchingIssuer(Card *card[5], CardType cardType);

Card *returnCardPointer(Card *card[5], int num);

float CvvNumber(Card *card[5], int num);

#endif // FUCNTIONALITIES_H
