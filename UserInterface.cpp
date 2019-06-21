
/* 
 * File:   UserInterface.cpp
 * Author: william.mann@stoneageartisans.com
 * 
 * Created on June 20, 2019, 6:49 PM
 */

#include <iostream>

#include "UserInterface.h"

using namespace std;

UserInterface::UserInterface()
{
    // TODO
}

UserInterface::~ UserInterface()
{
    // TODO
}

char UserInterface::getUserInput()
{
    char choice[256];
    
    cout << endl << "  Enter choice: ";    
    cin >> choice;
    
    return choice[0];
}

void UserInterface::showMessage(const string& message)
{
    cout << endl << message << endl;
}

void UserInterface::showScreen(enum ScreenType screen)
{
    cout << endl << ScreenTitle[screen] << endl << endl;
    
    for(int i = 0; i < ScreenItems.at(screen).size(); i ++)
    {
        cout << "  " << (i + 1) << " - " <<  ScreenItems.at(screen).at(i) << endl;
    }    
}
