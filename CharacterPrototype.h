/* 
 * File:   CharacterPrototype.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:32 PM
 */

#ifndef CHARACTERPROTOTYPE_H
#define	CHARACTERPROTOTYPE_H

#include <string>


class CharacterPrototype {
public:
    CharacterPrototype(std::string name, std::string type);
    CharacterPrototype(const CharacterPrototype& orig) = default;
    virtual CharacterPrototype* clone() = 0;
    virtual void setName(std::string name);
    virtual std::string getName();
    virtual std::string getType();
    virtual ~CharacterPrototype();
protected:
    std::string name;
    std::string type;
};

#endif	/* CHARACTERPROTOTYPE_H */

