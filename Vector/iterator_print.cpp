#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    vector <int> v;
    int x;
    while (cin>>x)
    {
        v.push_back(x);
    }

    for (auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}