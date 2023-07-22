#include <iostream>
#include <math.h>

int main(void)
{
    using namespace std;
    int vector3D[3]{15, 4, -5};

    constexpr int len_vec = sizeof(vector3D) / sizeof(*vector3D);
    int norm2 = 0;

    for (int i = 0; i < len_vec; ++i)
        norm2 += pow(vector3D[i], 2);

    cout << norm2;

    return 0;
}