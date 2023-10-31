#include <iostream>

/** Computes the average of x and y */
float printAverage(float x, float y)
{
    return (x + y) / 2;
}

int main()
{
    float z = printAverage(2.25, 4.45);
    std::cout << z << std::endl;
    return 0;
}