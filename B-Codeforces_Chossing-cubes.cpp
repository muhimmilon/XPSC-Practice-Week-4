#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        
        int valuable_v = a[f-1];
        
        sort(a.begin(), a.end(), greater<int>());
        
        int vcount = count(a.begin(), a.end(), valuable_v);
        
        int place = 0;
        while (place < n && a[place] > valuable_v)
        {
            place++;
        }
        
        if (place < k)
        {
            if (place + vcount <= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "MAYBE" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
