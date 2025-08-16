#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int min_value = INT_MAX;

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int result = A[i] + A[j] + (j - i);
                min_value = min(min_value, result);
            }
        }

        cout << min_value << endl;
    }

    return 0;
}
