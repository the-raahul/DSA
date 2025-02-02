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



// };
// int main(){ 
//     Customer C1("Rahul", 5000,10);

//     try{
//         C1.deposit(100);
//         C1.withdraw(6000);
//         C1.deposit(100); // this will not execute when exception handling throw error;

//     }

//     catch(const char *e){
//         cout<<"Exception Occured: "<<e<<endl;
//     }

    

// }

#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance,account_number;

    public:
    Customer(string name, int balance, int account_number){
        this->name = name;
        this-> balance = balance;
        this-> account_number = account_number;

    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<"Amount is credited successful"<<endl;
        }
        else{
            throw "amount should be grater than 0";
        }
    }

    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance -= amount;
            cout<<amount<<" rs is debited successfull"<<endl;
        }
        else if(amount<0){
            throw "amount should be greater than 0";
        }
        else{
            throw "Your balance is low";
        }
    }



};
int main(){ 
    Customer C1("Rahul", 5000,10);

    try{
        C1.deposit(100);
        C1.withdraw(6000);
        C1.deposit(100); // this will not execute when exception handling throw error;

    }

    catch(const char *e){
        cout<<"Exception Occured: "<<e<<endl;
    }

    

}



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
//         if(amount<=0)
//             throw "amount should be grater than 0";
//             // agar throw execute hua toh  yahi se return ho jayega;
//             balance+=amount;
//             cout<<"Amount is credited successful"<<endl;
        
        
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



// };
// int main(){ 
//     Customer C1("Rahul", 5000,10);

//     try{
//         C1.deposit(100);
//         C1.withdraw(6000);
//         C1.deposit(100); // this will not execute when exception handling throw error;

//     }

//     catch(const char *e){
//         cout<<"Exception Occured: "<<e<<endl;
//     }

    

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     try{
//         if(b==0)
//         throw "Divide by 0 is not possible";
//         int c = a/b;
//         cout<<c<<endl;
//     }

//     catch(const char *e){
//         cout<<"Exception Occured: "<<e<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
        throw 10;
        int c = a/b;
        cout<<c<<endl;
    }

    catch(int e){
        cout<<"Exception Occured: "<<e<<endl;
    }
}