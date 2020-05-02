#include<stdio.h>

int main()
{
    int a;
    printf("Welcome to GD Chicken");
    printf("\nEnter any number from 1 to 5 for your food item and price: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("\n Food item: Chicken Popcorn \n Price: Rs.149");
        break;
        case 2: printf("\n Food item: Chicken Wings \n Price: Rs.199");
        break;
        case 3: printf("\n Food item: Chicken Fingers \n Price: Rs.179");
        break;
        case 4: printf("\n Food item: Chicken Lollipops \n Price: Rs.249");
        break;
        case 5: printf("\n Food item: Chizza \n Price: Rs.299");
        break;
        default: printf("\n ERROR! Please enter any number from 1 to 5.");
        break;
    }
    
    return 0;
}
