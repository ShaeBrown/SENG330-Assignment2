/* 
 * File:   AICharacter.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:35 PM
 */

#ifndef AICHARACTER_H
#define	AICHARACTER_H

#include "CharacterPrototype.h"

class AICharacter:public CharacterPrototype {
public:
    AICharacter();
    AICharacter(const AICharacter& orig);
    virtual CharacterPrototype* clone();
    virtual ~AICharacter();
private:

};

#endif	/* AICHARACTER_H */

