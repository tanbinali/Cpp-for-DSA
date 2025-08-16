#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long int a[n];
    long long int maxi = LLONG_MIN; 

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,a[i]);
    }

    cout << maxi;

    return 0;
}