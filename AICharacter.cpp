

#include"AICharacter.h"

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

