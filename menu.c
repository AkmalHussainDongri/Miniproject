#include <stdio.h>

int main()
{
    char op, starters, maincourse, desserts;

    printf("<------Welcome to A's Dhaba----->\n");
    printf("Select what you want-->\n");
    printf("1.Starter\n2.Main Course\n3.Desserts\n4.Exit\n");
    scanf("%c", &op);

    switch (op)
    {
    case '1':
        printf("You have chosen starters\n");
        printf("Select what you want from starters-->\n");
        printf("1. Chicken 65\n2. Dragon Chicken\n3. Paneer Pakoda\n4. Exit\n");
        scanf(" %c", &starters);

        switch (starters)
        {
        case '1':
            printf("You have chosen Chicken 65\n");
            break;

        case '2':
            printf("You have chosen Dragon Chicken\n");
            break;

        case '3':
            printf("You have chosen Paneer pakoda\n");
            break;

        case '4':
            printf("Exit from the starters\n");
        }
        break;

    case '2':
        printf("You have chosen Main Course\n");
        printf("Select what you want from Main Course-->\n");
        printf("1. Chicken Biryani\n2. Veg Biryani\n3. Palak Paneer \n4. Exit\n");
        scanf(" %c", &maincourse);

        switch (maincourse)
        {
        case '1':
            printf("You have chosen Chicken Chicken Biryani\n");
            break;

        case '2':
            printf("You have chosen Veg Biryani\n");
            break;

        case '3':
            printf("You have chosen Palak Paneer\n");
            break;

        case '4':
            printf("Exit from the Main Course\n");
        }
        break;

    case '3':
        printf("You have chosen Desserts\n");
        printf("Select what you want from Desserts-->\n");
        printf("1. Rasmalai\n2. Gajar Halwa\n3. Kulfi\n4.Exit\n");
        scanf(" %c", &desserts);

        switch (desserts)
        {
        case '1':
            printf("You have chosen Rasmalai\n");
            break;

        case '2':
            printf("You have chosen Gajar Halwa\n");
            break;

        case '3':
            printf("You have chosen Kulfi\n");
            break;

        case '4':
            printf("Exit from the Desserts\n");
        }
        break;

    default:
        printf("Sorry , This dish is not available\n");
        break;
    }
}
