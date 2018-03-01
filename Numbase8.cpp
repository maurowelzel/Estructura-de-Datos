// Numbase8.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>


using namespace std;

int main ()
{
    int a,b,c,aux;
    cout << "Coloca un numero entero  :  ";
    cin>>a;
    aux=a;
    while (a>0)
    {
    b=a%10;
    if (b>=8)
  {
     cout<<("Este digito no es base 8 :   ")<<b;
  }
        a=a/10;
    }
 system("pause");
}