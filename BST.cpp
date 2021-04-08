#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node  *left;
    struct node  *right;
};

struct node *create(int item){
    struct node *n;
    n  = new(struct node);

    n->data = item;
    n->left = NULL;
    n->right = NULL;

    return n;

}
int count(struct node *p){
    if(p==NULL)
       return 0;
    else
         return(1+count(p->left)+ count(p->right);

}

unsigned int countleaf(struct node *p)
{
    if(p==NULL)
      return 0;
    if(p->left==NULL && p->right==NULL)
      return 1;
    else 
        return countleaf(p->left)+countleaf(p->right);

}

int max(struct node *p){
    int m,lmax,rmax;
    if(p==NULL)
      return INT_MIN;

    m = p->data;
    lmax = max(p->left);
    rmax = max(p->right);

    if(lmax > m)
        m = lmax;
    if(rmax > m)
       m = rmax;

    return m;
}

void preorder(struct node *p){
    if(p!= NULL){
        cout << p->data;
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(struct node *p){
    if(p!==NULL){
        inorder(p->left);
        cout << p->data;
        inorder(p->right);
    }
}

void postorder(struct node *p){
    if(p!= NULL){
        postorder(p->left);
        postorder(p->right);
        cout << p->data;
    }
}

