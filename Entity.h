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
        Entity(int _id);
        virtual ~Entity();
        const string& getName();
        void save(const string& filename);
        void setName(const string& _name);
        
    private:
        int charisma;
        int constitution;
        int dexterity;
        int id;
        int intelligence;
        int strength;
        int wisdom;
        string name;
        
        string getIndentation(int spaceCount);
        void initialize(int _id);
        void load();
};

#endif /* ENTITY_H */
