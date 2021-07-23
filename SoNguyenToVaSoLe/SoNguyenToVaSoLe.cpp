#include <iostream>
#include <math.h>
using namespace std;
int a, b, c;
void SoNguyenTo(int x) {
    int SoPhanTu = 0;
    int i;
    for (i = 2; i <= x/2; i++) {
        if (x % i == 0) SoPhanTu++;
    }
    if (SoPhanTu == 0) cout << x << " là số nguyên tố." << endl;
    else cout << x << " không phải là số nguyên tố." << endl;
}
bool SoNguyenToV2(long x) {
    int UocSo = 0;
    int i;
    bool snt = true;
    for (i = 2; i <= x/2; i++) {
        if (x % i == 0) UocSo++;
    }
    if (UocSo == 0) bool snt = true;
    else bool snt = false;
    return snt;
}
void SoNguyenToV3(long x) {
    if (x==2) cout << x << " là số nguyên tố." << endl;
    if ((x+1)%4==0) cout << x << " là số nguyên tố." << endl;
    if ((x-1)%4==0) cout << x << " là số nguyên tố." << endl;
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
void UCLN(long x, long y) {
    while (x != y) {
        if (x > y) x = x - y;
        else y = y - x;
    }
    int UocCLN = x;
    cout << UocCLN << endl;
}
long UCLN2(long x, long y) {
    while (x != y) {
        if (x > y) x = x - y;
        else y = y - x;
    }
    return x;
}
void BCNN(long x, long y) {
    cout << (x * y) / UCLN2(x,y) << endl;
}
void PTTSNT(long x) {
    if (SoNguyenToV2(x) == 0) {
        int sonhantu = 0;
        while (x % 2 == 0) {
            x = x / 2;
            sonhantu++;
        }
        cout << 2 << "^" << sonhantu << " ";
        sonhantu = 0;
        int i;
        for (i = 3; i <= x; i = i + 2) {
            while (x % i == 0) {
                x = x / i;
                sonhantu++;
            }
            if (sonhantu != 0) {
                cout << i << "^" << sonhantu << " ";
                sonhantu = 0;
            }
        }
    }
    else cout << 1 << x;
}
bool SCP(long x) {
    bool scp = false;
    if (sqrt(x) == int(sqrt(x))) scp = true;
    else scp = false;
    return scp;
}
int luythua(long x, long y) {
    int i;
    long l = x;
    for (i = 1; i < y; i++) {
        l = l*x;
    }
    return l;
}
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> a >> b;
    cout << luythua(a, b) << endl;
    //SoNguyenTo(a);
    //SoNguyenToV2(a);
    //SoNguyenToV3(a);
    //UCLN(a, b);
    //BCNN(a, b   );
    //XuatSoLe(b, c);
    //cout << SCP(a) << endl;
    //PTTSNT(a);
    return 0;
}
