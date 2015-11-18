

#ifndef CHARACTERPROTOTYPE_H
#define	CHARACTERPROTOTYPE_H

#include <string>
#include<iostream>


/** The base class Character Prototype */
class CharacterPrototype {
public:
    
    /**
     * Create a new character prototype
     * @param name the name of the character
     * @param type the type of the character
     */
    CharacterPrototype(std::string name, std::string type);
     /**
     * Copies a new character prototype
     * @param orig a reference to the character to copy
     */
    CharacterPrototype(const CharacterPrototype& orig) = default;
     /**
     * Clones a new character prototype, must be implemented by derived classes
     * @returns A clone of the character
     */
    virtual CharacterPrototype* clone() = 0;
    /**
     * Set character's name
     * @param name the new name
     */
    virtual void setName(std::string name);
    /**
     * Get character's name
     * @return the character's name
     */
    virtual std::string getName();
    /**
     * Get character's type
     * @return the character's type
     */
    virtual std::string getType();
     /**
     * Deletes the character
     */
    virtual ~CharacterPrototype();
protected:
    std::string name;
    std::string type;
};

#endif	/* CHARACTERPROTOTYPE_H */

