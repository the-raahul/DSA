#include<iostream>
// #include<exception>
using namespace std;
int main(){

    try{
        int *p = new int[10000000000];
    
        cout<<"Memory allocation is successfull\n";
        delete []p;
    }

    catch (const bad_alloc &e){
        cout<<"Exception Occured due to "<<e.what()<<endl;
    }
}