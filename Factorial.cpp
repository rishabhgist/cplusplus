#include<iostream>
#include<conio.h>

using namespace std;

class factorial {

   int a,i,n;

public:
   factorial() {
       cout << "Enter the number to determine its factors : " << endl; 
       cin>>n;
       cout << "The factors of " << n << " are : " << endl;
          for(i = 1; i <= n; ++i)
            {
              if(n % i == 0)
                  cout << i << endl;
            }
   }
};
int main() {
    factorial b;
   return 0;
}