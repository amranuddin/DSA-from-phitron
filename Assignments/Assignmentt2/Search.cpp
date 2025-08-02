#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void singly_input(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}
void search(Node *head,int tar)
{    int pos = 0;
    Node *tmp = head;
    while (tmp != NULL) 
    
    
    {
        if (tmp->val == tar)
         {
            cout << pos <<endl;
            return;
        }
        pos++;
        tmp = tmp->next;
    }
    cout << "-1" << endl;
}


int main()
{
   

    int T;
    cin >> T;
    

    for (int i = 0; i < T; i++)
    {
         Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            singly_input(head, tail, val);
        }
       
        int target;
        cin>> target;

        
    search (head, target);

  

    }
    return 0;
}