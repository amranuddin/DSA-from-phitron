#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector <int> v;
    int x;
    while(cin>>x)
    {
        
        v.push_back(x);
    }
     for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin()+2,100);
    for (int x:v)
    {
        cout << x << " ";
    }
    v.erase(v.begin()+2);

 cout<< endl;
     for (int x:v)
    {
        cout << x <<" " ;
    }
    cout<< endl;
    v.erase(v.begin()+2,v.end()-2);
      for (int x:v)
    {
        cout << x <<" " ;
    }
      return 0;
}