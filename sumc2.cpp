#include<iostream>
using namespace std;
class Add
{
int a,b,c;
public:
void read()
{
cout<<"enter the two numbers"<<endl;
cin>>a>>b;
}
void sum()
{
c=a+b;
cout<<"sum is "<<c;
}
};
int main()
{
Add a;
a.read();
a.sum();
return 0;
}
