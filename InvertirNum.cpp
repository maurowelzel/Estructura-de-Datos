// InvertirNum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
	b=0;
	c=0;
    cout<<"Coloque un numero entero : "<<endl;
    cin>>a;
    while(a>0)
    {
        b=a%10;
        c=(b+c)*10;
        a=a/10;
    }
    cout<<"El numero invertido es :"<<endl;
    cout<<c/10<<endl;
	system("pause");


}
