#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    
    vector<string>v(a);
    cin.ignore();
    for (int i=0;i<a;i++)
    {
        getline(cin,v[i]);

    }
    for(string n:v)
    {
        cout << n;
    }
   
    return 0;
}