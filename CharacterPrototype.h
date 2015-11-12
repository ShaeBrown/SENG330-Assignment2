/* 
 * File:   CharacterPrototype.h
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:32 PM
 */

#ifndef CHARACTERPROTOTYPE_H
#define	CHARACTERPROTOTYPE_H

class CharacterPrototype {
public:
    CharacterPrototype();
    CharacterPrototype(const CharacterPrototype& orig);
    virtual CharacterPrototype* clone() = 0;
    virtual ~CharacterPrototype();
private:

};

#endif	/* CHARACTERPROTOTYPE_H */

