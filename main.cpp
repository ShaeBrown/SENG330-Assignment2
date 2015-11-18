/* 
 * File:   main.cpp
 * Author: shaebrown
 *
 * Created on November 11, 2015, 3:18 PM
 */
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
#include <iostream>


#include"CharacterProtobuf.pb.h"
#include"CharacterPrototypeFactory.h"
#include"CharacterPrototype.h"
#include"AICharacter.h"
#include"PlayableCharacter.h"


using namespace std;



void printPlayers(const CharacterList& players)
{

    for (int i = 0; i < players.character_size() ; i++) {
        
        const Character& character = players.character(i);
        string type = character.type() == Character_Type::Character_Type_AI ? "AI" : "Playable";
        cout << type << ": " << character.name() << "\n";
    }
    cout << "\n";
}

void serialize(CharacterList& list, CharacterPrototype* character) {
    Character* protoCharacter = list.add_character();
    protoCharacter->set_name(character->getName());
    if (character->getType().compare("AI") == 0) 
        protoCharacter->set_type(Character_Type::Character_Type_AI);
    else
        protoCharacter->set_type(Character_Type::Character_Type_Playable);
}


int main(int argc, char** argv) {
    
    CharacterPrototypeFactory* factory = new CharacterPrototypeFactory();
    CharacterList players;
    
    GOOGLE_PROTOBUF_VERIFY_VERSION;
  
    string file = "characters.txt";
    // Read the existing characters
    fstream input(file);
    if (!input) 
    {
        cout << "Creating a new file to save characters" << endl;
        cout << "\n";
    } 
    else if (!players.ParseFromIstream(&input)) 
    {
        cerr << "Failed to parse saved characters." << endl;
        return EXIT_FAILURE;
    }
    
     cout << "\n";
    cout << "Players already created------------------\n";
    cout << "-----------------------------------------\n";
    printPlayers(players);
    
    cout << "Welcome to player initialization\n";
    cout << "---------------------------------------------------\n";
    cout << "\n";
    cout << "How many total players will be  added in this game?\n";
    
    int num_players;
    cin >> num_players;
    
    if (cin.fail()) {
        cerr << "Was expecting an integer";
        return EXIT_FAILURE;
    }
    
    string name;
    int i;
    for (i = 0; i < num_players; i++) {
        cout << "\n";
        cout << "Creating a playable character\n";
        cout << "Please enter the player's name or DONE and the remaining "
                << num_players - i << " players will be made into AI players\n";
        cout << "\n";
        cin >> name;
        if (!name.compare("DONE"))
            break;
        else {
            CharacterPrototype* playable = factory->getPlayable();
            playable->setName(name);
            serialize(players, playable);
        }
    }
    
    for (int j = i; j < num_players; j++) {
        cout << "\n";
        cout << "Creating an AI character\n";
        cout << "Please enter the players name\n";
        cout << "\n";
        cin >> name;
        CharacterPrototype* AI = factory->getAI();
        AI->setName(name);
        serialize(players, AI);
    }
    
    
    fstream output(file);
    if (!players.SerializeToOstream(&output)) 
    {
        cerr << "Failed to save new characters" << endl;
        return EXIT_FAILURE;
    }
    
    cout << "\n";
    cout << "All players, " << num_players << " added---------------------\n";
    cout << "-----------------------------------------\n";
    printPlayers(players);
    
    
    google::protobuf::ShutdownProtobufLibrary();
    
    return EXIT_SUCCESS;
}
