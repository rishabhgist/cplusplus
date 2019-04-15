#include <iostream>
using namespace std;
class ABC
{
    public:
        ABC () 
       {
 	    cout << "constructor called" << endl;
       }
       ~ABC() 
       {
             cout << "destructor called" << endl;
       }
};

int main()
{
     ABC c;
     cout << "exiting main function" << endl;
     return 0;
}