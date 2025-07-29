#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        int flag = 0;
        int l = 0;
        int r = n - 1;
        while (l<=r)
        {
            int mid = (r + l) / 2;
            if (a[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (a[mid > val])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "find";
        }
        else
        {
            cout << "Not found";
        }
    }

    return 0;
}