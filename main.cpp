
#include <cstdio>
#include <stdio.h>
#include "cdate.h"
#include "ctime.h"
#include "cmoney.h"
#include "cadress.h"
#include <iostream>
using namespace std;


int main()
{
    CDate Datum1, Datum2(4, 10, 2019);
    CTime Zeit1, Zeit2(23, 59, 59);
    CMoney Betrag1(150.0);
    CAdress Adresse1("Ballstr","12346","Berlin");

    printf ("Heutiges Datum: ");
    Datum1.print();
    printf ("\n");
    printf ("Erster SU-Tag: ");
    Datum2.print();
    printf("\n");

    printf("maximale Zeit: ");
    Zeit2.print();
    printf("\n");
    printf("Aktuelle Uhrzeit: ");
    Zeit1.print();
    printf("\n");

    printf("aktueller Betrag: ");
    Betrag1.print();
    printf("\n");

    printf("Adresse: ");
    Adresse1.print();
    printf("\n");
   // printf("Testadresse2:");
   // Adresse2.print();
   //printf("\n");

    return 0;

}



