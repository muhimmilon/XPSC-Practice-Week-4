#include<bits/stdc++.h>
using namespace std;

int countsub(const vector<int>& A, int K)
{
    int N = A.size();
    int count = 0;

    for (int i = 0; i <= N - K; ++i)
    {
        int curr = 0;
        for (int j = i; j < i + K; ++j)
        {
            curr |= A[j];
        }
        if (curr % 2 == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        cout << countsub(A, K) << '\n';
    }

    return 0;
}
