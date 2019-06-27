/* 
 * File:   Entity.h
 * Author: william.mann@stoneageartisans.com
 *
 * Created on June 23, 2019, 11:04 PM
 */

#ifndef ENTITY_H
#define ENTITY_H

#include <string>

using namespace std;

class Entity
{
    public:
        Entity();
        virtual ~Entity();
        
    private:
        int id;        
        string name;
        
        void initialize();
};

#endif /* ENTITY_H */
