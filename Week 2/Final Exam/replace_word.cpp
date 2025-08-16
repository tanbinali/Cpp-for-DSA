#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        string s, x;
        cin >> s >> x;

        string result = "";

        for (int i = 0; i < s.length();)
        {
            bool match = true;

            for (int j = 0; j < x.length(); j++)
            {
                if (i + j >= s.length() || s[i + j] != x[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                result += "#";
                i += x.length();
            }
            else
            {
                result += s[i];
                i++;
            }
        }

        cout << result << endl;
    }

    return 0;
}
