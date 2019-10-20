#ifndef CADRESS_H
#define CADRESS_H
#include <cstring>
#include <iostream>
using namespace std;

class CAdress
{
   private:
	string street;
	string postcode;
	string town;

   public:
   CAdress();
   CAdress(string street="Ballstr", string postcode="12346", string town="Berlin");
   void setStreet(string street);
   string getStreet(){return street;}

   void print();

};




#endif
