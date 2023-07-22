#include <iostream>
#include <string.h>

int main(void)
{
    using namespace std;
    char str_1[] = "Structures data";
    char str_2[20];

    constexpr int len_str_2 = sizeof(str_2) - 1;
    strncpy(str_2, str_1, len_str_2);
    str_2[len_str_2] = '\0';

    return 0;
}