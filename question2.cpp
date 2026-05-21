#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void mainMenu();
void historyMenu();
void learnMenu();
void originChapter();
void developmentChapter();
void evolutionChapter();
void dataTypes();
void controlFlow();
void loops();
void arrays();
void fileStreams();

// Main function
int main()
{
    int choice;

    do
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            historyMenu();
            break;

        case 2:
            learnMenu();
            break;

        case 3:
            cout << "\nThank you for using the system. Goodbye!\n";
            break;

        default:
            cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}

void mainMenu()
{
    cout << "\n========== FOUNDATIONS AND HISTORY OF C++ ==========\n";
    cout << "1. View History of C++\n";
    cout << "2. Learn About C++\n";
    cout << "3. Exit\n";
    cout << "Enter choice: ";
}

void historyMenu()
{
    int chapter;

    cout << "\n------ HISTORY OF C++ ------\n";
    cout << "1. Origin of C++\n";
    cout << "2. Development of C++\n";
    cout << "3. Evolution of C++\n";
    cout << "Enter chapter: ";

    cin >> chapter;

    switch (chapter)
    {
    case 1:
        originChapter();
        break;

    case 2:
        developmentChapter();
        break;

    case 3:
        evolutionChapter();
        break;

    default:
        cout << "Invalid chapter\n";
    }
}

void learnMenu()
{
    int topic;

    cout << "\n------ LEARN ABOUT C++ ------\n";
    cout << "1. Data Types\n";
    cout << "2. Control Flow\n";
    cout << "3. Loops\n";
    cout << "4. Arrays\n";
    cout << "5. File Streams\n";
    cout << "Enter topic: ";

    cin >> topic;

    switch (topic)
    {
    case 1:
        dataTypes();
        break;

    case 2:
        controlFlow();
        break;

    case 3:
        loops();
        break;

    case 4:
        arrays();
        break;

    case 5:
        fileStreams();
        break;

    default:
        cout << "Invalid topic\n";
    }
}

void originChapter()
{
    cout << "\nOrigin of C++\n";
    cout << "C++ was created by Bjarne Stroustrup in 1979 at Bell Labs.\n";
    cout << "It started as an extension of the C language.\n";
}

void developmentChapter()
{
    cout << "\nDevelopment of C++\n";
    cout << "C++ introduced object-oriented programming features.\n";
    cout << "Features include classes, inheritance and polymorphism.\n";
}

void evolutionChapter()
{
    cout << "\nEvolution of C++\n";
    cout << "C++ evolved through versions like C++11, C++14, C++17 and C++20.\n";
}

void dataTypes()
{
    cout << "\nData Types:\n";
    cout << "Examples: int, float, char, bool, double.\n";
}

void controlFlow()
{
    cout << "\nControl Flow:\n";
    cout << "Examples include if, if-else and switch statements.\n";
}

void loops()
{
    cout << "\nLoops:\n";
    cout << "for, while and do-while loops repeat instructions.\n";
}

void arrays()
{
    cout << "\nArrays:\n";
    cout << "Arrays store multiple values of the same data type.\n";
}

void fileStreams()
{
    ifstream file("file_streams.txt");

    if (file.is_open())
    {
        string line;

        cout << "\n--- File Stream Chapter ---\n";

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
    else
    {
        cout << "File not found.\n";
    }
}