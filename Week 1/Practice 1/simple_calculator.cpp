#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin >> x >> y;

    long long int sum = x + y;
    long long int prod = x*y;
    long long int diff = x - y;
    
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << prod << endl;
    cout << x << " - " << y << " = " << diff;

    return 0;
}