#include<iostream>
using namespace std;

class Student{
public:
string name;
int rollnumber;
int marks;

void getdata()
{	
	cout<<"Enter name:"<<endl;
	cin.ignore();
	getline(cin,name);
}
};

void result()
{	
	if(marks>=35){
	cout<<"pass";
	}
	else{
	cout<<"fail";
	}
};
void display()
{
	cout<<"name:"<<name;
	cout<<"rollnumber:"<<rollnumber;
	cout<<"marks;"<<marks;

	calculateResult();
};

int main()
{
	Student s;
	s.display();

	return0;
}
