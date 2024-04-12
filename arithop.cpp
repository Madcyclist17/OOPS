#include<iostream>
using namespace std;
class Arithematic
{
private:
float a,b,add,sub,mul;
float e,d,div;
public:
void read()
{
cout<<"enter the two elements "<<endl;
cin>>a>>b;
}
void sum()
{
add=a+b;
cout<<a<<"+"<<b<<"="<<add<<endl;
}
void diff()
{
sub=a-b;
cout<<a<<"-"<<b<<"="<<sub<<endl;
}
void multi()
{
mul=a*b;
cout<<a<<"*"<<b<<"="<<mul<<endl;
}
void divi()
{
div=a/b;
cout<<a<<"/"<<b<<"="<<div<<endl;
}
};
int main()
{
Arithematic a;
a.read();
a.sum();
a.diff();
a.multi();
a.divi();
}
