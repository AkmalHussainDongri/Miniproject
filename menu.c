#include<stdio.h>

int main()
{
    char op;

    printf("<------Welcome to A's Dhaba----->\n");
    printf("Select what you want-->\n");
    printf("1.Starter\n2.Main Course\n3.Desserts\n4.Beverages\n5.Exit\n");

    scanf("%c",op);

    switch(op);
    {
        case '1':
        printf("You have choosed starter\n");
        printf("1. Chicken 65\n2. Dragon Chicken\n3. Paneer Pakoda\n4.Exit\n");
        break;

        case '2':
        printf("You have choosed Main Course\n");
        printf("1. Chicken Biryani\n2. Veg Rice\n3. Paneer Rice\n4.Exit\n");
        break;

        case '3':
        printf("You have choosed Desserts\n");
        printf("1. Chicken Biryani\n2. Veg Rice\n3. Paneer Rice\n4.Exit\n");
        break;

        case '4':
        printf("You have choosed Beverages\n");
        printf("1. Chicken Biryani\n2. Veg Rice\n3. Paneer Rice\n4.Exit\n");
        break;

        default:
        printf("Sorry , This dish is not available\n");


    }



















}