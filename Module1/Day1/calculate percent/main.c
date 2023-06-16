#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roll;
    char name[50];
    float phy,math,chem;
    float total, perc;

    printf("Enter Roll No: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Marks in Physics: ");
    scanf("%f", &phy);
    printf("Enter Marks in Math: ");
    scanf("%f", &math);
    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chem);
    total = phy+math+chem;
    perc = (total / 300) * 100;
    printf("\n Student Summary\n");
    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", phy);
    printf("Math Marks: %.2f\n", math);
    printf("Chemistry Marks: %.2f\n", chem);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", perc);
}
