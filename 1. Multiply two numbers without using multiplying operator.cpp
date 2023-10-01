// Russian Peasant Multiplication
#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    int res = 0;
    
    while(a)
    {
        if(a % 2 == 1)
        {
            res = res + b;
        }
        a = a >> 1;
        b = b << 1;
    }
    
    return res;
}

int main()
{
    int a = 4;
    int b = 2;
    int res = multiply(a, b);
    cout << res << endl;
    return 0;
}
