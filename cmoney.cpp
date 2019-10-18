#include <stdio.h>
#include <stdlib.h>
#include "cmoney.h"

void CMoney::print()
{
 printf("%4.2f %s", amount, currency.c_str());
}

CMoney::CMoney()
:amount (0.0),currency ("Euro"){}

CMoney::CMoney(double amount, string currency)
:amount (amount), currency(currency){} //deklaration


