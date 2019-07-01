/* 
 * File:   Application.h
 * Author: william.mann@stoneageartisans.com
 *
 * Created on June 20, 2019, 6:59 PM
 */

#ifndef APPLICATION_H
#define APPLICATION_H

#include "UserInterface.h"
#include "Entity.h"

using namespace std;

class Application
{
    public:
        Application();
        virtual ~Application();
        
        void run();
    
    private:
        Entity* entity;
        enum Screen::Type currentScreen;
        int getChoice(const string& userInput);
        UserInterface ui;
        
        void initialize();
};

#endif /* APPLICATION_H */
