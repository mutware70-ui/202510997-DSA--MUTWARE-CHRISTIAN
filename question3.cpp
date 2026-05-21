#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void showMenu();
void historySection();
void learnSection();
void displayFileContent(string filename);

int main()
{
    int choice;

    do
    {
        showMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            historySection();
            break;

        case 2:
            learnSection();
            break;

        case 3:
            cout << "Exiting program... Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Try again!" << endl;
        }

    } while (choice != 3);

    return 0;
}

void showMenu()
{
    cout << "\n========== FOUNDATIONS AND HISTORY OF C++ ==========\n";
    cout << "1. History of C++\n";
    cout << "2. Learn about C++\n";
    cout << "3. Exit\n";
    cout << "====================================================\n";
}

void historySection()
{
    int chapter;

    cout << "\n----- HISTORY OF C++ -----\n";
    cout << "1. Origin of C++\n";
    cout << "2. Development of C++\n";
    cout << "3. Evolution of C++\n";
    cout << "Choose chapter: ";
    cin >> chapter;

    switch (chapter)
    {
    case 1:
        cout << "\nC++ was created by Bjarne Stroustrup in 1979 at Bell Labs.\n";
        cout << "It was developed as an extension of the C programming language.\n";
        break;

    case 2:
        cout << "\nC++ evolved to support object-oriented programming.\n";
        cout << "It introduced classes, inheritance, and polymorphism.\n";
        break;

    case 3:
        cout << "\nC++ has evolved into a powerful modern language.\n";
        cout << "It is used in games, systems, AI, and high-performance apps.\n";
        break;

    default:
        cout << "Invalid chapter selected.\n";
    }
}

void learnSection()
{
    int chapter;

    cout << "\n----- LEARN ABOUT C++ -----\n";
    cout << "1. Data Types\n";
    cout << "2. Control Flow\n";
    cout << "3. Loops\n";
    cout << "4. Arrays\n";
    cout << "5. File Streams\n";
    cout << "Choose chapter: ";
    cin >> chapter;

    switch (chapter)
    {
    case 1:
        cout << "\nData Types:\nint, float, char, double, bool are basic C++ data types.\n";
        break;

    case 2:
        cout << "\nControl Flow:\nIncludes if, else, switch statements to control program decisions.\n";
        break;

    case 3:
        cout << "\nLoops:\nC++ supports for, while, and do-while loops for repetition.\n";
        break;

    case 4:
        cout << "\nArrays:\nArrays store multiple values of the same type in one variable.\n";
        break;

    case 5:
        cout << "\nFile Streams (Reading from file):\n";
        displayFileContent("file_streams.txt");
        break;

    default:
        cout << "Invalid chapter selected.\n";
    }
}

void displayFileContent(string filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error: Could not open file " << filename << endl;
        cout << "Make sure the file exists in your project folder.\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}