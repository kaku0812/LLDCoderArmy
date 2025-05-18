#include<bits/stdc++.h>

#define int long long
#define endl '\n'
using namespace std;
class BankAccount
{
    private: 
    int accountNumb;
    public:
    string name;
    int balance;
    BankAccount(int acNo, string name, int b)
    {
        this -> accountNumb = acNo;
        this -> name = name;
        this -> balance = b;
    }
    void deposit(int amt)
    {
        balance += amt;
    }
    void withdraw(int amt)
    {
        if (balance >= amt)
            balance -= amt;
        else
            return;
    }
    void display()
    {
        cout << "Current balance:" << balance << endl;
    }
    int getAccNo()
    {
        return accountNumb;
    }
    void setName(string s)
    {
        name=s;
    }
    string getName()
    {
        return name;
    }

};
signed main()
{
    BankAccount * ba = new BankAccount(92, "Khyati", 10000);
    ba -> deposit(5600);
    ba -> display();
    ba -> withdraw(1200);
    cout << ba -> balance << endl;
    //ba->accountNumb= 46; //incorrect
    cout<<ba->getAccNo()<<endl;//private
    ba->setName("Vidushi");
    cout<<ba->name<<endl;
    

    //     BankAccount ba(92, "Khyati", 10000);
    // ba.deposit(5600);
    // ba.display();


}