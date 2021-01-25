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

// NOTE: play around with this code more!

int main()
{
    Race race = Race::Dinan;

    switch(race)
    {
        case Race::Dinan: 
        {
            printf("You work hard.");
        } break;
        case Race::Teklan:
        {
            printf("You are very strong!");
        } break;
        case Race::Ivyn:
        {
            printf("You are a great leader!");
        } break;
        case Race::Morian:
        {
            printf("My, how versitale you are!");
        } break;
        case Race::Camite:
        {
            printf("You're incredibly helpful");
        } break;
        case Race::Julian:
        {
            printf("Anything you want!");
        } break;
        case Race::Aidan:
        {
            printf("What an enigma.");
        } break;
            
        default:
        {
            printf("Error: Unknown race!");
        }
    }
}