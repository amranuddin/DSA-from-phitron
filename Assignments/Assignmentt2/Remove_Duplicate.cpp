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


void dlt_dupli(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL; i = i->next)
    {
        Node * taklu = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                Node *pera = j;
                
                taklu->next = j->next;
                j = j->next;
                delete pera;
            }

            else
            {
                taklu = j;
                j = j->next;
            }
        }
    }
}

void print_linklst(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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
    
    int size = sz(head);
    dlt_dupli(head);

    print_linklst(head);

}