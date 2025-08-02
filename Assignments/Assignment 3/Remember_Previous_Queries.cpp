#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void printfr(list<int>  &l) 
{
    
    cout << "L -> ";
    for (auto val : l) 
    {
        cout << val << " ";
    }
    cout << endl;

    
}

    void printbk(list<int> &l)
{
    cout << "R -> ";
    if (l.empty())
     {
        cout << endl;
        return;
    }

    auto i = l.end();
    --i;  

    while (true)
     {
        cout << *i << " ";
        if (i == l.begin())
        {
            break;
        }
        --i;
    }
    cout << endl;
}


int main()
{  Node *head=NULL;
    Node *tail= NULL;
    int Q;
    cin >> Q;
    list<int> l;
    for (int i = 0; i < Q; i++)
    {
       int X, V;
        cin >> X >> V;
        {
            if (X == 0)
            {
                l.push_front(V);
            }
            
            else if (X == 1)
            {
                l.push_back(V);
            }
            
            else if (X == 2)
            {
                int i = 0;
                for (auto it = l.begin(); it != l.end(); ++it)
                {
                    if (i == V)
                        
                    {
                        l.erase(it);
                        break;
                    }
                    
                      i++;
                }
            }
        }
        printfr(l);
        printbk(l);
        
    }
    
   
}