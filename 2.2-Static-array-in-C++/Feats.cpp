#include <iostream>
#include <cstring>
#include <cmath>

int main(void)
{
    using namespace std;

    // 3
    const int len_ar_1 = 15;
    int ar[len_ar_1];

    for (int i = 0; i < len_ar_1; ++i)
        ar[i] = -1;

    ar[4] = 100;

    // 4
    const int len_ar_2 = 7;
    char chars[len_ar_2] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    for(int i = len_ar_2; i > 2; --i)
        chars[i] = chars[i - 1];

    chars[2] = '#';

    // 5
    char str_1[] = "Structures data";
    char str_2[20];

    constexpr int len_str_2 = sizeof(str_2) - 1;
    strncpy(str_2, str_1, len_str_2);
    str_2[len_str_2] = '\0';

    // 6
    int arr[] = { 5, 6, 2, -1, 9, 4 };

    constexpr int bytes_ar = sizeof(arr);
    constexpr int size_ar = sizeof(arr) / sizeof(arr[0]);

    // 7
    int func[17];

    constexpr int len = sizeof(func) / sizeof(*func);
    constexpr int x_min = 4;

    for (int x = x_min, i = 0; i < len && x <= 20; ++x, ++i)
        func[i] = 2 * x - 5;

    // 8
    short digits[] = { 5, -4, 3, 10, 2, 7, 9, 2 };

    constexpr int del_index = 2;
    constexpr int len_dig = sizeof(digits) / sizeof(*digits) - 1;

    for (int i = del_index; i < len_dig; ++i)
        digits[i] = digits[i + 1];

    // 9
    short nums[10] = { 5, -4, 3, 10, 2, 7, 9, 2 };

    constexpr int ins_index = 2;
    constexpr int len_nums = sizeof(nums) / sizeof(*nums) - 1;

    for (int i = len_nums; i > ins_index; --i)
        nums[i] = nums[i - 2];

    nums[3] = 101;
    nums[4] = 102;

    // 10
    int vector3D[3]{15, 4, -5};

    constexpr int len_vec = sizeof(vector3D) / sizeof(*vector3D);
    int norm2 = 0;

    for (int i = 0; i < len_vec; ++i)
        norm2 += pow(vector3D[i], 2);

    cout << "norm2 = " << norm2 << endl;

    // 11
    char marks[] = {5, 4, 2, 2, 2, 3};
    int size = sizeof(marks) / sizeof(marks[0]);

    // Вычисление суммы всех элементов массива
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += marks[i];
    }

    // Вычисление среднего арифметического
    double m_avr = static_cast<double>(sum) / size;

    // 12
    int v1[4] = { 2, -1, 4, 3 };
    int v2[4] = { 5, 4, 7, -1 };

    constexpr int len_v = sizeof(v1) / sizeof(*v1);
    int v_res = 0;

    for (int i = 0; i < len_v; ++i)
        v_res += v1[i] * v2[i];

    return 0;
}