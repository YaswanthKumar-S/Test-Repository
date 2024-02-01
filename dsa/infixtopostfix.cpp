#include<iostream>
#include<stack>
using namespace std;

int precedence(char op);
void infixtopostfix(string str);

int main(){
    string str;
    getline(cin, str);
    
    infixtopostfix(str);
}


void infixtopostfix(string str){
    string output;
    stack<char>s;
    
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='1' && c<='9')){
            output+=c;
        }             
        else if(c=='('){
            s.push(c);
        }
        else if(c==')'){
            while(!s.empty()&&s.top()!='('){
                output += s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty() && precedence(c)<=precedence(s.top())){
                output += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty()){
        output += s.top();
        s.pop();
    }
    
    cout<<output;
}


int precedence(char op){
    if(op == '^') return 3;
    else if (op == '*' || op == '/') return 2;
    else if(op == '+' || op == '-') return 1;
    else return 0;
}