/* 
 * File:   AICharacter.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:35 PM
 */

#ifndef AICHARACTER_H
#define	AICHARACTER_H

#include"CharacterPrototype.h"
/**
 * An AI Character, a derived class from the CharacterPrototype
 */
class AICharacter: public CharacterPrototype {
public:
    /**
     * Creates a new AI Character
     * @param name the name of the player
     */
    AICharacter(std::string name);
    /**
     * Copies the AI player
     * @param orig the AI to copy
     */
    AICharacter(const AICharacter& orig);
    /**
     * Clones the AI returns the base class
     * @return the clone
     */
    virtual CharacterPrototype* clone();
    /**
     * Destroys the AI
     */
    virtual ~AICharacter();
private:

};

#endif	/* AICHARACTER_H */

