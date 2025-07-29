#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>v;
    int a;
    while(cin>>a)
    {
        v.push_back(a);
    }
    replace(v.begin(),v.end(),6,100);
    for (int x:v)
    {
        cout << x << " ";
    }
    return 0;
}