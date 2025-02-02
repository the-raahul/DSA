// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int *num = new int[10];
    int key;
    cin>>key;
    for(int i = 0; i<10;i++){
        cin>>num[i];
    }
    int *table = new int[10];
    for(int i =0; i<10; i++){
        int key = num[i];
        int index = key %10;
        while(table[index] != -1){
            index = (index +1) % 10;
        }
        table[index] = key;
    }
    
    return 0;


}