/* 
 * File:   Application.cpp
 * Author: william.mann@stoneageartisans.com
 * 
 * Created on June 20, 2019, 6:59 PM
 */

#include <iostream>

#include "Application.h"

Application::Application()
{
    initialize();
}

Application::~ Application()
{
    cout << endl;
    
    delete character01;
}

int Application::getChoice(const string& userInput)
{
    // Convert user input to an array index
    return ((userInput[0] - '0') - 1);
}

void Application::initialize()
{
    currentScreen = Screen::MAIN_MENU;    
    character01 = new Entity(0);
    filename = character01->getName() + ".txt";
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
                    case MainMenu::CREATE:
                        currentScreen = Screen::CREATE_MENU;
                        break;
                    case MainMenu::LOAD:
                        currentScreen = Screen::LOAD_MENU;
                        break;
                    case MainMenu::EXIT:
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
                    case CreateMenu::ABILITIES:
                        currentScreen = Screen::ABILITIES_MENU;
                        break;
                    case CreateMenu::NAME:
                        currentScreen = Screen::NAME_MENU;
                        break;
                    case CreateMenu::SAVE_DONE:
                        currentScreen = Screen::SAVE_MENU;
                        break;
                    case CreateMenu::ABANDON:
                        currentScreen = Screen::ABANDON_MENU;
                        break;
                    default:
                        ui.showMessage("Invalid choice");
                        break;
                }
                break;
            case Screen::ABILITIES_MENU:
                switch((enum AbilitiesMenu::Choice) getChoice(ui.getUserInput()))
                {
                    case AbilitiesMenu::DONE:
                        currentScreen = Screen::CREATE_MENU;
                        break;
                    default:
                        ui.showMessage("Invalid choice");
                        break;
                }
                break;
            case Screen::ABANDON_MENU:
                switch((enum AbandonMenu::Choice) getChoice(ui.getUserInput()))
                {
                    case AbandonMenu::YES:
                        // Reset character
                        currentScreen = Screen::MAIN_MENU;
                        ui.showMessage("Character abandoned!");
                        break;
                    case AbandonMenu::NO:
                        currentScreen = Screen::CREATE_MENU;
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
                        currentScreen = Screen::MAIN_MENU;
                        break;
                    default:
                        ui.showMessage("Invalid choice");
                        break;
                }
                break;
            case Screen::SAVE_MENU:
                switch((enum SaveMenu::Choice) getChoice(ui.getUserInput()))
                {
                    case SaveMenu::SAVE:
                        filename = ui.getUserInput(string("filename"), filename);
                        character01->save(filename);
                        currentScreen = Screen::MAIN_MENU;
                        ui.showMessage("Character saved as " + filename);
                        break;
                    case SaveMenu::GO_BACK:
                        currentScreen = Screen::CREATE_MENU;
                        break;
                    default:
                        ui.showMessage("Invalid choice");
                        break;
                }
                break;
            case Screen::NAME_MENU:
                switch((enum NameMenu::Choice) getChoice(ui.getUserInput()))
                {
                    case NameMenu::SET_NAME:
                        character01->setName(ui.getUserInput(string("name"), character01->getName()));
                        filename = character01->getName() + ".txt";
                        currentScreen = Screen::CREATE_MENU;
                        break;
                    case NameMenu::GO_BACK:
                        currentScreen = Screen::CREATE_MENU;
                        break;
                    default:
                        ui.showMessage("Invalid choice");
                        break;
                }
                break;
        }
    }
}
