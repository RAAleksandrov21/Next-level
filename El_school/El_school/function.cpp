#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void greet()  //Prints the name of the game and a slogan
{
    cout << setw(129) << "__      __          ___                                            __             " << endl;
   cout << setw(129) << "/\ \  __/\ \        /\_ \                                          /\ \__          " << endl;
     cout << setw(129) << "\ \ \/\ \ \ \     __\//\ \     ___    ___     ___ ___      __      \ \ ,_\   ___" << endl;
      cout << setw(129) << "\ \ \ \ \ \ \  /'__`\\ \ \   /'___\ / __`\ /' __` __`\  /'__`\     \ \ \/  / __`\ " << endl;
       cout << setw(129) << "\ \ \_/ \_\ \/\  __/ \_\ \_/\ \__//\ \L\ \/\ \/\ \/\ \/\  __/      \ \ \_/\ \L\ \ " << endl;
        cout << setw(129) << "\ `\___x___/\ \____\/\____\ \____\ \____/\ \_\ \_\ \_\ \____\      \ \__\ \____/" << endl;
         cout << setw(129) << "'\/__//__/  \/____/\/____/\/____/\/___/  \/_/\/_/\/_/\/____/       \/__/\/___/ " << endl;
                                                                                   
                                                                                   
              cout << setw(129) << "__  __                  __          ___                           ___   " << endl;
             cout << setw(129) << "/\ \/\ \                /\ \__      /\_ \                         /\_ \ " << endl;          
             cout << setw(129) << "\ \ `\\ \     __   __  _\ \ ,_\     \//\ \      __   __  __     __\//\ \ " << endl;
             cout << setw(129) << " \ , ` \  /'__`\/\ \/'\\ \ \/       \ \ \   /'__`\/\ \/\ \  /'__`\\ \ \ " << endl;
               cout << setw(129) << "\ \ \`\ \/\  __/\/>  </ \ \ \_       \_\ \_/\  __/\ \ \_/ |/\  __/ \_\ \_" << endl;
                cout << setw(129) << "\ \_\ \_\ \____\/\_/\_\ \ \__\      /\____\ \____\\ \___/ \ \____\/\____\ " << endl;
                 cout << setw(129) << "\/_/\/_/\/____/\//\/_/  \/__/      \/____/\/____/ \/__/   \/____/\/____/ " << endl;
    cout << endl;
    cout << setw(115) << "ELEMENTS UNLEASHED" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << endl;
    }
}

void menu()  // Main Menu on app
{
    cout << setw(116) << "Select one:" << endl;
    cout << endl;

    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "\            Start          \ " << endl;
    cout << setw(121) << "============================" << endl;
    cout << setw(121) << "\         Information       \ " << endl;
    cout << setw(121) << " ===========================" << endl; 
    cout << setw(121) << "\           Credits         \ " << endl;
    cout << setw(121) << " ===========================" << endl; 
    cout << setw(121) << "\           Exit            \ " << endl;
    cout << setw(121) << " ===========================" << endl;
    cout << endl;
    cout << setw(140) << "1. Start - you start the game from the beginning" << endl;
    cout << setw(141) << "2. Information - game instructions" << endl;
    cout << setw(143) << "3. Credits - level on game" << endl;
    cout << setw(80)  << "4. Exit" << endl;
    cout << endl;
}