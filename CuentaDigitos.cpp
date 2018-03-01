// CuentaDigitos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
		c=0;
    cout<<"Coloque un numero entero :  ";
    cin>>a;
    while(a>0)
    {
        b=a%10;
        if(b%2==0)
        { 
            c++;
        }

        a=a/10;
    }
    cout<<"La cantidad de digitos pares es:     ";
    cout<<c;
    system("pause");

}