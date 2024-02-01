#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
}*nn=NULL;

node *insert(node *root,int a)
{
    if(root==NULL){ 
        nn=new node();
        nn->data=a;
        nn->left=NULL;
        nn->right=NULL;
        root=nn;
        return nn;
    }
    else if(a<root->data) root->left=insert(root->left,a);
    else if(a>root->data) root->right=insert(root->right,a);
    return root;
}
void inorder(node *root)
{
    if(root!=NULL){
    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
    }
}
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<< " ";
    }
}
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int max_element=0;
void max_node(node *root)
{
   if(root!=NULL){ 
        max_node(root->left);
        if(max_element < root->data ) max_element=root->data;
        max_node(root->right);
    }
}
int main()
{
    node *root=NULL;
    int n;
    while(true)
    {
        cin>>n;
        if(n<0) break;
         root= insert(root,n); 
    }
    // inorder(root);
    // preorder(root);
    // postorder(root);
     max_node(root);
    // cout<<endl;
    cout<<"The maximum element is "<<max_element;
}