#include <bits/stdc++.h>
using namespace std;
int main()
{
    // saize dewa takle eivabe print hobe

    // int x;
    // cin>>x;
    // vector <int>v(x);
    // // for (int i=0;i<x;i++)
    // // {

    // //     cin >> v[i];
    // // }
    // //  for (int i=0;i<x;i++)
    // // {
    // //     cout << v[i] << " ";
    // // }

    vector<int> v;
    int x;
    while (cin >> x)
    {
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int x:v)
    {
        cout<<x<<" ";
    }
}
