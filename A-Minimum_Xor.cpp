#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;
        
        vector<int> A(N);
        int ttlxor = 0;
        
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            ttlxor ^= A[i];
        }
        
        int min = ttlxor;
        
        // Check the effect of removing each element
        for (int i = 0; i < N; i++) {
            int newx = ttlxor ^ A[i];
            if (newx < min) {
                min = newx;
            }
        }
        
        cout << min << endl;
    }
    
    return 0;
}
