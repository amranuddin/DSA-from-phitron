#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    
    vector<int> v2;
    int x;
    while (cin>>x)
    {  
        v.push_back(x);
    }
    v2 = v;
       v2.pop_back();
    for (int x : v2)
    {
        cout << x << " ";
    }


    return 0;
}