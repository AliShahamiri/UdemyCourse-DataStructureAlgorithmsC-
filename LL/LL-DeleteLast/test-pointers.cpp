#include <iostream>
using namespace std;

int main()
{
    int* i1 = new int(1);
    int* i2 = i1;

    cout << *i1 << " " << *i2 << " " << endl;
    *i2=*i2*2; 
    cout << *i1 << " " << *i2 << " " << endl;
    return 0;
}