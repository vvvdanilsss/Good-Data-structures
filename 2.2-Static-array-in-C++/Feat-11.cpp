#include <iostream>

int main(void)
{
    using namespace std;
    char marks[] = {5, 4, 2, 2, 2, 3};
    int size = sizeof(marks) / sizeof(marks[0]);

    // Вычисление суммы всех элементов массива
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += marks[i];
    }

    // Вычисление среднего арифметического
    double m_avr = static_cast<double>(sum) / size;

    return 0;
}