/* 
 * File:   Entity.cpp
 * Author: william.mann@stoneageartisans.com
 * 
 * Created on June 23, 2019, 11:04 PM
 */

#include "Entity.h"

#include <fstream>
#include <string>

Entity::Entity(int _id)
{
    initialize(_id);
}

Entity::~Entity()
{
    // TODO
}

string Entity::getIndentation(int spaceCount)
{
    string indentation = "";
    
    for(int i = 0 ; i < spaceCount; i ++)
    {
        indentation += " ";
    }
    
    return indentation;
}

const string& Entity::getName()
{
    return name;
}

void Entity::initialize(int _id)
{
    id = _id;
    name = "unnamed";
    strength = 10;
    dexterity = 10;
    constitution = 10;
    intelligence = 10;
    wisdom = 10;
    charisma = 10;
}

void Entity::load()
{
    // TODO
}

void Entity::save(const string& filename)
{
    ofstream outputFileStream(filename);
    
    if(outputFileStream.is_open())
    {
        outputFileStream << "<entity>" << endl;        
        outputFileStream << "    <name>" << name << "</name>" << endl;
        outputFileStream << "    <strength>" << strength << "</strength>" << endl;
        outputFileStream << "    <dexterity>" << dexterity << "</dexterity>" << endl;
        outputFileStream << "    <constitution>" << constitution << "</constitution>" << endl;
        outputFileStream << "    <intelligence>" << intelligence << "</intelligence>" << endl;
        outputFileStream << "    <wisdom>" << wisdom << "</wisdom>" << endl;
        outputFileStream << "    <charisma>" << charisma << "</charisma>" << endl;
        outputFileStream << "</entity>" << endl;        
        outputFileStream << endl;
    }
    
    outputFileStream.close();
}

void Entity::setName(const string& _name)
{
    name = _name;
}
