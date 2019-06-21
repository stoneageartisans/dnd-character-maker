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

namespace CreateMenu
{
    enum Choice
    {
        ABILITY_SCORES,
        RACE,
        CLASS,
        SKILLS,
        FEATS,
        NAME,
        GENDER,
        GO_BACK
    };
}

namespace ExitMenu
{
    enum Choice
    {
        YES,
        NO
    };
}

namespace LoadMenu
{
    enum Choice
    {
        SELECT_FILE,
        GO_BACK
    };
}

namespace MainMenu
{
    enum Choice
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
        CREATE_MENU,
        LOAD_MENU,
        EXIT_MENU
    };
    
    // *** Ensure these coincide with the above Type ***
    const vector<string> Title =
    {
        "MAIN MENU",
        "CREATE CHARACTER",
        "LOAD CHARACTER",
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
            CREATE_MENU,
            {
                { CreateMenu::ABILITY_SCORES, "Ability Scores" },
                { CreateMenu::RACE, "Race" },
                { CreateMenu::CLASS, "Class" },
                { CreateMenu::SKILLS, "Skills" },
                { CreateMenu::FEATS, "Feats" },
                { CreateMenu::NAME, "Name" },
                { CreateMenu::GENDER, "Gender" },
                { CreateMenu::GO_BACK, "Back to Main Menu" }
            }
        },
        {
            LOAD_MENU,
            {
                { LoadMenu::SELECT_FILE, "Select File" },
                { LoadMenu::GO_BACK, "Back to Main Menu" }
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
