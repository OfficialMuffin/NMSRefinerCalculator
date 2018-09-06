#include <stdio.h>
#include <stdlib.h>

//Defines Constants
#define LINE "______________________________________"
#define TITLE "WELCOME TO NMS REFINER CALCULATOR!"
#define BUILD_VERSION "0.1"
#define STEAM_VERSION "Unknown"
#define AUTHOR "by OfficialMuffin"

//Notices your OS, OwO What's This
#ifdef _WIN32
#define SYSTEM "Windows"
#endif // _WIN32

int main()
{
    //Intro
    printf("\n Your Operating System is: %s \n", SYSTEM);
    printf("\n \t %s \n \t %s \n", LINE, TITLE);
    printf("\n         Version: \t %s \n \t %d \n", BUILD_VERSION);
    printf("\n         NMS Steam Version: \t %s \n \t %s \n", STEAM_VERSION);
    printf("\n \t %s \n \t %s \n", AUTHOR, LINE);
    printf("\n\n\n");

    const char *elements[4];
    int i;

    elements[0] = "Carbon";
    elements[1] = "Ferrite Dust";
    elements[2] = "Copper";
    elements[3] = "Di-Hydrogen";

    printf("Here are the elements you are able to use\n");

    for (i = 0; i < 4; i++) {
        printf("%s\n", elements[i]);
    }

    char choice;
    int amount;
    printf("\nPlease choose from the elements above to place in the Small Refiner: ");
    scanf("%s\n", &choice);

    if (choice == "Carbon") {
        printf("How many do you want to place into the refiner?: ");
        scanf("%s", amount);
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



    /*
    printf("Element 1: %s\n", elements[0]);
    printf("Element 2: %s\n", elements[1]);
    printf("Element 3: %s\n", elements[2]);
    printf("Element 4: %s\n", elements[3]);
    */








    //Keep this here!
    return 0;
}
