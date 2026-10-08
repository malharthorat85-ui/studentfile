#include<iostream>
using namespace std;

class Rectangle
{
public:
float length,breadth;

void accept()
{
cout<<"enter length:";
cin>>length;

cout<<"enter breadth:";
cin>>breadth;
}

float area();
float perimeter();

void display()
{

cout<<"area="<<area()<<endl;
cout<<"perimeter="<<perimeter()<<endl;
}
};

float Rectangle::area()
{
return length*breadth;
}

float Rectangle::perimeter()
{
return 2*(length+breadth);
}

int main()
{
Rectangle r;
r.accept();
r.display();

return 0;
}

