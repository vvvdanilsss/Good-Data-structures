#include <iostream>

int main(void)
{
    using namespace std;
    short digits[] = { 5, -4, 3, 10, 2, 7, 9, 2 };

    constexpr int del_index = 2;
    constexpr int len_dig = sizeof(digits) / sizeof(*digits) - 1;

    for (int i = del_index; i < len_dig; ++i)
        digits[i] = digits[i + 1];
    
    return 0;
}