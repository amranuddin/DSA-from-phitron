#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    string val;  
    Node* next;
    Node* prev;

    Node(string val) 
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void inse(Node* &head, Node* &tail, string s)
 {
    Node* newNode = new Node(s);
    if (head == NULL)
     {
        head = tail = newNode;
    }
    
     else
     
     {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}




Node* fin (Node* head, string s) 
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == s) 
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;

    string s;

    while (cin >> s && s != "end")
     {
        inse(head, tail, s);
    }

    int Q;
    cin >> Q;

    Node* co = head;

    while (Q--)
     {
        string cm;
        cin >> cm;

        if (cm== "visit") 
        {
            string addr;
            cin >> addr;
            Node* found = fin(head, addr);
            if (found != NULL)
             {
                  co = found;
                cout << co->val << endl;
            } 
            else 
            {
                cout << "Not Available" << endl;
            }
        } 
        else if (cm == "next")
         {
            if (co->next != NULL) 
            {
                co = co->next;
                cout << co->val << endl;
            }
            else
             {
                cout << "Not Available" << endl;
            }
        } 

        else if (cm == "prev") 
        {
            if (co->prev != NULL) 
            {
                 co = co->prev;;
                cout << co->val << endl;
            } 
            else
             {
                cout << "Not Available" << endl;
            }
        }
    }

 
}
