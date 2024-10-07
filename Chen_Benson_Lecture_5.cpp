// Benson Chen
// Lecture 5
// 10/7/24
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float account_money;
    int transactions;
    int type_of_transaction;
    float money_in_transaction;
    float remaining_money_in_account;
    float debit_money;
    float credit_money;
    float total_debit_money;
    float total_credit_money;

    cout << fixed << setprecision(2) << "How much money was in your bank account at the start of the day: ";
    cin >> account_money;
    cout << "\nHow many transactions were done that day: ";
    cin >> transactions;
    float account_money_2 = account_money;

    for(int i = 1; i<=transactions; i++)
    {
        cout << "\nWas the transaction debit (1) or credit (0): ";
        cin >> type_of_transaction;
        cout << "\nAmount of money in the transaction: ";
        cin >> money_in_transaction;

        if(type_of_transaction == 1)
        {
            debit_money = account_money - money_in_transaction;
            cout << "\nYou have thus much money left in your account after this transaction: " 
            << debit_money << endl;
            account_money = debit_money;
            total_debit_money += money_in_transaction;
        }
        if(type_of_transaction == 1)
        {
            credit_money = (account_money + money_in_transaction);
            cout << "\nYou have thus much money left in your account after this transaction: " 
            << credit_money << endl;
            account_money = credit_money;
            total_credit_money += money_in_transaction;
        }
    }
    remaining_money_in_account = account_money_2 - total_debit_money + total_credit_money;
    cout << "\nRemaining money in account: " << remaining_money_in_account << endl;
    cout << "Total debit amount transferred for the day: " << total_debit_money << endl;
    cout << "Total credit amount transferred for the day: " << total_credit_money << endl;
    return 0;
}