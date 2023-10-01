#include <iostream>

using namespace std;

bool equalNums(int x, int y)
{
    if(x ^ y) return true;
    return false;
}
int main()
{
    int x, y;
    cout << "Enter a value for x: ";
    cin >> x;
    
    cout << "Enter a value for y: ";
    cin >> y;
    
    int result = equalNums(x, y);
    cout << result;
    return 0;
}
