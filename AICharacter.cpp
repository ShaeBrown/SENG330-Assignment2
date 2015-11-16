/* 
 * File:   AICharacter.cpp
 * Author: shaebrown
 * 
 * Created on November 11, 2015, 3:35 PM
 */

#include"AICharacter.h"
#include<string>


AICharacter::AICharacter(std::string name) : CharacterPrototype(name, "AI") {
  
}

CharacterPrototype* AICharacter::clone() 
{
    return new AICharacter(*this);
}

AICharacter::AICharacter(const AICharacter& orig) : CharacterPrototype(orig) {
    /* Calls the base class copy */
}

AICharacter::~AICharacter() {
}

