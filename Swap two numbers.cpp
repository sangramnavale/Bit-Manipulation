#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter a value for x: ";
    cin >> x;
    
    cout << "Enter a value for y: ";
    cin >> y;
    
    cout << "x : " << x << " " << " y: " << y << endl;
    
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    cout << "x : " << x << " " << " y: " << y << endl;
    
    return 0;
}
