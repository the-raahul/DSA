// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     priority_queue<int>p; // Max Heap
//     p.push(3);
//     p.push(30);
//     p.push(9);
//     p.push(99);
//     p.push(38);
//     cout<<p.top()<<" ";
    
//     // delete
//     p.pop();
//     cout<<p.top()<<" ";
    
//     // chexh size;
//     cout<<p.size()<<endl;

//     while(!p.empty()){
//         cout<<p.top()<<" ";
//         p.pop();
//     }

// }




///min heap
#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int ,vector<int>,greater<int> >p; // Min Heap
    p.push(3);
    p.push(30);
    p.push(9);
    p.push(99);
    p.push(38);
    cout<<p.top()<<" ";
    
    // delete
    p.pop();
    cout<<p.top()<<" ";
    
    // chexh size;
    cout<<p.size()<<endl;

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }

}