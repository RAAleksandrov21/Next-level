#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


    void printSlogan()  //Prints the name of the game and a slogan
    {
        cout << setw(128) << " _   __           _       _                  _" << endl;
        cout << setw(129) << "| \\ |  | _____  _| |_    | | ____ _   _____ | |" << endl;
        cout << setw(129) << "|  \\|  |/ _ \\ \\/ / __|   | |/ _ \\ \\ \\ / /_ \\| |" << endl;
        cout << setw(129) << "| | \\  |  __/ > <  | |_  | |  __/  \\ V / __/| |" << endl;
        cout << setw(129) << "|_|  \\_|\\___/_/\\_\\\\__|   |_| \\__|   \\_/ \\___|_|" << endl;
        cout << endl;
        cout << setw(120) << "Welcome to the application" << endl;
        for (int i = 0; i < 7; i++)
        {
            cout << endl;
        }
    }


void menu()  // Main Menu on app
{
    cout << setw(113) << "Select one:" << endl;
    cout << endl;

    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "\\            Start         \\ " << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "\\         Information      \\ " << endl;
    cout << setw(121) << " ===========================" << endl; 
    cout << setw(121) << "\\           Credits        \\ " << endl;
    cout << setw(121) << " ===========================" << endl; 
    cout << setw(121) << "\\           Exit           \\ " << endl;
    cout << setw(121) << " ===========================" << endl;
    cout << endl;
    cout << setw(129) << "<1> Start - you start the game from the beginning" << endl;
    cout << setw(115) << "<2> Information - game instructions" << endl;
    cout << setw(125) << "<3>. Credits - list of people who contributed" << endl;
    cout << setw(89)  << "<4>. Exit" << endl;
    cout << endl;
}