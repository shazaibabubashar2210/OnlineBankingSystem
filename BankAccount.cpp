#include <iostream>
using namespace std;
class BankAccount
{
private:
    int AccountNumber;
    float Balance;

public:
    BankAccount()
    {
        AccountNumber = 0;
        Balance = 0;
    }
    void SetAcountNumber(int AccountNumber)
    {
        this->AccountNumber = AccountNumber;
    }
    int GetAccountNumber()
    {
        return AccountNumber;
    }

    void SetBalance(float balance)
    {
        this->Balance = balance;
    }
    float GetBalance()
    {
        return this->Balance;
    }

    void Deposit(float amount)
    {
        if (amount > 0)
        {
            Balance += amount;
            cout << "Money Deposit Successfully!" << endl;
        }
        else
        {
            cout << "------------------------------------" << endl;
            cout << "Amount can't be Negative";
            cout << "\n------------------------------------" << endl;
        }
    }
    void withDraw(float amount)
    {
        if (amount > Balance)
        {
            cout << "------------------------------------" << endl;
            cout << "Your account doesn't have money you wanna withdraw";
            cout << "\n------------------------------------" << endl;
        }
        else
        {
            Balance -= amount;
            cout << "------------------------------------" << endl;
            cout << "Money Withdraw Successfully!" << endl;
            cout << "\n------------------------------------" << endl;
        }
    }
    void DisplayAccountDetails()
    {
        cout << "Account Number is " << GetAccountNumber() << " And Balance is " << this->Balance << endl;
    }
};
int main()
{
    BankAccount Bank_Accounts[10];
    int choice;
    while (true)
    {
        cout<<"----------------Welcome to Online Banking System---------------"<<endl<<endl;
        cout << "1. For Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout<<"3. Display Account Details"<<endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            int accountNumber;
            cout << "Enter the account Number(1-10): ";
            cin >> accountNumber;
            Bank_Accounts[accountNumber].SetAcountNumber(accountNumber);
            float money;
            if (accountNumber >= 1 && accountNumber <= 10)
            {

                cout << "Enter money you wanna a deposit: ";
                cin >> money;
                Bank_Accounts[accountNumber].Deposit(money);
            }
        }
        else if (choice == 2)
        {
            int accountNumber;
            cout << "Enter the account Number(1-10): ";
            cin >> accountNumber;
            float money;
            if (accountNumber >= 1 && accountNumber <= 10)
            {

                cout << "Enter money you wanna a withdraw: ";
                cin >> money;
                Bank_Accounts[accountNumber].withDraw(money);
            }
            else{
                cout<<"Index out of Reach"<<endl;
            }
        }
        else if (choice == 3)
        {
            int accountNumber;
            cout << "Enter Account Number to see it's Details: ";
            cin >> accountNumber;
            Bank_Accounts[accountNumber].DisplayAccountDetails();
        }
        else if (choice == 4)
        {
            cout << "------------------------------------------" << endl;
            cout << "ThankYou! For Using my Software" << endl;
            cout << "------------------------------------------" << endl;
            break;
        }
        else
        {
            cout << "Wrong Input!" << endl;
        }
    }

    return 0;
}