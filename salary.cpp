#include<iostream>
class Employee
{
private:
char emp_name[20];
int emp_no;
float salary,net_salary,gross_salary,DA,IT,basic;
public:
void getdata()
{
cout<<"enter the name of employee:"<<endl;
cin>>emp_name;
cout<<"enter the employee number: "<<endl;
cin>>emp_no;
cout<<"enter the salary: "<<endl;
cin>>salary;
}
void details()
{
        cout<<"\n ----------------------";
        cout<<"\n Employee No. : "<<acc;
        cout<<"\n Employee Name : "<<name;
	calc();
	cout<<"\n Net salary : "<<net_salary;
	cout<<"\n Gross salary : "<<gross_salary;
	 cout<<"\n ----------------------"<<endl;
}
void calc()
{
DA=((salary*52)/100);
IT=((gross_salary*30)/100);
gross_salary=salary+DA;
net_salary=gross_salary-IT;
}
};
int main()
{
int i,e;
Employee e[n];
for(i=0;i<n;i++)
{
e[i].getdata();
}
for(i=0;i<n;i++)
{
e[i].details();
}
}
