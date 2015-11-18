
#include "gtest/gtest.h"
#include "AICharacter.h"
#include "CharacterPrototypeFactory.h"
#include <string>

class TestSuite : public testing::Test {
protected:
};


TEST(AICharacter, Contructor)
{
    std::string name = "name";
    std::string type = "AI";
    AICharacter* character = new AICharacter(name);
    ASSERT_EQ(character->getName(),name);
    ASSERT_EQ(character->getType(),type);
}

TEST(CharacterPrototypeFactory, getPlayable)
{
    std::string defaultName = "defaultPlayable";
    std::string type = "Playable";
    CharacterPrototypeFactory* factory = new CharacterPrototypeFactory();
    CharacterPrototype* playable = factory->getPlayable();
    ASSERT_EQ(playable->getName(), defaultName);
    ASSERT_EQ(playable->getType(), type);
    
}

TEST(CharacterPrototypeFactory, getAI)
{
    std::string defaultName = "defaultAI";
    std::string type = "AI";
    CharacterPrototypeFactory* factory = new CharacterPrototypeFactory();
    CharacterPrototype* AI = factory->getAI();
    ASSERT_EQ(AI->getName(), defaultName);
    ASSERT_EQ(AI->getType(), type);
    
}

TEST(AICharacter, clone)
{
    std::string name = "cloneName";
    AICharacter* AI = new AICharacter(name);
    CharacterPrototype* clone = AI->clone();
    ASSERT_EQ(AI->getName(), clone->getName());
    ASSERT_EQ(AI->getType(), AI->getType());
}

TEST(PlayableCharacter, clone)
{
    std::string name = "cloneName";
    PlayableCharacter* playable = new PlayableCharacter(name);
    CharacterPrototype* clone = playable->clone();
    ASSERT_EQ(clone->getName(), playable->getName());
    ASSERT_EQ(clone->getType(), playable->getType());
}