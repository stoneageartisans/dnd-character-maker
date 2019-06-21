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
        enum ScreenType currentScreen;
        enum ScreenType previousScreen;
        UserInterface ui;
        void initialize();
};

#endif /* APPLICATION_H */
