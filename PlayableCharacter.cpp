/* 
 * File:   PlayableCharacter.cpp
 * Author: shaebrown
 * 
 * Created on November 11, 2015, 3:33 PM
 */

#include "PlayableCharacter.h"
#include <iostream>



PlayableCharacter::PlayableCharacter(std::string name) : CharacterPrototype(name, "Playable") {
    
    
}

CharacterPrototype* PlayableCharacter::clone() {
  
    return new PlayableCharacter(*this);
}

PlayableCharacter::PlayableCharacter(const PlayableCharacter& orig) : CharacterPrototype(orig) {
    /* Calls the base class copy */
}

PlayableCharacter::~PlayableCharacter() {
}

