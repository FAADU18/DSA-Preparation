#include<iostream>
using namespace std;
//Abstraction base class
class Bankaccount{
    protected:
     float balance;
    public:
     Bankaccount(float initialbalance){
        balance = initialbalance;
     }
     //pure virtual functions
     virtual void deposit(float amount) = 0;
     virtual void withdraw(float amounr) = 0;
     virtual void displayBalance() = 0;
};
//Derived class 1
class savingsAccount : public Bankaccount{
    savingsAccount(float initialBalance) : Bankaccount(initialBalance){

    }
    void deposit(float amount)override{
        float interst = amount * 0.05;
        balance += (amount + interst);
        cout<<"Depositing "<<amount<<"In Savimgs Account "<<endl;
        cout<<"After interst: "<<balance<<endl;
    }
    void withdraw(float amount)override {
        if (amount <= balance){
            balance -= amount;
            cout<<"Withdrawing "<<amount<<"From Saving Account "<<endl;
        }else{
            cout<<"Current Savings Account Balance: "<<balance;
        }
    }
    void displayBalance() override{
        cout<<"Current Savings Account Balance "<<balance<<endl;
    }
};