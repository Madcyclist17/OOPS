#include<iostream>
using namespace std;
class Bank
{
private:
int members[3];
char name[35];
char acc[3];
int total=0,amount,bala,c,choice;
char type[1];
public:
void read()
{
cout<<"enter the name "<<endl;
cin>>name;
cout<<"enter the account number "<<endl;
cin>>acc;
cout<<"enter the type "<<endl;
cin>>type;
}
void deposite()
{
cout<<"enter the amount to deposite"<<endl;
cin>>amount;
total=total+amount;
bala=total;
cout<<"the balance amount is "<<bala<<endl;
}
void withdraw()
{

cout<<"enter the amount to withdraw"<<endl;
cin>>amount;
if(total<amount)
cout<<"insufficient balance"<<endl;
else 
{
	total=total-amount;
	bala=total;
	cout<<"the balance amount is "<<bala<<endl;
}
}
void balance()
{
bala=total;
cout<<"the balance amount is "<<bala<<endl;
}
void display()
{
do{
cout<<"enter the account number";

cout<<"enter the choice"<<endl<<"1.deposite"<<endl<<"2.withdraw"<<endl<<"3.balance"<<endl;
cin>>choice;
switch(choice)
{
case 1:deposite();
	break;
case 2:withdraw();
	break;
case 3:balance();
	break;
default:;
}
/*else 
cout<<"enter the correct account no"<<endl;
*/
}
while(c==1);
}

void details()
{

cout<<name<<endl;
cout<<acc<<endl;
cout<<type<<endl;
cout>>bala;

}
};
int main()
{
int i;
Bank a[3];
for(i=0;i<=3;i++)
a.read();

}

