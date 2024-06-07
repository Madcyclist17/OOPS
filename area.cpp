//function overloading
#include<iostream>
using namespace std;
class Geometry{
public:
float geo;

int area(int a)
{
	 geo=(3.14*a*a);
	cout<<"area of the circle="<<geo<<" cm^2"<<endl;
}
int area(double a,double b)
{
	 geo=(.5*a*b);
	cout<<"area of the triangle="<<geo<<" cm^2"<<endl;
}
int area(int a,int b)
{
	 geo=(a*b);
	cout<<"area of the rectangle="<<geo<<" cm^2"<<endl;
}
int area(double s)
{
	 geo=(s*s);
	cout<<"area of the square="<<geo<<" cm^2"<<endl;
}
};
int main()
{
int x,y;
double p,q;
cout<<"enter the radius= ";
cin>>x;
cout<<"enter the base and height= ";
cin>>p>>q;
cout<<"enter the length and breadth= ";
cin>>x>>y;
cout<<"enter the side= ";
cin>>p;
Geometry g1;
g1.area(x);
g1.area(p,q);
g1.area(x,y);
g1.area(p);
return 0;

}

/*
enter the radius= 5
enter the base and height= 5.5
7.5
enter the length and breadth= 9
10
enter the side= 6  
area of the circle=254.34 cm^2
area of the triangle=22.5 cm^2
area of the rectangle=90 cm^2
area of the square=36 cm^2

*/
