#include <iostream>
#include <cmath>
using namespace std;

double k(const double x, const double y);

int main()
{
    double p, q;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double numerator = pow(k(1 + p, q * q), 2) - k(q * p, 1);
    double denominator = 1 + k(p * p, q);
    double result = numerator / denominator;

    cout << "Result = " << result << endl;

    return 0;
}

double k(const double x, const double y)
{
    return (sin(x) / (y * y)) + (cos(y) / (x * x));
}
