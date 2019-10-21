#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include "ccustomer.h"
using namespace std;

void CCustomer::print()
{
 printf(" %ld | %s | %s | %s", id, name.c_str(), birthday, address);
}

CCustomer::CCustomer()
:id (12345), name("Max Mustermann"), birthday(01,01,2001), address("Beispielstrasse","12345","Berlin"){}

CCustomer::CCustomer(long id, string name, CDate birthday, CAdress address)
:id (id), name (name), birthday (birthday), address (address){}
