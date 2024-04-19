#include<iostream>
using namespace std;
class Bank
{
private:
int members[3];
char name[35];
int acc;
int total=0,amount,bala,c,choice;
char type[1];
public:



void read()
{
cout<<"enter the name :"<<endl;
cin>>name;
cout<<"enter the account number: "<<endl;
cin>>acc;
cout<<"enter the type(Saving 'S' & Current 'C') "<<endl;
cin>>type;

        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acc;
        cout<<"\n Name : "<<name;
        cout<<"\n Account Type : "<<type; 
	 cout<<"\n ----------------------"<<endl;
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
void details()
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acc;
        cout<<"\n Name : "<<name;
        cout<<"\n Account Type : "<<type;
        cout<<"\n Balance : "<<bala;  
	 cout<<"\n ----------------------"<<endl;
}
/*void checkacc(int inputacc)
{
if(inputacc==acc)
display();
else
cout<<"enter the valid acc no:"<<endl;
}*/

void display(int inputacc)
{
if(inputacc==acc){
do{
cout<<"enter the choice"<<endl<<"1.deposite"<<endl<<"2.withdraw"<<endl<<"3.balance"<<endl<<"4.details"<<endl;
cin>>choice;
switch(choice)
{
case 1:deposite();
	break;
case 2:withdraw();
	break;
case 3:balance();
	break;
case 4:details();
default:;
}
cout<<"to continue press 1"<<endl;
cin>>c;
}
while(c==1);
}
else 
cout<<"enter the correct account no"<<endl;
}


};
int main()
{
int i,acc,n;
cout<<"\n ----------------------"<<endl<<"enter no.of account holders"<<endl;
cin>>n;
Bank a[n];
for(i=0;i<n;i++)
{
a[i].read();
}

cout<<"enter the account number :";
cin>>acc;
for(i=0;i<n;i++)
a[i].display(acc);
cout<<"enter the account number :";
cin>>acc;
for(i=0;i<n;i++)
a[i].display(acc);
cout<<"enter the account number :";
cin>>acc;
for(i=0;i<n;i++)
a[i].display(acc);

for(i=0;i<n;i++)
a[i].details();
}
