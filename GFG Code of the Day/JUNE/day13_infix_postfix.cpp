// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    int precedence(char a)
    {
        if (a == '^')
            return 3;
        else if (a == '*' || a == '/')
            return 2;
        else if (a == '+' || a == '-')
            return 1;
        else if (a == '(')
            return 0;
    }
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        string infix = "";
        stack<char> op;
        
        for(int i=0;i<s.length();i++) {
            char ch = s[i];
            if((ch>='a' and ch <= 'z' )|| (ch>='A' and ch<='Z')) {
                infix += ch;
            }else if(ch=='(') {
                op.push(ch);
            }else if(ch==')') {
                while(op.top()!='(') {
                    infix += op.top();
                    op.pop();
                }
                op.pop();
            }else if(op.empty() or precedence(ch)>precedence(op.top())) {
                //when the charcter is any operator
                op.push(ch);
            }else{
                while(!op.empty() and precedence(ch)<=precedence(op.top())){
                    infix += op.top();
                    op.pop();
                }
                op.push(ch);
            }
        }
        
        while(!op.empty()) {
            infix += op.top();
            op.pop();
        }
        
        return infix;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends