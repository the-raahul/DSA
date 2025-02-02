// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int>q;
    queue<int>pq;
    int n;
    int temp;
    cin>>n;
    int size =0;
    while(n!=4){
        switch(n){
            case 1:
            cin>>temp;
            q.push(temp);
            cout<<"Customer ID "<<temp<<" is enqueued"<<endl;
            size++;
            break;
            case 2:
            
            if(!q.empty()){
                cout<<"Dequeued customer ID: "<<q.front()<<endl;
                q.pop();
                size--;
            }
            else{
                cout<<"Queue is empty";
            }
            break;
            case 3:
            pq=q;
            cout<<"Customer IDs in the queue are: ";
            if(!q.empty()){
            for(int i = 0; i<size;i++){
                cout<<pq.front()<<" ";
                pq.pop();
            }
            }
            else cout<<"Stack is empty";
            break;
            default:
            cout<<"Invalid options";
            break;
        }
        cin>>n;
    }
    return 0;
}