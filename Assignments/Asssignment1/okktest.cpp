#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    int fin = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == A[i + 1])
        {
            fin = 1;
        }
        else
        {
            fin = 0;
        }
    }
    if (fin == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}