#include "DebitCard.h"
#include "Card.h"

DebitCard::DebitCard(int number, int _cvv_number, CardType ctype, float annulaCharge,int limit, DebitCardType dtype)
: Card(number,_cvv_number,ctype,annulaCharge,limit), dtype(dtype)
{
}

float DebitCard::CalculateTaxOnCharge()
{
    if(getCtype() == CardType::VISA){
        return (limit()/100) * annualCharge();
    }else if(getCtype() == CardType::MASTERCARD){
        return (limit()/50) * annualCharge();
    }  else{
        return (limit()/10) * annualCharge();
    } 
    return 0.0f;
}