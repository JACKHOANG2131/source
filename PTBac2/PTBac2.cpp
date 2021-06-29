#include <iostream>
#include <math.h>
using namespace std;

float a, b, c;
int ptbac1(float x, float y)
{
    if (x == 0) {
        if (y == 0) cout << "Phương trình vô số nghiệm." << endl;
        else cout << "Phương trình vô nghiệm." << endl;
    }
    else cout << "Phương trình có nghiệm duy nhất là: " << -y / x << endl;
    return 0;
}
int ptbac2(float x, float y, float z)
{
    if (x == 0) ptbac1(y, z);
    else {
        float Delta = y*y - 4 * x * z;
        if (Delta < 0) cout << "Phương trình vô nghiệm." << endl;
        else if (Delta == 0) cout << "Phương trình có nghiệm kép là: " << -b / (2 * a) << endl;
        else cout << "Phương trình có 2 nghiệm phân biệt là: " << (-b + sqrt(Delta)) / (2 * a) << " và " << (-b - sqrt(Delta)) / (2 * a) << endl;
    }
    return 0;
}   
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> a >> b >> c;
    ptbac2(a, b, c);
    return 0;
}
