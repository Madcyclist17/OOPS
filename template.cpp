//template
#include<iostream>
using namespace std;
template <class T>
T maximum(T a,T b)
{
if(a==b)
{
cout<<a<<" and "<<b<<"are equal"<<endl;
}
else if(a>b)
{
cout<<a<<" greater than "<<b<<endl;
}
else 
{
cout<<a<<" less than "<<b<<endl;
}
} 
int main()
{
maximum(3,2);
maximum(5.6,2.3);
maximum(7,7);
}
/*
3 greater than 2
5.6 greater than 2.3
7 and 7are equal
*/

