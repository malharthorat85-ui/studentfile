#include<iostream>
using namespace std;

class Person
{
private:
string name;

public:

void read(){
cout<<"the person is reading"<<endl;
}};

class Student
{
private:
int rollNO;

public:
void read()
{
cout<<"the student is reading"<<endl;
}};

int main()
{
Person p;
Student s;
p.read();
s.read();

return 0;
}


