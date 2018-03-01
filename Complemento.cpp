// Complemento.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 

int main ()
{
    int a,b,c,aux;
	c=0;
    int s=0, auxx=0;
    cout << "Coloque un numero entero : ";
    cin >> a;
    aux = a;
    while (a>0)
    {
    b = a%10;
    b = 9-b;
    c = (b+c)*10;
    a = a/10;
    }
    c = c/10;
    while (c>0)
    {
        s=c%10;
        auxx=(s+auxx)*10;
        c=c/10;
    }
	cout <<"El complemento 9 es :  ";
    cout << auxx / 10 << endl;
    

	system("pause");
}