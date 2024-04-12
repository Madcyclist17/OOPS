#include<iostream>
using namespace std;
class Arithematic
{
private:
float a,b,add,sub,mul;
float e,d,div;
int c,choice;
public:
void read()
{
cout<<"enter the two elements "<<endl;
cin>>a>>b;
}
void cal()
{
do{
cout<<"enter the choice"<<endl<<"1.addition"<<endl<<"2.subtraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl;
cin>>choice;
switch(choice)
{
case 1:add=a+b;
	cout<<a<<"+"<<b<<"="<<add<<endl;
	break;
case 2:sub=a-b;
	cout<<a<<"-"<<b<<"="<<sub<<endl;
	break;
case 3:mul=a*b;
	cout<<a<<"*"<<b<<"="<<mul<<endl;
	break;
case 4:div=a/b;
	cout<<a<<"/"<<b<<"="<<div<<endl;
	break;
default:;
}
cout<<"to continue press 1"<<endl;
cin>>c;
}
while(c==1);
}

};
int main()
{
Arithematic a;
a.read();
a.cal();
}
