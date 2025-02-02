/* 1 . NICE CONCEPTUAL QUESTION IN WHICH YOU WILL GET TO KNOW THAT WHICH EVER FUNCTION YOU ARE CALLING SHOULD BE ABOVE OF THAT*/

// #include<iostream>
// using namespace std;

// void day0(int n){
//     cout<<"Happy birthday BOKACH*DA"<<endl;
// }
// void day1(int n){
//     cout<<n<<" days left for birthday"<<endl;
//     day0(0);
// }
// void day2(int n){
//     cout<<n<<" days left for birthday"<<endl;
//     day1(n-1);
// }
// void day3(int n){
//     cout<<n<<" days left for birthday"<<endl;
//     day2(n-1);
// }

// int main(){
//     day3(3);
//     return 0;
// }

/* SAME CASE BUT IN PRECISE WAY*/

// #include<iostream>
// using namespace std;

// void day3(int values){
//     if(values == 0){  // this is the base case. it is the stoppage codition . it help from becoming stack overflow
//         cout<<"Happy birthday ";
//         return;
//     }

//     cout<<values<<" days left for birthday:"<<endl;
//     day3(values-1);


// }


// int main(){
//     day3(50);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void day3(int values){
   

//     cout<<values<<" days left for birthday:"<<endl;
//     day3(values-1);


// }


// int main(){
//     day3(50);
//     return 0;
// }

//// Tower of the Hanoi



// #include<bits/stdc++.h>
// using namespace std;
// void toh (int n,char f,char s, char third ){
//     if(n==1){
//         cout<<"Disc "<<n<<"  moves from "<< f<<" to "<<third<<endl;
//         return ;
//     }
//     toh(n-1, f,third,s);
//         cout<<"Disc "<<n<<"  moves from "<< f<<" to "<<third<<endl; 
//     toh(n-1, s,f,third);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     toh(n,'A','B','C');
//     cout<<"The nubmer of the moves are :"<<pow(2,n)-1;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void printNum(int n){ // 7
    if (n == 0) // false bcz n != 0 ; when n == 0 so true
    {
        return;
    }
    printNum(n-1); // calls again same function with value 6
    cout << n << " ";
}

int main()
{
    int n;
    cin>>n;
    printNum(7);  
    cout << "program termination" << endl; 
    return 0;
}






















