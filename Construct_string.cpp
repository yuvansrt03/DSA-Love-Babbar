#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        int count=1;
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                if (count % 2 == 1)
                {
                    ans += s[i];
                }
                else
                {
                    ans += s[i];
                    ans += s[i];
                }
                count=1;
            }

        }
        cout << ans << endl;
    }
    return 0;
}
