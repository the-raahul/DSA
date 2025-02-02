// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int balance,account_number;

//     public:
//     Customer(string name, int balance, int account_number){
//         this->name = name;
//         this-> balance = balance;
//         this-> account_number = account_number;

//     }

//     void deposit(int amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<"Amount is credited successful"<<endl;
//         }
//         else{
//             throw "amount should be grater than 0";
//         }
//     }

//     void withdraw(int amount){
//         if(amount>0&&amount<=balance){
//             balance -= amount;
//             cout<<amount<<" rs is debited successfull"<<endl;
//         }
//         else if(amount<0){
//             throw "amount should be greater than 0";
//         }
//         else{
//             throw "Your balance is low";
//         }
//     }