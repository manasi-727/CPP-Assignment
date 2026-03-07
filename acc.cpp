
#include<iostream>
using namespace std;
class Account
{
    int accNo, balance,new_bal;
    public:
        void accept()
        {
        cout<<"accept the value of accno and balance";
        cin>>accNo>>balance;
        }
        void display()
        {
            cout<<"account no is"<<accNo<<"\n"<<"balance is"<<balance<<endl;
        }
        void withDraw(int amt)
        {
            if(amt<balance){
                balance=balance-amt;
                cout<<"remaining balance is"<<balance;
            }
            else{
                cout<<"insufficient balance";
            }
        }
        void deposit(int dep)
        {
           balance=balance+dep;
           cout<<"new balance is"<<balance;
        }
};
int main(){
Account a1;
a1.accept();
a1.display();
a1.withDraw(500);
a1.deposit(200);
return 0;
}


