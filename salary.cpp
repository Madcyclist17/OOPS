//construcor with and without and argument
#include<iostream>
using namespace std;
class Employee
{
private:
char emp_name[20];
int emp_no;
float salary,net_salary,gross_salary,DA,IT;
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
        cout<<"\n Employee No. : "<<emp_no;
        cout<<"\n Employee Name : "<<emp_name;
	calc();
	cout<<"\n Gross salary : "<<gross_salary;
	cout<<"\n Net salary : "<<net_salary;
	 cout<<"\n ----------------------"<<endl;
}
void calc()
{
DA=((salary*52)/100);
gross_salary=salary+DA;
IT=((gross_salary*30)/100);
net_salary=gross_salary-IT;
}
};
int main()
{
int i;
Employee e[5];
for(i=0;i<5;i++)
{
e[i].getdata();
}
for(i=0;i<5;i++)
{
e[i].details();
}
}
/*
enter the name of employee:
shefna
enter the employee number: 
100
enter the salary: 
100000
enter the name of employee:
lahan
enter the employee number: 
101
enter the salary: 
50000
enter the name of employee:
naseem
enter the employee number: 
102
enter the salary: 
75000
enter the name of employee:
aswin
enter the employee number: 
103
enter the salary: 
54000
enter the name of employee:
midhun
enter the employee number: 
104
enter the salary: 
200000

 ----------------------
 Employee No. : 100
 Employee Name : shefna
 Net salary : 106400
 Gross salary : 152000
 ----------------------

 ----------------------
 Employee No. : 101
 Employee Name : lahan
 Net salary : 53200
 Gross salary : 76000
 ----------------------

 ----------------------
 Employee No. : 102
 Employee Name : naseem
 Net salary : 79800
 Gross salary : 114000
 ----------------------

 ----------------------
 Employee No. : 103
 Employee Name : aswin
 Net salary : 57456
 Gross salary : 82080
 ----------------------

 ----------------------
 Employee No. : 104
 Employee Name : midhun
 Net salary : 212800
 Gross salary : 304000
 ----------------------
*/
