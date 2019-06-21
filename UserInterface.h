/* 
 * File:   UserInterface.h
 * Author: william.mann@stoneageartisans.com
 *
 * Created on June 20, 2019, 6:49 PM
 */

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Screens.h"

class UserInterface
{
    public:
        UserInterface();
        virtual ~UserInterface();
        void showMessage(const string& message);
        char getUserInput();
        void showScreen(enum ScreenType screen);

    private:
};

#endif /* USERINTERFACE_H */
