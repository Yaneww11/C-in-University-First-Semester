#include <iostream>

using namespace std;

int main()
{
    string name = "Yane Yanev";

   cout << name.length()<< endl;
   name[0] = 'C';
   name [9] = 'k';
   cout << name << endl;
   cout << name[9] << endl;
   string LastName;
   LastName = name.substr(4,9);
   cout << "Last name:  " << LastName << endl;

    return 0;
}
