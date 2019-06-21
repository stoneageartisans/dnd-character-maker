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

using namespace std;

namespace AbilitiesMenu
{
    enum Choice
    {
        STRENGTH,
        DEXTERITY,
        CONSTITUTION,
        INTELLIGENCE,
        WISDOM,
        CHARISMA,
        DONE
    };
}

namespace CreateMenu
{
    enum Choice
    {
        ABILITIES,
        RACE,
        CLASS,
        SKILLS,
        FEATS,
        NAME,
        GENDER,
        SAVE_DONE,
        ABANDON
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
        ABILITIES_MENU,
        CREATE_MENU,
        EXIT_MENU,
        LOAD_MENU,
        MAIN_MENU
    };
    
    const map<int, string> Title =
    {
        { ABILITIES_MENU, "MODIFY ABILITY" },
        { CREATE_MENU, "CREATE CHARACTER" },
        { EXIT_MENU, "CONFIRM EXIT" },
        { LOAD_MENU, "LOAD CHARACTER" },
        { MAIN_MENU, "MAIN MENU" }
    };

    const map<int, map<int, string>> Content =
    {
        {
            ABILITIES_MENU,
            {
                { AbilitiesMenu::STRENGTH, "Strength" },
                { AbilitiesMenu::DEXTERITY, "Dexterity" },
                { AbilitiesMenu::CONSTITUTION, "Constitution" },
                { AbilitiesMenu::INTELLIGENCE, "Intelligence" },
                { AbilitiesMenu::WISDOM, "Wisdom" },
                { AbilitiesMenu::CHARISMA, "Charism" },
                { AbilitiesMenu::DONE, "Done" }
            }
        },
        {
            CREATE_MENU,
            {
                { CreateMenu::ABILITIES, "Abilities" },
                { CreateMenu::RACE, "Race" },
                { CreateMenu::CLASS, "Class" },
                { CreateMenu::SKILLS, "Skills" },
                { CreateMenu::FEATS, "Feats" },
                { CreateMenu::NAME, "Name" },
                { CreateMenu::GENDER, "Gender" },
                { CreateMenu::SAVE_DONE, "Save & Done" },
                { CreateMenu::ABANDON, "Abandon Character" }
            }
        },
        {
            EXIT_MENU,
            {
                { ExitMenu::YES, "Yes, exit app" },
                { ExitMenu::NO, "No, go back" }
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
            MAIN_MENU,
            {
                { MainMenu::CREATE, "Create Character" },
                { MainMenu::LOAD, "Load Character" },
                { MainMenu::EXIT, "Exit App" }
            }
        }
    };
}

#endif /* SCREENS_H */
