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

int main()
{
    // define the Node
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
     Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
  // Node  গুলোর মধ্যে কানেকশন ক্রিয়েট করা হচ্ছে।
  root->left=a;
  root->right=b;
  a->left=c;
  a->right=h;
  c->left=e;
  b->right=d;
  d->left=f;
  d->right=g;
  h->right=i;

//এটা একটা নন লিনিয়ার ডেটা স্ট্রাকচার তাই এটাকে লিনিয়ারভাবে
//প্রিন্ট করা যাবে না। তবে লিনিয়ারভাবে প্রিন্ট করার জন্য অনেক ওয়ে আছে। সেগুলো দেখব।

}
