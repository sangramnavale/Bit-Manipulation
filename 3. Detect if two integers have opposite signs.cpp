#include <iostream>

using namespace std;

bool oppositeSign(int x, int y)
{
    if((x ^ y) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y;
    cout << "Enter a value for x: ";
    cin >> x;
    
    cout << "Enter a value for y: ";
    cin >> y;
    
    // -1 100 -> true
    // 100 200 -> false
    
    // -ve int: 0, +ve int: 1 
    // XOR truth table
    // 0 0 0
    // 0 1 1
    // 1 0 1
    // 1 1 0
    
    int result = oppositeSign(x, y);
    cout << result;
    return 0;
}
