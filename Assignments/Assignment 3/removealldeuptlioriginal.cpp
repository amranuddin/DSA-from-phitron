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
void insert_at_tail ( Node * &head, Node * & tail, int val)
{
    Node * newnode= new Node (val);
    if ( head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void printlink( Node * head)
{
    Node *tmp=head;
    while ( tmp!=NULL)
    {
        cout <<tmp->val<<" ";
        tmp=tmp->next;
    }

}
void srt( Node head)
{

}
void removend(Node * &head)
{
Node *tmp= head;
while ( tmp->next!=NULL)
{   
    for (Node *i=tmp;i->next!=NULL;i=i->next)
    if ( tmp->val==i->next->val)
    {
        tmp->next=tmp->next->next;
    }
    
}
}
int main() 
{
    Node * head =NULL;
    Node * tail=NULL;
   int val;
   while (true)
   {
    cin>>val;
    if ( val==-1)
    {
        break;
    }
    insert_at_tail (head,tail,val);
   }
   removend(head);
    printlink(head);
    return 0;
}