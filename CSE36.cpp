

#include <stdio.h>

int main(){
    char ch;
    int Q, T = 0
    printf("My restaurant menu\n");
    printf("Enter the food item (B for Burger, S for Sandwich, P for Pizza, F for French Fries): ");
    scanf(" %c", &ch);  
    printf("Enter the quantity required of your food: ");
    scanf("%d", &Q);

    switch(ch)
    {
        case 'B':
            printf("You selected Burger\n");
            T = Q * 200;
            printf("The total bill = %d\n", T);
            break;
        case 'S':
            printf("You selected Sandwich\n");
            T = Q * 150;
            printf("The total bill = %d\n", T);
            break;
        case 'P':
            printf("You selected Pizza\n");
            T = Q * 500;
            printf("The total bill = %d\n", T);
            break;
        case 'F':
            printf("You selected French Fries\n");
            T = Q * 50;
            printf("The total bill = %d\n", T);
            break;
        default:
            printf("Invalid selection\n");
            break;
    }

    return 0;  
}
