//heirarchial inheritance
#include<iostream>
using namespace std;
class Rectangle{
protected:
int l,b;
public:
void getdata()
{
cout<<"enter the length and breadth"<<endl;
cin>>l>>b;
}
};
 class Area:public Rectangle{
public:
void rarea(){
int a=0;
a=l*b;
cout<<"area of the rectangle="<<a<<endl;
}
};
 class Perimeter:public Rectangle{
public:
void rperimeter(){

int p=0;
p=(2*(l+b));
cout<<"perimeter of the rectangle="<<p<<endl;
}
};
int main(){
Rectangle R;
Area A;
Perimeter P;
A.getdata();
A.rarea();
P.getdata();
P.rperimeter();

return 0;
}
    