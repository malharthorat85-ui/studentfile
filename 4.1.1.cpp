#include<iostream>
using namespace std;

class Calculator
{
public:

int add(int x,int y)
{
return x+y;
}

int add(int x,int y,int c )
{
return x+y+c;
}
};

int main()
{
Calculator c;

cout<<"the sum is:"<<c.add(2,3)<<endl;
cout<<"the sum is:"<<c.add(5,4,2)<<endl;

return 0;
}

