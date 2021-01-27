#include <cstdio>

enum class Race 
{
    Dinan,
    Teklan,
    Ivyn,
    Morian, 
    Camite,
    Julian,
    Aidan
};

enum class Num
{
    One = 1,
    Two = 2,
    Four = 4
};

int main()
{
    Race race = Race::Dinan;

    switch(race)
    {
        case Race::Dinan: 
        {
            printf("You work hard.\n");
        } break;
        case Race::Teklan:
        {
            printf("You are very strong!\n");
        } break;
        case Race::Ivyn:
        {
            printf("You are a great leader!\n");
        } break;
        case Race::Morian:
        {
            printf("My, how versitale you are!\n");
        } break;
        case Race::Camite:
        {
            printf("You're incredibly helpful.\n");
        } break;
        case Race::Julian:
        {
            printf("Anything you want!\n");
        } break;
        case Race::Aidan:
        {
            printf("What an enigma.\n");
        } break;
            
        default:
        {
            printf("Error: Unknown race!\n");
        }
    }

    Num num = Num::Two;

    switch(num)
    {
        case Num::One:
        {
            printf("I'm number one!.\n");
        } break;

        case Num::Two:
        {
            printf("Two.\n");
        } break;

        case Num::Four:
        {
            printf("Four is like, two time two.\n");
        } break;

        default:
        {
            printf("I don't know this number. Nope.\n");
        }

    }
}