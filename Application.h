/* 
 * File:   Application.h
 * Author: william.mann@stoneageartisans.com
 *
 * Created on June 20, 2019, 6:59 PM
 */

#ifndef APPLICATION_H
#define APPLICATION_H

#include "UserInterface.h"

class Application
{
    public:
        Application();
        virtual ~Application();
        void run();
    
    private:
        enum Screen::Type currentScreen;
        UserInterface ui;
        int getChoice(const string& userInput);
        void initialize();
};

#endif /* APPLICATION_H */
