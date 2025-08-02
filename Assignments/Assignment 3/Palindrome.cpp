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
int palin( Node * &head, Node * & tail)
{  int flag =1;
    Node * newst= head;
    Node * newend=tail;
    while ( newst !=NULL && newend!=NULL)
    {
      
        if ( newst->val!=newend->val)
        {
            flag=0;
        }
        
         else if ( newst==newend || newst->next==newend )
        {
            break;
        }

        newst=newst->next;
        newend=newend->prev;
    }
    return flag;
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
  int palindrom=palin(head,tail);
 if (palindrom==1 )
{
 cout << "YES";
}
else 
{ 
    cout << "NO";
}

   
}