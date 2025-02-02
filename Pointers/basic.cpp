// #include<iostream>
// using namespace std;
// int main(){
//      int n = 10;
//      int *ptr = &n;
//      cout<<n<<endl;
//      cout<<"The size of n  "<<sizeof(n)<<endl;
//      cout<<"The size of pointer "<<sizeof(*ptr)<<endl;

 
// }



// #include<iostream>
// using namespace std;
// int main(){
//      int n = 10;
//      int *ptr = &n;
//      cout<<"The value before increment : "<<*ptr<<endl;
//      (*ptr)++;
//      cout<<"The value After increment : "<<*ptr;
 
// }


    
// #include<iostream>
// using namespace std;
// int main(){
//      int n = 10;
//      int *ptr = &n;
//      cout<<"The value before increment : "<<*ptr<<endl;
//      (*ptr)++;
//      cout<<"The value After increment : "<<*ptr<<endl;
//     //copying the pointer
//     int *naya = ptr;
//     cout<< ptr<<"---"<<naya<<endl;
//     cout<< *ptr<<"---"<<*naya<<endl;



// }
    
// #include<iostream>
// using namespace std;
// int main(){
//     int n =123;
//     int sum;
//     int sum = 0,d;
//     while(n>1){
//         d = n%10; //3
//         n=n/10; //
//         sum = sum +d;  
//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int sum(int *arr,int n){ //or u can write int arr[ ]
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<"The sum is sum "<<sum (arr ,5); ////array ka starting se address pass ho rah hai

// }



// #include<iostream>
// using namespace std;
// int sum(int *arr,int n){ //or u can write int arr[ ]
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<"The sum is sum "<<sum (arr + 2,3  ); // array ka third position se pass ho rha hai

// }

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------



#include<iostream>
using namespace std;

int main(){

    int arr[5];
    int* ptr ;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

    return 0;

}
 




































