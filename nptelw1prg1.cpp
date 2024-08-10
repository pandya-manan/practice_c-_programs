#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    char input[20];
    char character;
    cin>>input;
    stack<char> st;
    for(int i=0;i<strlen(input);i++)
    {
        st.push(input[i]);
    }
    for(int i=0;i<strlen(input);i++)
    {
        character=st.top();
        cout<<character;
        st.pop();
    }
}