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



void result(Node * &head, int *  & max , int *  & min )
{
   Node* tmp = head;
    *max = tmp->val;
    *min = tmp->val;

    while (tmp != NULL)
     {
        if (tmp->val > *max)
        {
             *max = tmp->val;
        }
        if (tmp->val < *min)
        {
             *min = tmp->val;
        }
      tmp = tmp->next;
    }
}
int main()
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

    
      int  max;
      int  min;
    int * m= &max;
    int * mi = & min;
    result ( head, m , mi);

    int sum=0;
    int * s=&sum;

    *s =  *m-*mi;
    cout <<  *s;
    return 0;

}
