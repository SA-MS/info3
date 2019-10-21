#ifndef CCUSTOMER_H
#define CCUSTOMER_H

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
using namespace std;
#include "cadress.h"
#include "caccount.h"
#include "cmoney.h"
#include "cdate.h"

class CCustomer
{
  private:
	long id;
	string name;
	CDate birthday;
	CAdress address;
	//CAccount *accountList[];

  public:
  CCustomer();
  CCustomer(long id, string name, CDate birthday, CAdress address /* ,CAccount *accountList[]*/);

  void setId(long id);
  long getId(){return id;}
  void setName(string name);
  string getName(){return name;}
  void setBirthday(CDate birthday);
  CDate getBirthday(){return birthday;}
  void setAdress(CAdress address);
  CAdress getAdress(){return address;}

  void print();
};

#endif
