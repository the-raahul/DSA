// #include<iostream>
// using namespace std;
// class stack{
//     int *arr;
//     int size;
//     int top;
//     public:

//     stack(int s){
//         size = s;
//         top = -1;
//         arr = new int[s];
//     }

//     void push(int value){
//         if(top == size-1){
//             cout<<"Stack Overflow";
//             return;
//         }
//         else{
//             top++;
//             arr[top]= value;
//             cout<<"Pushed "<<value<<" into the stack.\n";
//         }
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"Stack is underFlow";
//             return;
//         }
//         else{
//             top--;
//             cout<<"Popped "<<arr[top+1]<<" from the stack\n";
//         }
//     }

//     int peek(){
//         if(top == -1){
//             cout<<"Stack is empty";
//             return -1 ;
//         }
//         else{
//             return arr[top];
//         }
//     }

//     bool isEmpty(){
//         return top == -1; // agar top -1 ko point kr rha hai toh true will return;
//     }

//     int isSize(){
//         return top+1;
//     }


// };



// int main(){
//     stack s(5);
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.pop();
//     s.pop();
//     cout<<"Peek value is :"<<s.peek()<<endl;
//     cout<<"Empty or not :"<<s.isEmpty()<<endl;
//     cout<<"Size of the stack : "<<s.isSize()<<endl;
// }





// // What if the value are in negative

#include<iostream>
using namespace std;
class stack{
    int *arr;
    int size;
    int top;
    public:

    bool flag;
    stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1; // if stack is empty then 1;
    }

    void push(int value){
        if(top == size-1){
            cout<<"Stack Overflow";
            return;
        }
        else{
            top++;
            arr[top]= value;
            cout<<"Pushed "<<value<<" into the stack.\n";
            flag = 0;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is underFlow";
            return;
        }
        else{
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack\n";
            flag = 1;
        }
    }

    int peek(){
        if(top == -1){
            cout<<"Stack is empty";
            return -1 ;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        return top == -1; // agar top -1 ko point kr rha hai toh true will return;
    }

    int isSize(){
        return top+1;
    }


};
int main(){
    stack s(5);
    // s.push(-1);
    
    // cout<<"Empty or not :"<<s.isEmpty()<<endl;
    // cout<<"Size of the stack : "<<s.isSize()<<endl;

//     cout<<"Peek value is :"<<s.peek()<<endl;

    int value = s.peek();
    if(s.flag==0){
        cout<<value<<endl;
    }

}