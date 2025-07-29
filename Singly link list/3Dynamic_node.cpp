//function er last value paite hoile hoile dynamic node drkr .karon amra fuction theke return korbo na.
//amra dynamic memori nile heap memori ke main statics memori theke access korte parbo.

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
    Node * head= new Node(10);
    Node * a = new Node(20);
    //a.next=&b;
    head->next=a; //arrow dingn mane head ke dirrence kore next ke point kora
    cout << head->val << " "<< endl;
    cout << head->next->val << endl;
    return 0;
}