#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> li;

  
    while (true)
    
    {
        int val;
        cin >> val;
        if (val == -1)
        {
         break;
        }
        li.push_back(val);
    }

    
    li.sort();
    li.unique();

    
    for (int ashol : li) 
    {
        cout << ashol << " ";
    }
    


}
