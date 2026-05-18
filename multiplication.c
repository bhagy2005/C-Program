/*3.Write a program to calculate the area of a rectangle. Prompt the user to input the length and width
of the rectangle, then use the multiplication operator (*) to find the area. Display the result.*/
#include<stdio.h>
void main()
{
    int length;
    printf("Enter a length value: ");
    scanf("%d",&length);
    int width;
    printf("Enter a width value: ");
    scanf("%d",&width);
    int area_rectangle = length * width;
    printf("The area of a rectangle is: %d",area_rectangle);
}

/*output: Enter a length value: 9
          Enter a width value: 3
          The area of a rectangle is: 27 */
