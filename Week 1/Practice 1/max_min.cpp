#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int maxi = max(a,max(b,c));
    int mini = min(a,min(b,c));

    cout << mini << " " << maxi;

    return 0;
}