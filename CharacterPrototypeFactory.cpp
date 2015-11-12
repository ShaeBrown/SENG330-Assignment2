/* 
 * File:   CharacterPrototypeFactory.cpp
 * Author: shaebrown
 * 
 * Created on November 11, 2015, 3:35 PM
 */

#include"CharacterPrototypeFactory.h"


CharacterPrototype* CharacterPrototypeFactory::AI;
CharacterPrototype* CharacterPrototypeFactory::Playable;

CharacterPrototypeFactory::CharacterPrototypeFactory() {
    this->AI = new AICharacter("defaultAI");
    this->Playable = new PlayableCharacter("defaultPlayable");
}

CharacterPrototype* CharacterPrototypeFactory::getAI() {
    return AI->clone();
}

CharacterPrototype* CharacterPrototypeFactory::getPlayable() {
    return Playable->clone();
}

CharacterPrototypeFactory::CharacterPrototypeFactory(const CharacterPrototypeFactory& orig) {
}

CharacterPrototypeFactory::~CharacterPrototypeFactory() {
}

