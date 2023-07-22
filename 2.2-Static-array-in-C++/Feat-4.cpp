#include <iostream>

int main(void)
{
    using namespace std;
    const int len_ar = 7;
    char ar[len_ar] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    for(int i = len_ar; i > 2; --i)
        ar[i] = ar[i - 1];

    ar[2] = '#';

    return 0;
}