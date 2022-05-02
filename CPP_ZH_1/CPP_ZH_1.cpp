// CPP_ZH_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ajandekKosarKatalogus.h"

#include <iostream>

int main()
{
    AjandekKosarKatalogus ak;
    ak.Beolvas("kosarak.txt");
   
    std::cout << ak;
}


