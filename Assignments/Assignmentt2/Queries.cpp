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

void print_linklst(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_at_head(Node *&head, Node *&tail,int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
     if (tail == NULL) 
     {
        tail = newnode;
     }
    
    
}

void insert_at_anypos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    
    {
        head = newnode;
        tail=newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}
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
int sz(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void delete_at_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL) 
    {
        return;
    }
    if (idx == 0)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)  
        {
            tail = NULL;
        }
        return;  
    }

    Node *tmp = head;
 {
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    
    Node * dltnode=tmp->next;
    tmp->next=tmp->next->next;
    delete dltnode;
    tail=tmp;
 }
    Node *dltnode = tmp->next;
    if (dltnode == NULL)
    {
        return;
    }
    tmp->next = dltnode->next;

    if (dltnode == tail)
    {
        tail = tmp;
    }
    delete dltnode; 
}

  

int main()

{
    Node *head = NULL;
    Node *tail = NULL;


    int Q;


    cin >> Q;


    for (int i = 0; i < Q; i++)
    {

        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head,tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_pos(head, tail, V);
        }

        print_linklst(head);
        cout << endl;
    }





}