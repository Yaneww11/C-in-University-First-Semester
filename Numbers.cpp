#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num =5;
    double dnum =5.6;
    dnum+= 7;
    cout << dnum << endl;
    cout << 10.0 / 3 << endl;
    //3 raised to the power of 2 =9
    cout << pow(3,2) << endl;
    //the square root of 4 = 2
    cout << sqrt(4) << endl;
    // round - zakruglqne
    cout << round(4.5) << endl;
    // round up
    cout << ceil(4.011) << endl;
    //round down
    cout << floor(4.99) << endl;

    cout << fmin(3,2.3);


    return 0;
}
