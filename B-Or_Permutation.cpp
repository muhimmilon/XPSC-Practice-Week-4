#include<bits/stdc++.h>
using namespace std;

void generatePermutation(int N)
{
    vector<int> perm(N);
    for (int i = 0; i < N; ++i)
    {
        perm[i] = i + 1;
    }
    if (N % 2 == 1)
    {
        reverse(perm.begin(), perm.end());
    }
    else
    {
        reverse(perm.begin() + 2, perm.end());
    }
    for (int i = 0; i < N; ++i)
    {
        cout << perm[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        generatePermutation(N);
    }

    return 0;
}
