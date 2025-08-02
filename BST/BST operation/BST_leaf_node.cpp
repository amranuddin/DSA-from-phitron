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


// বাইনারী ট্রি ইনপুট নেয়ার কোড যা গত পেজে ব্যাখ্যা করা হয়েছে। 
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

// ফাংশনটি কোনো একটি Binary Tree তে কয়টি Leaf Node আছে তা বের করে দিবে
int count_leaf(Node *root)
{
    if (root == NULL) // যদি Tree তে কোনো Node না থাকে , তবে কোনো leaf node নেই
        return 0;
    // যদি কারেন্ট Binary Tree এর left child এবং right child না থাকে তবে তা একটি Leaf Node 
    if (root->left == NULL && root->right == NULL) // 
    {
        return 1; // এক্ষেত্রে 1 return হবে । 
    }
    // উপরের কোনোটি সত্যি না অর্থাৎ left child অথবা right child আছে 
    else
    {
        int l = count_leaf(root->left);// Left subtree তে কয়টি Leaf Node আছে তা count_leaf ফাংশনের মাধ্যমে কাউন্ট করা হচ্ছে
    // এই ক্ষেত্রে Left subtree এর Root হলো current root Node এর left child
        int r = count_leaf(root->right);// Right subtree তে কয়টি Leaf Node আছে তা count_leaf ফাংশনের মাধ্যমে কাউন্ট করা হচ্ছে
    // এই ক্ষেত্রে Right subtree এর Root হলো current root Node এর right child
        return l + r; // দুটি ফাংশন থেকে প্রাপ্ত leaf node সংখ্যা যোগ করে রিটার্ন করা হয়েছে। 
    }
}
int main()
{
    Node *root = input_tree();
    cout << count_leaf(root) << endl;
    return 0;
}
