#include<iostream>
#include<iomanip>
using namespace std;
class Matrix
{
private:
int k,p,q,n,m,i ,j,a[10][10],b[10][10],c[10][10];
public:
void read()
{
cout<<"enter the rows & columns for 1st matrix"<<endl;
cin>>m>>n;
cout<<"enter the 1st matrix"<<endl;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cin>>a[i][j];
	}
}
for(i=0;i<m;i++)
	{
cout<<endl;
	for(j=0;j<n;j++)
	{
	cout<<setw(4)<<a[i][j];
	}
}
cout<<endl<<"enter the rows & columns for 2nd matrix"<<endl;
cin>>p>>q;
cout<<"enter the 2nd matrix"<<endl;
for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
	{
	cin>>b[i][j];
	}
}
for(i=0;i<p;i++)
	{
cout<<endl;
	for(j=0;j<q;j++)
	{
	cout<<setw(4)<<b[i][j];
	}
}
}

void mul()
{
if(n==p)
{
for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
		{
		c[i][j]=0;
		for(k=0;k<p;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}	
	}
}
else{
 cout<<"multiplication is not possible"<<endl;
}
}
void result()
{
cout<<endl<<"the resultant matrix is";
for(i=0;i<m;i++)
	{
cout<<endl;
	for(j=0;j<p;j++)
	{
	cout<<setw(4)<<c[i][j];
	}
}
}

};
int main()
{
Matrix m;
m.read();
m.mul();
m.result();
return 0;
}

