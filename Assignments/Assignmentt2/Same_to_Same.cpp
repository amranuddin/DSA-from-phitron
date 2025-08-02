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
void print_linklst(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void checksame(Node *&head, Node *&head1, int * flag)
{
    Node *i = head;
    Node *j = head1;

    while (i != NULL && j != NULL)
    {
        if (i->val != j->val)
        {
            *flag = 0; 
            return;
        }
        i = i->next;
        j = j->next;
    }
    *flag = 1;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
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
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        singly_input(head1, tail1, val);
    }
    int flag = 0;
    int *flaag = &flag;

    int size1 = sz(head);
    int size2 = sz(head1);
    if ( size1==size2)
    {
         checksame(head, head1, flaag);
    }
    else
    {
        flag=0;
    }
  
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}