#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:

int id;
string name;
float basicsalary;
float bonus;
float totalsalary;

Employee()
{

id=0;
name="unknown";
basicsalary=0;
bonus=0;
totalsalary=0;

cout<<"default constructor is used";
}

Employee(int id,string n,float s,float b)
{

id=id;
name=n;
basicsalary=s;
bonus=b;

calculate();

cout<<"parameterize constructor is used";
}

float calculate()
{
totalsalary=basicsalary+bonus;
return 0;
}

void display()
{
cout<<"id is:"<<id<<endl;
cout<<"name is:"<<name<<endl;
cout<<"basicsalary is:"<<basicsalary<<endl;
cout<<"bonus is:"<<bonus<<endl;
cout<<"totalsalary is:"<<totalsalary<<endl;
}
};

int main()
{
Employee e1;
e1.display();

Employee e2(123,"john",50000,5000);
e2.display();
return 0;
}

