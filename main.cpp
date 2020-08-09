#include <iostream>
#include "Loading.h"
using namespace std;

int main()
{
    int ch;
    bool bk;
    Loading ld;
    ld.loadingMachine();
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t----------------------------------------------------\n";
    cout << "\t\t\t\t                ATM-CLI(ver 1.0.1)                   ";
    cout << "\n\t\t\t\t----------------------------------------------------";
    cout << "\n\n\n";
    ld.sleep(2.0);
    cout << "\t\t\t\t[1] " << "Register\n";
    ld.sleep(1.5);
    cout << "\t\t\t\t[2] " << "Login\n";
    ld.sleep(1.0);
    cout << "\t\t\t\t[3] " << "Check Balance\n";
    ld.sleep(0.5);
    cout << "\t\t\t\t[4] " << "Inquire\n";
    ld.sleep(0.0);
    cout << "\t\t\t\t[5] " << "About\n";
    cout << "\t\t\t\t----------------------------------------------------\n";
    cout << "\t\t\t\t                                                      ";
    cout << "\n\t\t\t\t----------------------------------------------------";
    cout << "\n\n\n";
    do
    {
        cout << "Complete action by typing numbers -> ";
        cin >> ch;
       if(ch == 1){cout << "Sample 1ss";}
       else if(ch == 2){cout << "Sample 2";bk =true;}
       else if(ch == 3){cout << "Sample 3";bk =true;}
       else if(ch == 4){cout << "Sample 4";bk =true;}
       else if(ch == 5){cout << "Sample 5";bk =true;}
       else{bk =false;}

    }
    while(!(bk));
    return 0;
}
