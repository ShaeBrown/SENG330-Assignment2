/* 
 * File:   AICharacter.cpp
 * Author: shaebrown
 * 
 * Created on November 11, 2015, 3:35 PM
 */

#include "AICharacter.h"


AICharacter::AICharacter() {
}

CharacterPrototype* AICharacter::clone() 
{
    return new AICharacter(*this);
}

AICharacter::AICharacter(const AICharacter& orig) {
}

AICharacter::~AICharacter() {
}

