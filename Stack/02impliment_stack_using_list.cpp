#include <bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    list <int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    
        void pop()
        {
            l.pop_back();
        }
    int size ()
    {
       return l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty ()
    {
        return l.empty ();
    }
    
};

int main() 
{
    mystack st;

    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

}