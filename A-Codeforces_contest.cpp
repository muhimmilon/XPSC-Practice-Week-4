#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string a;
        cin >> a;

        vector<int> count(7, 0);

        for (char c : a)
        {
            count[c - 'A']++;
        }

        int add = 0;
        for (int i = 0; i < 7; ++i)
        {
            int ts = m - count[i];
            if (ts > 0)
            {
                add += ts;
            }
        }

        cout << add << endl;
    }

    return 0;
}
