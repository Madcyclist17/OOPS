#include<iostream>
using namespace std;
int main()
{
int a[10],i,n,largest,smallest;
cout<<"how many elements u want to insert"<<endl;
cin>>n;
cout<<"enter the numbers "<<endl;
for(i=0;i<n;i++){
cin>>a[i];}

largest=a[0];
for(i=0;i<n-1;i++)
{
if(largest<a[i+1])
{
largest=a[i+1];
}
}
cout<<"largest element is "<<largest<<endl;

smallest=a[0];
for(i=0;i<n-1;i++)
{
if(smallest>a[i+1])
{
smallest=a[i+1];
}
}cout<<"smallest element is "<<smallest<<endl;
}
