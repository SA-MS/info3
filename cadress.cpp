#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include "cadress.h"
using namespace std;

void CAdress::print()
{
 printf("%s / %s / %s", street.c_str(), postcode.c_str(), town.c_str());
}

CAdress::CAdress()
:street ("Beispielstrasse"), postcode("12345"), town("Berlin"){}

CAdress::CAdress(string street, string postcode, string town)
:street (street), postcode (postcode), town (town){}
