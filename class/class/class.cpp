//#include<iostream>
//using namespace std;
#include"abc.h"
int maths::add(int x,int y)
{
        int z;
		z=x+y;
		return z;
}
int maths::sub(int x,int y)
{
	int z;
	z=y-x;
	return z;
}
int maths::mul(int x,int y)
{
	int z;
	z=x*y;
	return z;
}
/*int add::display()
{
        cout<<z<<endl;
}
int sub::display()
{
	cout<<z<<endl;
}
int mul::display()
{
	cout<<z<<endl;
}*/

int main()
{
        maths e;
        int z=e.add(10,20);
		int z=e.sub(20,30);
		int z=e.mul(30,30);
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<z<<endl;
}