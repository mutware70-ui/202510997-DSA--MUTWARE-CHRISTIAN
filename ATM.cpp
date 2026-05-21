#include <iostream>
#include <string>

using namespace std;

int main()
{

    int defaultPIN = 12345;
    int maxAttempts = 3;
    int pin, choice, amount, balance = 0;

    string transctionHistory[100];
    int transCount = 0;

    cout << "\033[36m";
    cout << "\t\t==========================================" << endl;
    cout << "\t\t            BK ATM SYSTEM                 " << endl;
    cout << "\t\t==========================================" << endl;
    cout << "\033[0m" << endl;

    do
    {

        cout << "\tEnter your PIN : ";
        cin >> pin;

        maxAttempts--;

        if (pin == defaultPIN)
        {

            cout << "\033[32m";
            cout << "\n\tLogin Successful" << endl;
            cout << "\033[0m";

            cout << "\033[35m";
            cout << "\tWelcome to BK ATM" << endl;
            cout << "\033[0m";

            do
            {

                cout << "\n\033[34m=========== MAIN MENU =========== \033[0m" << endl;
                cout << "  [1] Check Balance" << endl;
                cout << "  [2] Deposit Money" << endl;
                cout << "  [3] Withdraw Money" << endl;
                cout << "  [4] Transaction History" << endl;
                cout << "  [5] Exit" << endl;
                cout << "\033[34m================================= \033[0m" << endl;

                cout << "\nEnter your choice : ";
                cin >> choice;

                if (choice == 1)
                {

                    cout << "\033[32m";
                    cout << "\nCurrent Balance : " << balance << " FRW" << endl;
                    cout << "\033[0m";
                }
                else if (choice == 2)
                {

                    cout << "\nEnter amount to deposit : ";
                    cin >> amount;

                    balance = balance + amount;

                    cout << "\033[32m";
                    cout << "\nDeposit Successful" << endl;
                    cout << "New Balance : " << balance << " FRW" << endl;
                    cout << "\033[0m";

                    transctionHistory[transCount] =
                        "Deposited : " + to_string(amount) + " FRW";

                    transCount++;
                }
                else if (choice == 3)
                {

                    cout << "\nEnter amount to withdraw : ";
                    cin >> amount;

                    if (amount > balance)
                    {

                        cout << "\033[31m";
                        cout << "\nInsufficient Funds" << endl;
                        cout << "\033[0m";
                    }
                    else
                    {

                        balance = balance - amount;

                        cout << "\033[32m";
                        cout << "\nWithdrawal Successful" << endl;
                        cout << "Withdrawn Amount : "
                             << amount << " FRW" << endl;

                        cout << "Remaining Balance : "
                             << balance << " FRW" << endl;

                        cout << "\033[0m";

                        transctionHistory[transCount] =
                            "Withdrawn : " + to_string(amount) + " FRW";

                        transCount++;
                    }
                }
                else if (choice == 4)
                {

                    cout << "\n\033[36m====== TRANSACTION HISTORY ====== \033[0m"
                         << endl;

                    if (transCount == 0)
                    {

                        cout << "\033[31m";
                        cout << "No Transactions Found" << endl;
                        cout << "\033[0m";
                    }
                    else
                    {

                        for (int i = 0; i < transCount; i++)
                        {

                            cout << i + 1 << ". "
                                 << transctionHistory[i]
                                 << endl;
                        }
                    }
                }
                else if (choice == 5)
                {

                    cout << "\033[33m";
                    cout << "\nThank You For Using BK ATM" << endl;
                    cout << "\033[0m";
                }
                else
                {

                    cout << "\033[31m";
                    cout << "\nInvalid Choice" << endl;
                    cout << "\033[0m";
                }

            } while (choice != 5);
        }
        else
        {

            cout << "\033[31m";
            cout << "\nWrong PIN" << endl;
            cout << "\033[0m";

            if (maxAttempts > 0)
            {

                cout << "\033[33m";
                cout << "Remaining Attempts : "
                     << maxAttempts << endl;

                cout << "\033[0m";
            }
        }

    } while (pin != defaultPIN && maxAttempts > 0);

    if (maxAttempts == 0)
    {

        cout << "\033[31m";
        cout << "\nATM BLOCKED" << endl;
        cout << "\033[0m";
    }

    return 0;
}