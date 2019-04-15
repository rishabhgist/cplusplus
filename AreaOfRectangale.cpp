#include<iostream>
#include<conio.h>
	
	using namespace std;


class rectangle 
	{ 
	     private: 
	     	int m,n; 
	     public: 
	     	void setdata(int,int); 
	     	void area();
	     	void display(); 
	}; 

void rectangle::setdata(int u, int v)
	{
		m=u;
		n=v;
	}
void rectangle::area()
	{
		int a=m*n; 
		cout<<"\nArea of Rectangle= "<<a;
	}
int main()
{
	rectangle c;
	c.setdata(10,15);
	c.area();
return 0;
}