/* 
 * File:   PlayableCharacter.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:33 PM
 */

#ifndef PLAYABLECHARACTER_H
#define	PLAYABLECHARACTER_H

#include"CharacterPrototype.h"

class PlayableCharacter:public CharacterPrototype {
public:
    PlayableCharacter();
    PlayableCharacter(const PlayableCharacter& orig);
    virtual CharacterPrototype* clone();
    virtual ~PlayableCharacter();
private:

};

#endif	/* PLAYABLECHARACTER_H */

