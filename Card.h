#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
using namespace std;

class Card
{
public:
    string title;
    string info;
    string option1;
    string option2;
    string result1;
    string result2;
    int choice;
    bool answer;
};
 #endif

 //ENCOUNTER CARDS
/***********************************************************************************************************/
Card goblinCard()
{
    Card goblin;
    goblin.title = "Encounter";
    goblin.info = "A goblin has taken a villager hostage!";
    goblin.option1 = "Attack the goblin and save the villager!";
    goblin.option2 = "Run away! He's super scary!";
    goblin.result1 = "You save the villager from the dumb goblin!";
    goblin.result2 = "You run away safely leaving the villager to probably be eaten.";
    goblin.answer = 0;
    return goblin;
}

Card thiefCard()
{
    Card thief;
    thief.title = "Encounter";
    thief.info = "A thief has stolen your wallet!";
    thief.option1 = "Chase the thief and reclaim your lost gold!";
    thief.option2 = "Let him go, he may need the gold more than yourself.";
    thief.result1 = "You beat up the poor veteran, teaching him that stealing is never okay. You yell at him to \"Get a job\"";
    thief.result2 = "You sleep on the street tonight, seeing as you have no gold for the inn.";
    thief.answer = 1;
    return thief;
}

Card wolfCard()
{
    Card wolf;
    wolf.title = "Encounter";
    wolf.info = "A hungry wolf blocks your path, blood seems to be dripping from his fangs.";
    wolf.option1 = "Draw your sword and hopefully scare the wolf.";
    wolf.option2 = "Pull some meat out from your bag, maybe he'll enjoy it.";
    wolf.result1 = "Your sword shines brightly in the moonlight, successfully scaring away the wolf.";
    wolf.result2 = "You pull the meat out a little too slow, and the wolf bites your hand, you yelp and bolt away.";
    wolf.answer = 0;
    return wolf;
}

Card merchantCard()
{
    Card merchant;
    merchant.title = "Encounter";
    merchant.info = "A travelling salesman approaches you, offering you magic dust.";
    merchant.option1 = "Tell him you think magic is for freaks.";
    merchant.option2 = "Accept the magic dust for 10 gold.";
    merchant.result1 = "He tries to tell you that the hip young kids use it, but you walk away shaking your head.";
    merchant.result2 = "You accept the magic dust, snort it, and have a night of hallucinations and \"fun,\" you wake up with a headache the next morning.";
    merchant.answer = 1;
    return merchant;
    
}

Card necroCard()
{
    Card necro;
    necro.title = "Encounter";
    necro.info = "As you're walking through the woods, you look off to the side and in a small clearing you see a Necromancer chanting by some pentagram painted on the ground.";
    necro.option1 = "Threaten to kill him for his blasphemy!";
    necro.option2 = "Join in the latin chant.";
    necro.result1 = "You approach the Necromancer, call him a kinky freak, and the stab him with your sword, leaving the world that much closer to purity.";
    necro.result2 = "You approach the Necromancer and join in his ritual, skeletons raise from the ground, you get scared easily and run away screaming like a small tiny girl.";
    necro.answer = 0;
    return necro;
}

Card dragonCard()
{
    Card dragon;
    dragon.title = "Encounter";
    dragon.info = "A dragon wearing a cape and rainboots offers you mythical powers.";
    dragon.option1 = "You grow courage and backhand the dragon.";
    dragon.option2 = "You bend to the dragons will out of fear and take the mythical powers.";
    dragon.result1 =  "Your hand hurts and is imprinted with scales, but turns out that you have super strength.";
    dragon.result2 = "You know are stuck with a cape and rainboots that you can never remove.";
    
    dragon.answer = 1;
    return dragon;
}

Card ITCard()
{
    Card IT;
    IT.title = "Encounter";
    IT.info = "Hiya, Georgie do you want a balloon.";
    IT.option1 = "Prefer not to say";
    IT.option2 = "My dad told me not to talk to strangers.";
    IT.result1 = "Pennywise got sad and bought you a burger, this makes you feel good.";
    IT.result2 = "Pennywise got sad and started attacking you. Pennywise decided to adopt you.";
    IT.answer = 0;
    return IT;
}

//EVENT CARDS
/***********************************************************************************************************/
Card treeCard()
{
    Card tree;
    tree.title = "Event";
    tree.info = "A large downed tree blocks your path. An opening under it allows you to crawl under it but there could be a monster down there. The branches are sharp and possibly poisonous.";
    tree.option1 = "Climb over the tree.";
    tree.option2 = "Crawl under the tree.";
    tree.result1 = "You climb over the downed tree and avoid the spiky branches.";
    tree.result2 = "As you squeeze under the tree you make it out but with substantial scratches.";
    tree.answer = 0;

    return tree;
}

Card foodCard()
{
    Card food;
    food.title = "Event";
    food.info = "As you pass through a small town a hooded man offers you some food embued with magic.";
    food.option1 = "Magic bad.";
    food.option2 = "I love taking food from strangers!";
    food.result1 = "You refuse the food and the angry villagers run you out of town for you rudenss.";
    food.result2 = "You eat the food and feel a sudden surge of power.";
    food.answer = 1;
    return food;
}

Card bedCard()
{
    Card bed;
    bed.title = "Event";
    bed.info = "You find a bed in the forest.";
    bed.option1 = "Probably not time for a nap.";
    bed.option2 = "Nap time!";
    bed.result1 = "You move along and avoid one awkward conversation.";
    bed.result2 = "You wake up to a group of imps biting your fingers.";
    bed.answer = 0;
    return bed;
}

