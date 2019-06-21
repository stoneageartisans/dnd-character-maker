
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
    // TODO
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
                switch(ui.getUserInput())
                {
                    case '1':
                        // Show Create Character menu
                        ui.showMessage("Create Character");
                        break;
                    case '2':
                        // Show Load Character menu
                        ui.showMessage("Load Character");
                        break;
                    case '3':
                        previousScreen = currentScreen;
                        currentScreen = Screen::EXIT_MENU;
                        break;
                    default:
                        ui.showMessage("Invalid choice");
                        break;
                }
                break;
        case Screen::EXIT_MENU:
                switch(ui.getUserInput())
                {
                    case '1':
                        running = false;
                        ui.showMessage("Exiting application...");
                        break;
                    case '2':
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
