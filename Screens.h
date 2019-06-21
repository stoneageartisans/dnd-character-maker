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

enum ScreenType
{
    MAIN_MENU,
    EXIT_MENU
};

const vector<string> ScreenTitle =
{
    "MAIN MENU",
    "EXIT MENU"
};

enum MainMenu
{
    CREATE,
    LOAD,
    EXIT
};

enum ExitMenu
{
    YES,
    NO
};

const map<int, map<int, string>> ScreenItems =
{
    {
        MAIN_MENU,
        {
            { CREATE, "Create Character" },
            { LOAD, "Load Character" },
            { EXIT, "Exit App" }
        }
    },
    {
        EXIT_MENU,
        {
            { YES, "Yes, exit app" },
            { NO, "No, go back" }
        }
    }
};

#endif /* SCREENS_H */


