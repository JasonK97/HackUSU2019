#include <iostream>
#include <string>
#include <ctime>
#include "Card.h"
#include "Character.h"


//DISPLAY
/***********************************************************************************************************/
int getIndex()
{
    srand(time(NULL));
    int x = rand() % 20;
    return x;
}

int displayCard(Card card)
{
    std::cout << "\n*********************************************************\n";
    std::cout << card.title << std::endl
              << std::endl;
    std::cout << card.info << std::endl
              << std::endl;
    std::cout << "What would you like to do?\n";
    std::cout << "1." << card.option1 << " or 2." << card.option2 << std::endl;
    std::cout << ">> ";
    std::cin >> card.choice;
    
    if (card.choice == 1)
        std::cout << card.result1 << std::endl << std::endl;

    else if (card.choice == 2)
        std::cout << card.result2 << std::endl << std::endl;
    return card.choice;
}

void displayInstructions()
{
    std::cout << "Welcome to Taco Bell Wizard RPG Card Adventure Game Simulator." << std::endl;
    std::cout << "In this game you will be presented with multiple cards. Each has two choices." << std::endl;
    std::cout << "One choice will increase your Progress bar, the other will decrease your health bar." << std::endl;
    std::cout << "The goal is to get to your progress to 100 before your hp reaches 0." << std::endl;
    std::cout << "Use the 1 and 2 keys to select your answer." << std::endl;
    std::cout << "Have fun and try not to die!" << std::endl << std::endl;

}

int main()
{
    std::cout << std::endl << std::endl;
    displayInstructions();
    Character character;
    std::cout << "What is your name?\n";
    std::cin >> character.name;
    std::cout << "\nWelcome to the game " << character.name << ".";
    // std::cout << "What is your quest?\n";
    // std::getline (std::cin, character.quest);
    // std::cout << "What is your favorite color?\n";
    // std::getline (std::cin, character.favoriteColor);

    Card goblin = goblinCard();
    Card thief = thiefCard();
    Card wolf = wolfCard();
    Card merchant = merchantCard();
    Card necro = necroCard();
    Card dragon = dragonCard();
    Card tree = treeCard();
    Card food = foodCard();
    Card bed = bedCard();
    Card acorn = acornCard();
    Card storm = stormCard();
    Card unlucky = unluckyCard();
    Card fishy = fishyCard();
    Card poster = posterCard();
    Card bear = bearCard();
    Card tb = tacoBellCard();
    Card fish = angelFishCard();
    Card pine = pineConeCard();
    Card prin = princessCard();
    Card IT = ITCard();

    Card deck[20] = {goblin, thief, wolf, merchant, necro, dragon, tree, food, bed, acorn, storm, unlucky, fishy, poster, bear, tb, fish, pine, prin, IT};

    // int hp = 100;
    // int progress = 0;

    do
    {
        
        int x = getIndex();
        int y = displayCard(deck[x]);

        if (y - deck[x].answer == 1)
            {
                if(character.progress == 90)
                {
                    break;}
                character.progress = changeProgress(character);

            }
        else if (y - deck[x].answer == 2 || y - deck[x].answer == 0)
        {
            if(character.hp == 10)
            {    break;}
            character.hp = changeHP(character);
        }
        
        std::cout << "HP: " << character.hp << " ";
        std::cout << "Progress: " << character.progress << std::endl << std::endl;
    }
    while (character.hp > 0 || character.progress < 90);

if(character.progress >= 90)
{
    std::cout << "Progress: 100 " << std::endl << std::endl;
    std::cout << "Good job " << character.name << "! You WIN!!" << std::endl;
}
    else
    {
        std::cout << "HP: 0;" << std::endl << std::endl;
        std::cout << "Try again " << character.name << ". You Lose!!" << std::endl;
    }
        
    return 0;
}

