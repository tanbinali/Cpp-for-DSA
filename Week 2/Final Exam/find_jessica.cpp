#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool found = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "NO";
    }

    return 0;
}
