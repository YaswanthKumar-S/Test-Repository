#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *prev,*next;
}*nn=NULL,*head=NULL,*pos=NULL;
void insert()
{
    int val;
    cin>>val;
    nn=new node();
    nn->data=val;
    nn->prev=NULL;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
        pos=nn;
    }
    else{
        pos->next=nn;
        nn->prev=pos;
        pos=nn;
    }
}
void disp_front()
{
    pos=head;
    while(pos!=NULL)
    {
        cout<<pos->data<<" ";
        pos=pos->next;
    }
    node *last=NULL;
    while(pos!=NULL)
    {
        if(pos->next==NULL)
        {
            last=pos;
        }
        pos=pos->next;
    }
    delete last;
    while(pos!=NULL)
    {
        cout<<pos->data<<" ";
        pos=pos->next;
    }


}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) insert();
    disp_front();
    //disp_back();

}