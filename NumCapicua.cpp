// NumCapicua.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,aux;
	c=0;
    cout<<"Coloque un numero :   ";
    cin>>a;
    aux=a;
    while(a>0)
    {
        b=a%10;
        c=(b+c)*10;
        a=a/10;
    }
    if((c/10)==aux)
    {
        cout<<"El numero es capicua ";
    }
    else
    {
        cout<<"El numero no es capicua ";
    }
   system("pause");
}
