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
#include"CharacterProtobuf.pb.h"

/**
 * A Prototype Factory for Character Prototypes
 */
class CharacterPrototypeFactory {
public:
    /**
     * Creates a Character Prototype Factory
     */
    CharacterPrototypeFactory();
    CharacterPrototypeFactory(const CharacterPrototypeFactory& orig);
    /**
     * Creates a clone of a default playable character
     * @return a default playable character clone
     */
    virtual CharacterPrototype* getPlayable();
    /**
     * Creates a clone of a default AI character
     * @return a default AI character clone
     */
    virtual CharacterPrototype* getAI();
    /**
     * Destroys the Character Prototype
     */
    virtual ~CharacterPrototypeFactory();
private:
    static CharacterPrototype* AI;
    static CharacterPrototype* Playable;
    static CharacterList players;
};

#endif	/* CHARACTERPROTOTYPEFACTORY_H */

