#include <stdio.h>
#include <stdlib.h>

//Defines Constants
#define LINE "______________________________________"
#define TITLE "WELCOME TO NMS REFINER CALCULATOR!"
#define BUILD_VERSION "0.2"
#define STEAM_VERSION "N3XT 1.57"
#define AUTHOR "by OfficialMuffin"

//Notices your OS, OwO What's This
#ifdef _WIN32
#define SYSTEM "Windows"
#endif // _WIN32

void introduction() {
    //Intro
    printf("\n Your Operating System is: %s \n", SYSTEM);
    printf("\n \t %s \n \t %s \n", LINE, TITLE);
    printf("\n         Version: \t %s \n \t %d", BUILD_VERSION);
    printf("\n         NMS Steam Version: \t %s \n \t %s", STEAM_VERSION);
    printf("\n \t %s \n \t %s \n", AUTHOR, LINE);
    printf("\n\n\n");

}

void elements() {
    const char *elements[4];
    int i;

    elements[0] = "a) Carbon";
    elements[1] = "b) Ferrite Dust";
    elements[2] = "c) Copper";
    elements[3] = "d) Di-Hydrogen";

    printf("Here are the elements you are able to use\n");

    //Print all elements in the array
    for (i = 0; i < 4; i++) {
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
    scanf("%s\n", &choice);

    if (&choice == 'a') {
        printf("How many do you want to place into the refiner?: ");
        scanf("%s", &amount);
            switch(amount) {
                case 2 :
                    printf("You will have 1 Condensed Carbon");
                    break;
                case 4 :
                    printf("You will have 2 Condensed Carbon");
                    break;
                default :
                    printf("You are unable to process any more Carbon");

            }
    }
    if (choice == 'b') {
        printf("How many do you want to place into the refiner?: ");
        scanf("%s", &amount);
            switch(amount) {
                case 3 :
                    printf("You will have 2 Pure Ferrite");
                    break;
                case 6 :
                    printf("You will have 3 Pure Ferrite");
                    break;
                default :
                    printf("You are unable to process any more Pure Ferrite");

            }

    }

    //Keep this here!
    return 0;
}
