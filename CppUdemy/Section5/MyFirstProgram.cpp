#include "MyFirstProgram.h"
#include <iostream>

using namespace std;

void MyFirstProgram::Intro()
{
    cout<<"May I Know your name?";
    getline(cin,name);
    cout<<"Welcome Mr. "<<name;
}

void MyFirstProgram::Sum()
{
    cout<<"Enter 2 Numbers.";
    cin>>a>>b;
    c = a+b;
    cout<<"Sum is "<<c<<endl;
}
