#include<iostream>
using namespace std;
class Samplecopyconstructor
{
    private:
    int x, y;   
    
    public:
    Samplecopyconstructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    Samplecopyconstructor (const Samplecopyconstructor &c)
    {
        x = c.x;
        y = c.y;
    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Samplecopyconstructor obj1(10, 15);     
    Samplecopyconstructor obj2 = obj1;      
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
    return 0;
}