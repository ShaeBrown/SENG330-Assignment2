/* 
 * File:   PlayableCharacter.cpp
 * Author: shaebrown
 * 
 * Created on November 11, 2015, 3:33 PM
 */

#include "PlayableCharacter.h"


PlayableCharacter::PlayableCharacter() {
}

CharacterPrototype* PlayableCharacter::clone() {
    return new PlayableCharacter(*this);
}

PlayableCharacter::PlayableCharacter(const PlayableCharacter& orig) {
}

PlayableCharacter::~PlayableCharacter() {
}

