#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node *next;
    Node * prev;
    Node ( int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_head( Node * & head,int val)
{
 Node * newnode= new Node (val);
 newnode->next=head;
 head->prev=newnode;
 head=newnode;
}
void print_forward( Node * head)
{
    Node * tmp= head;
    while ( tmp!= NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}
void insert_at_tail(Node * head,Node * &tail, int val)
{
    Node * newnode=new Node (val);
    if ( head=NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void print_backward ( Node * tail)
{
    Node * tmp=tail;
    while (tmp!=NULL)
    {
        cout << tmp->prev <<" ";
        tmp=tmp->prev;
    } 
}
void insert_at_any( Node * head, int idx, int val)
{
    Node * newnode =new Node ( val);
    Node * tmp = head;
    for ( int i=1;i<idx;i++)
        {
            tmp=tmp->next;
        }
   newnode->next=tmp->next;
   tmp->next->next=newnode;
   tmp->next=newnode;
   newnode->prev=tmp;
}
int main()
{
    Node * head= new Node(10);
    Node * a=new Node (20);
    Node * b= new Node (30);
    Node * tail= new Node (40);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b;
    insert_head( head,130);
    insert_at_tail(head,tail,1234);
    insert_at_any( head, 2, 100);
    print_forward(head);

    return 0;
}