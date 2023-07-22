#include <iostream>
#include <iterator>

int main(void)
{
    int func[17];

    constexpr int len = sizeof(func) / sizeof(*func);
    constexpr int x_min = 4;

    for (int x = x_min, i = 0; i < len && x <= 20; ++x, ++i)
        func[i] = 2 * x - 5;

    return 0;
}