#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperator(char c)
{
    return(c=='+'||c=='-' || c=='*' || c=='/' ||c=='^');
}
int precedence(char op)
{
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    if(op=='^') return 3;
    return 0;
}
void infixtopostfix(string str)
{
    string output="";
    stack<char> st;
    for(char c:str){
        if(isalnum(c)){
            output+=c;
        }
        else if(c=='(')
        {
            st.push(c);
        }
        else if(c==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                output+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(isOperator(c))
        {
            while(!st.empty() && precedence(c)<=precedence(st.top())){
                output+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        output+=st.top();
        st.pop();
    }
    cout<<output;
}
int main()
{
    string str;
    cin>>str;
    infixtopostfix(str);

}