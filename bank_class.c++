#include <iostream>
#include <string>
using namespace std;

string registered_name;

class Open_Account
{
public:
    void setName(string nme)
    {
        name = nme;
    }
    void  setDeposit(int dep)
    {
        deposit = dep;
    }
    string getName()
    {
        return name;
    }
    int getDeposit() const
    {
        return deposit;
    }

private:
    string name;
    int deposit = 0;


};
class Show_Account_Detail
{
    

};
class Deposit
{

};
class Withdraw
{

};
class Search_Exit
{

};

int main()
{
    Open_Account openAccount;
    cout << "Bank Account Name: ";
    openAccount.setName("Kennedy");
    cout << openAccount.getName() << endl;
    openAccount.setDeposit(300);
    cout << "Account Balance " ;
    cout <<  openAccount.getDeposit() << endl;

    return 0;
}
