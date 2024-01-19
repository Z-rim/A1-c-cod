
#include <stdio.h>

int main()
{
    int options;
    double value;
    printf("Hellow and wellcome to the conversion center");
    while (1)
    {
        printf("Plaz choos one of the options below:\n");
        //For Kilograms to Pounds typ in
        printf("1\n");
        //For Grams to Ounces typ in
        printf("2\n");
        //For Kilometers to Miles typ in
        printf("3\n");
        //For Millimeters to Inches typ in 
        printf("4\n");
        //To Quit typ in
        printf("5\n");
        printf("Enter your choice:");
        scanf("%d", &options);
        // Exit the loop
        if (options == 5)
        {
            printf("Thank you for viting use see you agein");
            break;
        }

        printf("Enter the value to convert: ");
        scanf("%lf", &value);
        // Kilograms to Pounds conversion
        if (options == 1)
        {
            double pounds = value * 2.20462;
            printf("%.2f kg is equal to %.2f pounds\n", value, pounds);
            // Grams to Ounces conversion
        }
        else if (options == 2)
        {
            double ounces = value / 28.3495;
            printf("%.2f grams is equal to %.2f ounces\n", value, ounces);
            // Kilometers to Miles conversion
        }
        else if (options == 3)
        {
            double miles = value * 0.621371;
            printf("%.2f km is equal to %.2f miles\n", value, miles);
            // Millimeters to Inches conversion
        }
        else if (options == 4)
        {
            double inches = value / 25.4;
            printf("%.2f mm is equal to %.2f inches\n", value, inches);
        }
    }

    return 0;
}
