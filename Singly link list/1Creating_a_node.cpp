//linklist korte hoile firstly amader connectiojn kora lagbe ei jonno amaderke akta class newa lagbe.
//Node er majhe amra akta value ar adress rakha hobe. value diye value print hobe abong adress diye next node er value print kora hobe.
#include <bits/stdc++.h>
using namespace std;
class Node        // Node name akta class declare korlam.
{
    public:      //seta public kre dilam

    int val;     // sei class er vetor variable name akta nibo.
    Node* next;  // node ke pooint korar jonno next name akta pointer nilam.
};
int main() 
{ Node a,b,c;
    a.val=10;
    b.val=20;
    c.val=30;
    
    a.next=&b;
    b.next=&c;
    c.next=NULL;

    cout << a.val <<" "<<b.val<<" "<<c.val <<endl;
    cout << (*a.next).val <<endl;
    cout << a.next->next->val <<endl;

    return 0;
}