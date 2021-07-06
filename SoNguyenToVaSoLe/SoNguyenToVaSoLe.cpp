#include <iostream>
using namespace std;
int a, b, c;
void SoNguyenTo(int x) {
    int SoPhanTu = 0;
    int i;
    for (i = 1; i <= x; i++) {
        if (x % i == 0) SoPhanTu++;
    }
    if (SoPhanTu == 2) cout << x << " là số nguyên tố." << endl;
    else cout << x << " không phải là số nguyên tố." << endl;
}
void XuatSoLe(int x, int y) {
    int i = x;
    while (i <= y) {
        if (i % 2 != 0) {
            cout << i << " ";
            i++;
        }
        i++;
    }
}
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> a >> b >> c;
    SoNguyenTo(a);
    XuatSoLe(b, c);
    return 0;
}
