/* 
 * File:   UserInterface.h
 * Author: william.mann@stoneageartisans.com
 *
 * Created on June 20, 2019, 6:49 PM
 */

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <string>

#include "Screens.h"

using namespace std;

class UserInterface
{
    public:
        UserInterface();
        virtual ~UserInterface();
        void showMessage(const string& message);
        string getUserInput();
        void showScreen(enum Screen::Type screen);

    private:
};

#endif /* USERINTERFACE_H */
