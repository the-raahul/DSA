#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    cout<<"The size of the stack : "<<st.size()<<endl;
    st.pop();
    st.pop();
    st.pop();
    
    cout<<"The size of the stack : "<<st.size()<<endl;
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;


}