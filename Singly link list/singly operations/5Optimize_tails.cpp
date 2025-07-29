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
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void print_linklst(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
void insert_at_tail(Node * & head, Node * &tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    tail->next  = newnode;
    tail=tail->next;
}


int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
   
    Node * tail = new Node(40);

    head->next = a;
    a->next = tail;

    
    insert_at_tail(head,tail, 200);
    insert_at_tail(head,tail, 3600);
    print_linklst(head);

    return 0;
}