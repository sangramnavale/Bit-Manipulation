#include <iostream>

using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while(n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

bool bleakNum(int n)
{
    for(int i = 1; i < n; i++)
    {
        if(i + countSetBits(i) == n)
        {
            return false;
        }
    }
    return true;
}

int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 0)
    {
        cout << "Error! Does not work for negative numbers!" << endl;
    }
    else
    {
        int result = bleakNum(n);
        if(result == 0)
        {
            cout << n << " is not a bleak number!" << endl;
        }
        else
        {
            cout << n << " is a bleak number!" << endl;
        }
    }
    return 0;
}
