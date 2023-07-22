#include <iostream>

int main(void)
{
    using namespace std;
    short digits[10] = { 5, -4, 3, 10, 2, 7, 9, 2 };

    constexpr int ins_index = 2;
    constexpr int len_dig = sizeof(digits) / sizeof(*digits) - 1;

    for (int i = len_dig; i > ins_index; --i)
        digits[i] = digits[i - 2];

    digits[3] = 101;
    digits[4] = 102;

    return 0;
}