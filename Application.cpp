
/* 
 * File:   Application.cpp
 * Author: william.mann@stoneageartisans.com
 * 
 * Created on June 20, 2019, 6:59 PM
 */

#include <iostream>

#include "Application.h"

using namespace std;

Application::Application()
{
    initialize();
}

Application::~ Application()
{
    cout << endl;
}

int Application::getChoice(const string& userInput)
{
    return ((userInput[0] - '0') - 1);
}

void Application::initialize()
{
    currentScreen = Screen::MAIN_MENU;
    previousScreen = currentScreen;
}

void Application::run()
{
    bool running = true;
    
    while(running)
    {
        ui.showScreen(currentScreen);
        
        switch(currentScreen)
        {
        case Screen::MAIN_MENU:
            switch((enum MainMenu::Choice) getChoice(ui.getUserInput()))
            {
                case MainMenu::CREATE: // 
                    previousScreen = currentScreen;
                    currentScreen = Screen::CREATE_MENU;
                    break;
                case MainMenu::LOAD:
                    previousScreen = currentScreen;
                    currentScreen = Screen::LOAD_MENU;
                    break;
                case MainMenu::EXIT:
                    previousScreen = currentScreen;
                    currentScreen = Screen::EXIT_MENU;
                    break;
                default:
                    ui.showMessage("Invalid choice");
                    break;
            }
            break;
        case Screen::CREATE_MENU:
            switch((enum CreateMenu::Choice) getChoice(ui.getUserInput()))
            {
                case CreateMenu::GO_BACK:
                    currentScreen = Screen::MAIN_MENU;
                    previousScreen = currentScreen;
                    break;
                default:
                    ui.showMessage("Invalid choice");
                    break;
            }
            break;
        case Screen::LOAD_MENU:
            switch((enum LoadMenu::Choice) getChoice(ui.getUserInput()))
            {
                case LoadMenu::GO_BACK:
                    currentScreen = Screen::MAIN_MENU;
                    previousScreen = currentScreen;
                    break;
                default:
                    ui.showMessage("Invalid choice");
                    break;
            }
            break;
        case Screen::EXIT_MENU:
            switch((enum ExitMenu::Choice) getChoice(ui.getUserInput()))
            {
                case ExitMenu::YES:
                    running = false;
                    ui.showMessage("Exiting application...");
                    break;
                case ExitMenu::NO:
                    currentScreen = previousScreen;
                    break;
                default:
                    ui.showMessage("Invalid choice");
                    break;
            }
            break;
        }
    }
}
