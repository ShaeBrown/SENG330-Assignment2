/* 
 * File:   PlayableCharacter.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:33 PM
 */

#ifndef PLAYABLECHARACTER_H
#define	PLAYABLECHARACTER_H

#include"CharacterPrototype.h"

#include<string>
/** Playable Character, a derived class from Character Prototype */
class PlayableCharacter:public CharacterPrototype {
public:
    /**
     * Creates a new playable character
     * @param name the name for the player
     */
    PlayableCharacter(std::string name);
    /**
     * Copies a playable character
     * @param orig the playable character to copy
     */
    PlayableCharacter(const PlayableCharacter& orig);
    /**
     * Clones the playable character
     * @return a clone of the character
     */
    virtual CharacterPrototype* clone();
    /**
     * Destroys the character
     */
    virtual ~PlayableCharacter();
private:


};

#endif	/* PLAYABLECHARACTER_H */

