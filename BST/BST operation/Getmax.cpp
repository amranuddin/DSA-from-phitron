#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


// বাইনারি ট্রি ইনপুট নেয়ার কোড যা গত পেজে ব্যাখ্যা করা হয়েছে। 
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
    
        Node *p = q.front();
        q.pop();


        
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);


        p->left = myLeft;
        p->right = myRight;


        
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}


// এই ফাংশনটিতে কোনো একটি Binary Tree এর Root Node দেয়া হলে তা ঐ Binary Tree এর Maximum Height Return করে  
int maxHeight(Node *root)
{  
   // Tree টি খালি হলে তার Maximum Height ০ হবে  
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left); // Left subtree এর Maximum Height কত তা maxHeight ফাংশনের মাধ্যমে বের  করা হচ্ছে
    // এই ক্ষেত্রে Left subtree এর Root হলো current root Node এর left child
    int r = maxHeight(root->right);// Right subtree এর Maximum Height কত তা maxHeight ফাংশনের মাধ্যমে বের  করা হচ্ছে
    // এই ক্ষেত্রে Right subtree এর Root হলো current root Node এর right child
   
    return max(l, r) + 1; // এরপর left এবং right এর মধ্যে compare করে max height টি নিবো এবং তার সাথে ১ যোগ করে Return করে দিবো। 
}
int main()
{
    Node *root = input_tree();
    cout << maxHeight(root) << endl;
    return 0;
}
