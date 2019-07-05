/* 
 * File:   UserInterface.cpp
 * Author: william.mann@stoneageartisans.com
 * 
 * Created on June 20, 2019, 6:49 PM
 */

#include <iostream>

#include "UserInterface.h"

UserInterface::UserInterface()
{
    // TODO
}

UserInterface::~ UserInterface()
{
    // TODO
}

string UserInterface::getUserInput()
{
    string userInput;
    
    cout << endl << "  Enter choice: ";
    
    cin >> userInput;
    
    return userInput;
}

string UserInterface::getUserInput(const string& inputName, const string& defaultInput)
{
    string userInput;
    
    cout << endl << "  Enter new " << inputName << " or press [ENTER] for " << defaultInput << ": ";
    
    cin.ignore(10000,'\n');
    
    getline(cin, userInput);

    if(userInput.length() < 1)
    {
        userInput = defaultInput;
    }
    
    return userInput;
}

void UserInterface::showMessage(const string& message)
{
    cout << endl << message << endl;
}

void UserInterface::showScreen(enum Screen::Type screen)
{
    cout << endl << Screen::Title.at(screen) << endl << endl;
    
    for(int i = 0; i < Screen::Content.at(screen).size(); i ++)
    {
        cout << "  " << (i + 1) << " - " <<  Screen::Content.at(screen).at(i) << endl;
    }    
}
