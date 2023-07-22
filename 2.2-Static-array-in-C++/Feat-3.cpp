#include <iostream>

int main(void)
{
    using namespace std;
    const int len_ar = 15;
    int ar[len_ar];

    for (int i = 0; i < len_ar; ++i)
        ar[i] = -1;

    ar[4] = 100;
    
    return 0;
}