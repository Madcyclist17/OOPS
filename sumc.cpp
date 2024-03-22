#include<iostream>
using namespace std;
class Add
{
int a,b,c;
public: 
void sum()
{
cout<<"enter the two numbers:"<<endl;
cin>>a>>b;
c=a+b;
cout<<"sum is "<<c<<endl;
}
};
int main()
{
Add a;
a.sum();
return 0;
}
