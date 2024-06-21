//friend
#include<iostream>
using namespace std;
class B;
class A{ 
int a;
public:
void input(){
cout<<"1st element= ";
cin>>a;
}
friend void add(A,B);
};

class B{
int b;
public:
void get(){
cout<<"2nd element= ";
cin>>b;
}
friend void add(A,B);
};
void add(A x,B y)
{
int c;
c=x.a+y.b;
cout<<"answer is "<<c;
}

int main()
{
A X;
X.input();
B Y;
Y.get();
add(X,Y);
return 0;
}
/*
1st element= 89
2nd element= 1
answer is 90
*/
