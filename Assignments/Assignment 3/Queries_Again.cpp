// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node * prev;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void insert_at_any(Node * &head, Node * & tail, int val, int idx)
// {
//     Node * newnode=new Node (val);
//     Node * tmp= head;
//     for ( int i=0;i<idx;i++)
//     {
//         tmp=tmp->next;
//     }
//    newnode->next=tmp->next;
//    tmp->next->next=newnode;
//    tmp->next=newnode;
//    newnode->prev=tmp;
// }
// void inserhead ( Node * &head, Node * & tail, int val)
// {
//     Node * newnode = new Node( val);
//     if ( head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//     }
//     newnode->next=head;
//     head->prev=newnode;
//     head=newnode;
// }
// void printdl_for( Node * head)
// {
//     Node * tmp=head;
//     while ( tmp!=NULL)
//     {
//         cout << tmp->val<< " ";
//         tmp=tmp->next;
//     }
// }
// void printdl_bk( Node *tail)
// {
//   Node * tmp=tail;
//   while ( tmp!=NULL)
//   {
//     cout << tmp->val<<" ";
//     tmp=tmp->prev;
//   }

// }

// int main() 
// {
//     Node * head=NULL;
//     Node * tail=NULL;
//     int Q;
//     cin>> Q;
//     for ( int k=0;k<Q;k++)
//     {
//         int X,V;
//         cin >> X >> V;

//         if ( X==0)
//         {
//             inserhead(head,tail,V);
//         }
//         else 
//         {
//        insert_at_any(head,tail,V,X);
//         }
    
//     printdl_for(head);
//     cout << endl;
//     printdl_bk(tail);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void inserthead(Node*& head, Node*& tail, int val) 
{
    Node* newnode = new Node(val);
    if (head == NULL) 
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next =head;
    head->prev= newnode;
    head = newnode;
}

void insert_at_any(Node * & head, Node*& tail,int val,int idx) {
  

    Node* tmp = head;
    for (int i = 0; i < idx - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    Node* newnode = new Node(val);
    newnode->next = tmp->next;
    newnode->prev = tmp;

    if (tmp->next != NULL)
    {
        tmp->next->prev = newnode;
    }
     else
    {
        tail = newnode;
    }

    tmp->next = newnode;
}
 
  int size ( Node * head)
    {
        int sz=0;
        Node * tmp = head;
        while (tmp!=NULL)
        {
         sz++;
         tmp=tmp->next;
         }
         return sz;
    }
void inserttail( Node * & head, Node *& tail, int val)

{
    Node * newnode=new Node (val);

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
void printdl_for(Node* head)
 {
     cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) 
    {
        cout  <<tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printdl_bk(Node* tail) 
{
    cout << "R -> "; 
    Node* tmp = tail;
    while (tmp != NULL)
     {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    for (int k = 0; k < Q; k++) 
    {
        int X, V;
        cin >> X >> V;
       int siz=size(head);
       if (X>siz)
       {
         cout <<"Invalid"<<endl;
         continue;
       }
        else if (X == 0) 
        {
            inserthead(head, tail, V);
            
        } 

        else if ( siz==X)
        {
            inserttail(head,tail,V);
        }
        else

        {
            insert_at_any(head, tail, V, X);
        }

       
         printdl_for(head);
         
         printdl_bk(tail);
    }

   

 
}
