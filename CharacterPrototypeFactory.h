/* 
 * File:   CharacterPrototypeFactory.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:35 PM
 */

#ifndef CHARACTERPROTOTYPEFACTORY_H
#define	CHARACTERPROTOTYPEFACTORY_H

#include"CharacterPrototype.h"
#include"AICharacter.h"
#include"PlayableCharacter.h"

class CharacterPrototypeFactory {
public:
    CharacterPrototypeFactory();
    CharacterPrototypeFactory(const CharacterPrototypeFactory& orig);
    virtual CharacterPrototype* getPlayable();
    virtual CharacterPrototype* getAI();
    virtual ~CharacterPrototypeFactory();
private:
    static CharacterPrototype* AI;
    static CharacterPrototype* Playable;

};

#endif	/* CHARACTERPROTOTYPEFACTORY_H */

