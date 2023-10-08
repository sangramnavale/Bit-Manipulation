#include <iostream>

using namespace std;

int swapBits(int n)
{
    int even_mask = 0xAAAAAAAA;
    int odd_mask = 0x55555555;
    
    int even_bits = n & even_mask;
    int odd_bits = n & odd_mask;
    
    even_bits >>= 1;
    odd_bits <<= 1;
    
    int swapped_bits = even_bits | odd_bits;
    return swapped_bits;
}

int main()
{
    int n; 
    cin >> n;
    int res = swapBits(n);
    cout << res;
    return 0;
}
