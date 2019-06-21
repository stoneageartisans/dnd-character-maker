/* 
 * File:   Screens.h
 * Author: william.mann@stoneageartisans.com
 *
 * Created on June 20, 2019, 7:05 PM
 */

#ifndef SCREENS_H
#define SCREENS_H

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace CreateCharacterMenu
{
    enum Choices
    {
        BACK
    };
}

namespace ExitMenu
{
    enum Choices
    {
        YES,
        NO
    };
}

namespace LoadCharacterMenu
{
    enum Choices
    {
        BACK
    };
}

namespace MainMenu
{
    enum Choices
    {
        CREATE,
        LOAD,
        EXIT
    };
}

namespace Screen
{
    enum Type
    {
        MAIN_MENU,
        EXIT_MENU
    };
    
    const vector<string> Title =
    {
        "MAIN MENU",
        "CONFIRM EXIT"
    };

    const map<int, map<int, string>> Content =
    {
        {
            MAIN_MENU,
            {
                { MainMenu::CREATE, "Create Character" },
                { MainMenu::LOAD, "Load Character" },
                { MainMenu::EXIT, "Exit App" }
            }
        },
        {
            EXIT_MENU,
            {
                { ExitMenu::YES, "Yes, exit app" },
                { ExitMenu::NO, "No, go back" }
            }
        }
    };
}

#endif /* SCREENS_H */
