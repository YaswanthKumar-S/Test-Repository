#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
}*nn=NULL;
node* insert(node *root,int a)
{
    if(root==NULL)
    {
        nn=new node();
        nn->data=a;
        nn->left=NULL;
        nn->right=NULL;
        root=nn;
        return root;
    }
    else if(a<root->data) root->left=insert(root->left,a);
    else if(a>root->data) root->right=insert(root->right,a);
    return root;
}
int sumofnodes(node *root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return root->data;
    return sumofnodes(root->left)+sumofnodes(root->right);

}
int main()
{
    int num;
    node *root=NULL;
    while (true)
    {
        cin>>num;
        if(num<1) break;
        root=insert(root,num);
    }
    cout<<"Sum of Nodes "<<sumofnodes(root);
    
}