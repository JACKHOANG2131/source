#include <iostream>
using namespace std;
int a, b, c, d;
int maximum(int x, int y)
{
    int sln = 0;
    if (x >= y) sln = x;
    else sln = y;
    return sln;
}
int minimum(int x, int y)
{
    int snn = 0;
    if (x >= y) snn = y;
    else snn = x;
    return snn;
}

int main()
{
    freopen("BAITAP4_.INP", "r", stdin);
    freopen("BAITAP4_.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    cout << maximum(maximum(maximum(a, b), c), d) << " là số lớn nhất" << endl;
    cout << minimum(minimum(minimum(a, b), c), d) << " là số nhỏ nhất" << endl;
    return 0;   
}

