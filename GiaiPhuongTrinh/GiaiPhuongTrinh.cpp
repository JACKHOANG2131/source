#include <iostream>
using namespace std;
float a, b;
float nghiem;
void GiaiPhuongTrinh()
{
    cin >> a >> b;
    if (a != 0)
    {
        nghiem = -b / a;
        cout << nghiem << " Là nghiệm của phương trình." << endl;
    }
    else if (a == 0 && b == 0)
    {
        cout << "Phương trình có vô số nghiệm." << endl;
    }
    else cout << "Phương trình vô nghiệm." << endl;
}
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    GiaiPhuongTrinh();
    return 0;
}
