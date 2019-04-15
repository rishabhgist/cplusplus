#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int real,imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }

complex(int r,int i)
{
    real=r;
    imag=i;
}
void display()
{
    cout<<"("<<real<<'+'<<imag<<'i'<<")";
}
complex operator+(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}
};

int main()
{
    complex c1,c2,c3;
    c1=complex(4,3);
    c2=complex(1,1);
    c3=c1+c2;
    c1.display();
    cout<<"+";
    c2.display();
    cout<<"=";
    c3.display();
    getch();
    return 0;
}