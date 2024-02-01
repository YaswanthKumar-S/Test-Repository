#include<iostream>
using namespace std;
int stack[100],n,top=-1;
bool isEmpty()
{
    return top==-1;
}
bool isFull(){
    return top==n-1;
}
void push(int data){
    if(isFull()){
         cout<<"Stack is Full ";
         return;
    }
    stack[++top]=data;
}
void peek()
{
    if(isEmpty()){ 
        cout<<"Stack is Empty";
        return;
    }
    cout<<stack[top];
}
void pop()
{
    if(isEmpty()){
        cout<<"Stack is Empty";
        return;
    }
    top--;
    cout<<"Top element after pop"<<stack[top];
}
void display(){
    if(isEmpty()){ 
        cout<<"Stack is Empty ";
        return;
    }
    // cout<<stack[top];
     for(int i=top;i>=0;--i) cout<<stack[i]<<" ";
}
int main(){
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        push(num);
    }
    display();
}