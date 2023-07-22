#include <iostream>

int main(void)
{
    using namespace std;
    int v1[4] = { 2, -1, 4, 3 };
    int v2[4] = { 5, 4, 7, -1 };

    constexpr int len_vec = sizeof(v1) / sizeof(*v1);
    int v_res = 0;

    for (int i = 0; i < len_vec; ++i)
        v_res += v1[i] * v2[i];

    return 0;
}