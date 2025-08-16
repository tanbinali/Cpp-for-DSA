#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    
    while(cin.getline(s,100001))
    {
        char temp[100001];
        int len = strlen(s);
        int j = 0;
        for (int i = 0; i < len ; i++)
        {
            if (s[i] != ' ')
            {
                temp[j++] = s[i];
            }
            
        }
        temp[j] = '\0';
        sort(temp,temp+j);

        cout << temp << endl;
    }

    return 0;
}