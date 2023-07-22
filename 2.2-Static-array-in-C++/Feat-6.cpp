#include <iostream>

int main(void)
{
    using namespace std;
    int ar[] = { 5, 6, 2, -1, 9, 4 };
    
    constexpr int bytes_ar = sizeof(ar);
    constexpr int size_ar = sizeof(ar) / sizeof(ar[0]);
    
    return 0;
}