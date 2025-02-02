#include<iostream>
using namespace std;
int sum(*arr,int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"The sum is sum "<<(arr,5);

}