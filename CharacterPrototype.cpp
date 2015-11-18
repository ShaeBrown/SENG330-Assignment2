/* 
 * File:   CharacterPrototype.cpp
 * Author: shaebrown
 * 
 * Created on November 11, 2015, 3:32 PM
 */

#include "CharacterPrototype.h"



CharacterPrototype::CharacterPrototype(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}

void CharacterPrototype::setName(std::string name) {
    this->name = name;
}

std::string CharacterPrototype::getName() {
    return this->name;
}

std::string CharacterPrototype::getType() {
    return this->type;
}

CharacterPrototype::~CharacterPrototype() {
}

