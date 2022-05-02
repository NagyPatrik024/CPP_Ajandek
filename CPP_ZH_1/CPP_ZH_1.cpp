// CPP_ZH_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ajandekKosarKatalogus.h"

#include <iostream>

int main()
{
    AjandekKosarKatalogus akk;
    akk.Beolvas("kosarak.txt");
   
    std::cout << akk;

   AjandekKosar ak = akk.Keres("Normal");
   std::vector<AjandekKosar> vector = akk.melyikTartalmaz("Csokolade");
}


