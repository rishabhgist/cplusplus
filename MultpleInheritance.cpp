#include <iostream>
using namespace std;

class Android {
  public:
    Android()
    {
      cout << "Android is made by Google" << endl;
    }
};

class iOS {
  public:
    iOS()
    {
      cout << "iOS is made by Apple" << endl;
    }
};

class OS: public Android, public iOS {

};

int main()
{
    OS b1;
    return 0;
}