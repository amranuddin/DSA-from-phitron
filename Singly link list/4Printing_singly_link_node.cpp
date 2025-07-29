#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main() 
{
    Node * head = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    
    head->next=a;
    a->next=b;


    Node *tmp=head; // akta ttemporary code nilam zathe head node  na haraya zay


    while (tmp!=NULL) // Nul pawar ag porjonto loop cholbe
    {
        cout << tmp->val<< " "; // tmp er next ze node point korse tar value print korbe

        tmp=tmp->next; // next node er adress tmp rekhe dilam

    }
  cout << endl;
  tmp=head; // abar tmp a head rekhe dilam
     while (tmp!=NULL)
    {
        cout << tmp->val<< " ";

        tmp=tmp->next;

    }
    return 0;
}