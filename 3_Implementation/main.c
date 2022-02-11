#include "calculator.h"

void main()
{
    
    int l = 0;

    // Main execution loop
    while(1)
    {
        // Displaying the current results
        printf("\n    Old Decimal Result = %f", result);
        printf("\n    Old Integer Result = %d", intResult);

        // Switch Menu
        switch(menu())
        {
            case 1: addition();
                    k = 1;
                    break;

            case 2: subtraction();
                    k = 1;
                    break;

            case 3: multiplication();
                    k = 1;
                    break;

            case 4: division();
                    k = 1;
                    break;

            case 5: mod();
                    k = 1;
                    break;

            case 6: factorial();
                    k = 1;
                    break;

            case 7: sine();
                    k = 1;
                    break;

            case 8: cosine();
                    k = 1;
                    break;

            case 9: tangent();
                    k = 1;
                    break;

            case 10:logBasee();
                    k = 1;
                    break;

            case 11:logBase10();
                    k = 1;
                    break;

            case 12:eToPowerX();
                    k = 1;
                    break;

            case 13:squareRoot();
                    k = 1;
                    break;

            case 14:cubeRoot();
                    k = 1;
                    break;

            case 15:power();
                    k = 1;
                    break;

            case 16:sineInverse();
                    k = 1;
                    break;

            case 17:cosineInverse();
                    k = 1;
                    break;

            case 18:tangentInverse();
                    k = 1;
                    break;

            case 19:npr();
                    k = 1;
                    break;

            case 20:ncr();
                    k = 1;
                    break;

            case 21:clear();
                    break;

            case 22:l = 1;
                    break;

            default:
                    printf("\nInvalid Choice !");
        }
        // Waiting for a button to be pressed
        printf("\nPress any button to continue......");
        getch();

        // Clear screen command to clear screen after each menu iteration
        system("cls");

        // To break out of this menu loop
        if(l == 1)
            break;
    }
}