#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    bool Pal = true;

    for (int i = 0, j= N-1; i < j; i++, j--)
    {
        if (A[i] != A[j])
        {
            Pal = false;
            break;
        }
    }

    if (Pal)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
