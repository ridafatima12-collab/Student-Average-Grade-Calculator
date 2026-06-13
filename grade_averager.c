#include <stdio.h>

int main()
{
int numStudents;
float grade;
float sum = 0;
float average;
int i;

// Program description
printf("This program calculates the average grade of multiple students.\n");

// Input number of students
printf("Enter the number of students: ");
scanf("%d", &numStudents);

// Input validation
if (numStudents <= 0)
{
printf("Error: Number of students must be greater than 0.\n");
return 1;
}

printf("\n");

// Input grades and calculate sum
for (i = 1; i <= numStudents; i++)
{
printf("Enter grade for student %d: ", i);
scanf("%f", &grade);

sum += grade;
}

// Calculate average
average = sum / numStudents;

// Display results
printf("\nTotal Grades = %.2f\n", sum);
printf("Average Grade = %.2f\n", average);

return 0;
}