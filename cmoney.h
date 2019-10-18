#ifndef CMONEY_H
#define CMONEY_H
#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;

/*
Eigenschaften:
double amount
string currency
*/

class CMoney
{
   private:
	double amount;
	string currency;

   public:
   CMoney();
   CMoney(double amount,string currency = "Euro");
   void setAmount(double amount);
   double getAmount(){return amount;}
  // void setCurrency(string);


   void print();
};


#endif
