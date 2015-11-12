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

class PlayableCharacter:public CharacterPrototype {
public:
    PlayableCharacter(std::string name);
    PlayableCharacter(const PlayableCharacter& orig);
    virtual CharacterPrototype* clone();
    virtual ~PlayableCharacter();
private:


};

#endif	/* PLAYABLECHARACTER_H */

