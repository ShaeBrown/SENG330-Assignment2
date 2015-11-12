/* 
 * File:   main.cpp
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <list>
#include "CharacterPrototypeFactory.h"

using namespace std;

/*
 * 
 */
void printPlayerList(list<CharacterPrototype*> players) {
    cout << "\n";
    cout << "Current players in the game\n";
    cout << "---------------------------\n";
    std::list<CharacterPrototype*>::iterator iterator;
    CharacterPrototype* character;
    for (iterator=players.begin(); iterator != players.end(); ++iterator) {
        character = (CharacterPrototype*)*iterator;
        cout << character->getType() << ": " << character->getName() << "\n";
    }
}


int main(int argc, char** argv) {
    
    CharacterPrototypeFactory* factory = new CharacterPrototypeFactory();
    list<CharacterPrototype*> players;
    
    cout << "Welcome to player initialization\n";
    cout << "--------------------------------\n";
    cout << "\n";
    cout << "How many total players will be in this game?\n";
    
    int num_players;
    cin >> num_players;
    
    if (cin.fail()) {
        cerr << "Was expecting an integer";
        return EXIT_FAILURE;
    }
    
    string input;
    int i;
    for (i = 0; i < num_players; i++) {
        cout << "Creating a playable character\n";
        cout << "Please enter the player's name or DONE and the remaining "
                << num_players - i << " players will be made into AI players\n";
        cin >> input;
        if (!input.compare("DONE"))
            break;
        else {
            CharacterPrototype* playable = factory->getPlayable();
            playable->setName(input);
            players.push_back(playable);
        }
    }
    
    for (int j = i; j < num_players; j++) {
        cout << "Creating an AI character\n";
        cout << "Please enter the players name\n";
        cin >> input;
        CharacterPrototype* AI = factory->getAI();
        AI->setName(input);
        players.push_back(AI);
    }
    
    printPlayerList(players);
    
    return EXIT_SUCCESS;
}
