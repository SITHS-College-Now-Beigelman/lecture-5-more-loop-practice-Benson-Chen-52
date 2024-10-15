// Benson Chen
// Lecture 5
// 10/7/24
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    // Defining Variables
    float account_money;
    int transactions;
    int type_of_transaction;
    float money_in_transaction;
    float remaining_money_in_account;
    float debit_money;
    float credit_money;
    float total_debit_money;
    float total_credit_money;

    //Sets the output to be in decimal form and to the second decimal place
    //Asks user for the amount of money in their account
    cout << fixed << setprecision(2) << "How much money was in your bank account at the start of the day: ";
    cin >> account_money;
    //Asks for the number of transactions
    cout << "\nHow many transactions were done that day: ";
    cin >> transactions;
    //Sets a second variable equal to the amount of money in account to be used later
    float account_money_2 = account_money;

    //Runs the code in the loop for the number of transactions there are
    for(int i = 1; i<=transactions; i++)
    {   
        //Asks for the type of transaction
        cout << "\nWas the transaction debit (1) or credit (0): ";
        cin >> type_of_transaction;
        //Asks for the amount of money in that transaction
        cout << "\nAmount of money in the transaction: ";
        cin >> money_in_transaction;

        //If the transaction was debit 
        if(type_of_transaction == 1)
        {   
            //Calculations: Sets a new variable equal to the account money minus the money in the transaction
            debit_money = account_money - money_in_transaction;
            cout << "\nYou have thus much money left in your account after this transaction: " 
            << debit_money << endl;
            //Sets the money in the account to be equal to the debit money for further iterations
            account_money = debit_money;
            //Keeps track of the amount of debit money
            total_debit_money += money_in_transaction;
        }
        //If the transaction was credit
        if(type_of_transaction == 0)
        {   
            //Calculations: Adds money to the account
            credit_money = (account_money + money_in_transaction);
            cout << "\nYou have thus much money left in your account after this transaction: " 
            << credit_money << endl;
            //Sets account money to be equal to credit money
            account_money = credit_money;
            //Keeps track of total credit money
            total_credit_money += money_in_transaction;
        }
    }
    //Final calculation after all the transactions of the day
    remaining_money_in_account = account_money_2 - total_debit_money + total_credit_money;
    //Prints the values of remaining money, total debit and credit money
    cout << "\nRemaining money in account: " << remaining_money_in_account << endl;
    cout << "Total debit amount transferred for the day: " << total_debit_money << endl;
    cout << "Total credit amount transferred for the day: " << total_credit_money << endl;
    return 0;
}
/*How much money was in your bank account at the start of the day: 500

How many transactions were done that day: 5

Was the transaction debit (1) or credit (0): 1

Amount of money in the transaction: 100

You have thus much money left in your account after this transaction: 400.00

Was the transaction debit (1) or credit (0): 0

Amount of money in the transaction: 200

You have thus much money left in your account after this transaction: 600.00

Was the transaction debit (1) or credit (0): 1

Amount of money in the transaction: 357

You have thus much money left in your account after this transaction: 243.00

Was the transaction debit (1) or credit (0): 0

Amount of money in the transaction: 456.22  

You have thus much money left in your account after this transaction: 699.22

Was the transaction debit (1) or credit (0): 1

Amount of money in the transaction: 521.89

You have thus much money left in your account after this transaction: 177.33

Remaining money in account: 177.33
Total debit amount transferred for the day: 978.89
Total credit amount transferred for the day: 656.22*/