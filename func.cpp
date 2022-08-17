#include<iostream>
using namespace std; 

class Bank {
    public:
    int balance;
    
    Bank(int bal): balance(bal){}

    void increament(int incr){
        balance+=incr;
    }
    void decreament(int dcr){
        balance-=dcr;
    }
    int getval(){
        return balance;
    }
};



