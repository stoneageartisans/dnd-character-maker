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

void Entity::initialize(int _id)
{
    id = _id;
    name = "Not Assigned";
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
        
        outputFileStream << getIndentation(4) << "<name>" << name << "</name>" << endl;
        outputFileStream << getIndentation(4) << "<id>" << id << "</id>" << endl;
        
        outputFileStream << "</entity>" << endl;
        
        outputFileStream << endl;
    }
    
    outputFileStream.close();
}
