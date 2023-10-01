#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B >> C;
    
    if (abs(A-C) > abs(A-B)) 
    {
        cout << "B " << abs(A - B);
    }
    else
    {
        cout << "C " << abs(A - C);
    }    
}
