#include<iostream>
using namespace std;
struct node{
    int data;
    node *prev,*next;
}*nn=NULL,*pos=NULL,*head=NULL;
void insert(int a){
    nn=new node;
    nn->data=a;
    nn->prev=NULL;
    nn->next=NULL;
    if(head==NULL){
        head=nn;
        pos=nn;
    }
    else{
        pos->next=nn;
        nn->prev=pos;
        pos=nn;
    }
}
void middle(int index)
{
    int i=0;
    pos=head;
    while(true)
    {
        pos=pos->next;
        i++;
        if(i==index){
            cout<<pos->data<<" ";
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insert(num);
    }
   int mid1=(n-1)/2;
   int mid2=n/2;
   if(n%2!=0) middle(mid1);
   else {
    middle(mid1);
    middle(mid2);
   }
}