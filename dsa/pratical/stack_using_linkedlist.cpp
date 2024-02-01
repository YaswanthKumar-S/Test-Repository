#include<iostream>
using namespace std;
struct stack{
    int data;
    stack *next;
}*nn=nullptr,*top=nullptr,*current=nullptr;

bool isEmpty(){
    return top==nullptr;
}
void push()
{
    int val;
    cin>>val;
    nn=new stack();
    nn->data=val;
    nn->next=nullptr;
    if(top==nullptr){
        top=nn;
        current=nn;
    }
    else{
        nn->next=top;
        top=nn;
    }
}

void pop()
{
    if(isEmpty()) cout<<"Stack is Empty : UnderFlow";
    else{
        stack *temp;
        temp=top;
        top=top->next;
        cout<<"The element Popped from the stack is "<<temp->data;
        free(temp);
    }
}

void peek(){
    if(isEmpty()) cout<<"Stack is Empty : UnderFlow";
    else{
        cout<<top->data;
    }
}

void display()
{
    stack *pos;
    cout<<"The Stack Elements are ";
    for(pos=top;pos!=nullptr;pos=pos->next) cout<<pos->data <<" ";
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) push();
    pop();
    cout<<endl;
    peek();
    cout<<endl;
    display();
    
}