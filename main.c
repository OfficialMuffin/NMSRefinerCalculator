#include <stdio.h>
#include <stdlib.h>

//Defines Constants
#define LINE "______________________________________"
#define TITLE "WELCOME TO NMS REFINER CALCULATOR!"
#define BUILD_VERSION "             0.3"
#define STEAM_VERSION "N3XT 1.57"
#define AUTHOR "by OfficialMuffin"
#define FLORA "Marrow Bulb, Cactus Flesh, Gamma Root, Solanium"

//Notices your OS, OwO What's This
#ifdef _WIN32
#define SYSTEM "Windows"
#endif // _WIN32

void introduction() {
    //Intro
    printf("\n Your Operating System is: %s \n", SYSTEM);
    printf("\n \t %s \n \t %s \n", LINE, TITLE);
    printf("\n         Version: \t %s \n \t", BUILD_VERSION);
    printf("\n         NMS Steam Version: \t %s \n \t", STEAM_VERSION);
    printf("\n \t %s \n \t %s \n", AUTHOR, LINE);
    printf("\n\n\n");

}

void elements() {
    const char *elements[6];
    int i;

    elements[0] = "a) Carbon";
    elements[1] = "b) Ferrite Dust";
    elements[2] = "c) Copper";
    elements[3] = "d) Oxygen";
    elements[4] = "e) Paraffinium";
    elements[5] = "f) Any Flora (Cactus Flesh, Gamma Root, Solanium etc..)";

    printf("Here are the elements you are able to use:\n");

    //Print all elements in the array
    for (i = 0; i < 6; i++) {
        printf("%s\n", elements[i]);
    }
}


int main()
{
    introduction();
    elements();

    char choice;
    int amount;
    printf("\nPlease choose from the elements above to place in the Small Refiner e.g 'a': ");
    scanf("%c", &choice);

    if (choice == 'a') {
        printf("How much Carbon do you want to place into the refiner?");
        printf("(You MUST enter an even number!): ");
        scanf("%d", &amount);
            if(amount & 0x1) {
                printf("You are unable to process any more Carbon");
            }
            else {
                printf("You will have %d Condensed Carbon\n", amount / 2);
            }
    }
    if (choice == 'b') {
        printf("How much Ferrite Dust do you want to place into the refiner?");
        printf("(You MUST enter an even number!): ");
        scanf("%d", &amount);
            if(amount & 0x1) {
                printf("You are unable to process any more Ferrite Dust");
            }
            else {
                printf("You will have %d Pure Ferrite\n", amount);
            }
    }
    if (choice == 'c') {
        printf("How much Copper do you want to place into the refiner?");
        printf("(You MUST enter an even number!): ");
        scanf("%d", &amount);
            if(amount & 0x1) {
                printf("You are unable to process any more Ferrite Dust");
            }
            else {
                printf("You will have %d Chromatic Metal\n", amount);
            }
    }
     if (choice == 'd') {
        printf("How much Oxygen do you want to place into the refiner?");
        printf("(You MUST enter an even number!): ");
        scanf("%d", &amount);
            if(amount & 0x1) {
                printf("You are unable to process any more Oxygen");
            }
            else {
                printf("You will have %d Carbon\n", amount);
            }
    }
    if (choice == 'e') {
        printf("How much Paraffinium do you want to place into the refiner?");
        printf("(You MUST enter an even number!): ");
        scanf("%d", &amount);
            if(amount & 0x1) {
                printf("You are unable to process any more Paraffinium");
            }
            else {
                printf("You will have %d Ferrite Dust\n", amount);
            }
    }
    if (choice == 'f') {
        printf("How much Flora do you want to place into the refiner?\n");
        printf("(Examples of Flora are %s): ", FLORA);
        scanf("%d", &amount);
            if(amount > 0 || amount <= 250) {
                printf("You will have %d Carbon\n", amount);
            }
            else if (amount < 0 || amount > 250){
                printf("You are unable to process any more Flora");

            }
    }


    //Keep this here!
    return 0;
}
