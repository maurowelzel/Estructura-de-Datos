// sumar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
	c=0;
    cout<<"Coloque un numero"<<endl;
    cin>>a;
    while(a>0)
    {

        b=a%10;

        c=c+b;

        a=a/10;
    }
    cout<<"La suma es igua a :"<<endl;
    cout<<c<<endl;
  system("pause");
  
}