Card acornCard()
{
    Card acorn;
    acorn.title = "Event";
    acorn.info = "A rather muscular squirrel offers you a large acorn and wants you to eat it.";
    acorn.option1 = "I'm nutty for fuzzy animals!";
    acorn.option2 = "I don't wanna be a buff squirrel.";
    acorn.result1 = "The squirrel walks away looking content.";
    acorn.result2 = "The buff squirrel bites your toe.";
    acorn.answer = 0;
    return acorn;
}

Card stormCard()
{
    Card storm;
    storm.title = "Event";
    storm.info = "Lightning crashes around you in a heavy downpour as you come across a cabin in the woods.";
    storm.option1 = "Tough out the storm.";
    storm.option2 = "Take shelter in the cabin.";
    storm.result1 = "You rest under a tree and get struck by lightning. You taste... Lightningy";
    storm.result2 = "A bearded man lets you inside and tells stories while the storm passes.";
    storm.answer = 1;
    return storm;
}

Card unluckyCard()
{
    Card unlucky;
    unlucky.title = "Event";
    unlucky.info = "As you walked down the street you tripped and ripped your pants.";
    unlucky.option1 = "You run to the nearest clothing store.";
    unlucky.option2 = "Embrace the unfortunate event";
    unlucky.result1 = "Seems like your wallet fell out of your pockets when you tripped.";
    unlucky.result2 = "Your confidence proves how manly you really are and no one is brave enough to call you out";
    unlucky.answer = 1;
    return unlucky;
}

Card fishyCard()
{
    Card fishy;
    fishy.title = "Event";
    fishy.info = "The lonely fish asks you to be his friend";
    fishy.option1 = "You say my mom told me not to talk to stranger";
    fishy.option2 = "You say sure";
    fishy.result1 = "You are saved from fish attack.";
    fishy.result2 = "The fish happened to be a robber fish and he stole all your money.";
    fishy.answer = 0;
    return fishy;
}

Card posterCard()
{
    Card poster;
    poster.title = "Event";
    poster.info = "You humanoid racoon hands you a flyer advertising the newest thing, bread.";
    poster.option1 = "You think the racoon would make a better meal and attack.";
    poster.option2 = "You tell the racoon that you believe plants are alive and he's evil.";
    poster.result1 = "The racoon blocks your blows with precision and gags you with a loaf of bread before yelling at you and leaving you an embarrased adventurer in the woods.";
    poster.result2 = "The racoon calls you a weirdo and leaves.";
    poster.answer = 1;
    return poster;
}

Card bearCard()
{
    Card bear;
    bear.title = "Event";
    bear.info = "A bear jumps out from behind a tree and begins to chase you.";
    bear.option1 = "Climb up a tree and pretend to be a branch.";
    bear.option2 = "Run into a cave and pretend to be a rock.";
    bear.result1 = "The bear follows you up the tree but loses sight of you when you\"become a tree.\"";
    bear.result2 = "The bear runs into the cave and loses sight of you, but this is a bear with a rock diet so it still manages to bite you.";
    bear.answer = 0;
    return bear;
}

Card tacoBellCard()
{
    Card tb;
    tb.title = "Event";
    tb.info = "The Taco Bell Wizard appears in a cloud of smoke and offers you both Subway and Taco Bell";
    tb.option1 = "Take the Taco Bell.";
    tb.option2 = "Take the Subway.";
    tb.result1 = "The wizard punches you in the femur and says, \"Only the scum of the earth dare to eat my bell, BEGONE THOT!\"";
    tb.result2 = "The wizard says, \"Good, I really didn't want that crap.\"";
    tb.answer = 1;
    return tb;
}

Card angelFishCard()
{
    Card fish;
    fish.title = "Event";
    fish.info = "A fish with a beautiful face and wings decends from the skies in a floating fish bowl.";
    fish.option1 = "Break the fish bowl.";
    fish.option2 = "Kiss the god-like creature";
    fish.result1 = "The bowl shatters and the beautiful fish morphs into a demon with razor sharp teeth that flops on the ground helpless. You were lucky this time.";
    fish.result2 = "You pucker up and close your eyes before being greeted with razor sharp teeth from the deceptively good looking creature. That's what you get you freak.";
    fish.answer = 0;
    return fish;
}

Card pineConeCard()
{
    Card pine;
    pine.title = "Event";
    pine.info = "An army of adorable chibi pine cones march up to you and place huge gold bars on the forest floor.";
    pine.option1 = "Snatch the gold and run, they're pine cones they probably can't catch you.";
    pine.option2 = "Offer the pine cones some of your riches.";
    pine.result1 = "The gold is impossibly heavy and you can't lift it. The pine cones screech like banshees and try to rip your legs off.";
    pine.result2 = "The pine cones shake happily and say one day they'll take you to see the pine cone princess.";
    pine.answer = 1;
    return pine;
}

Card princessCard()
{
    Card prin;
    prin.title = "Event";
    prin.info = "With your previously aquired pine cone allies you are taken to meet the pine cone princess.";
    prin.option1 = "Invite her to a romantic dinner for two.";
    prin.option2 = "Offer your appologies because you believe man should not be with pine cone.";
    prin.result1 = "You and the princess eat lamb chops roasted over pine logs and giggle at the prospect of pine cone marriage.";
    prin.result2 = "The pine cone princess cries when you reject her and king pine cone stretches out a very long arm to slap your face.";
    prin.answer = 0;
    return prin;
}

