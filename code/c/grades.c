/* Reads in the grades of up to 10 students in a class and returns 
 * their average.
 * January 20, 2025
 */
#include <stdio.h>
float average(float *a, int size);

int main(void)
{
    int students = 0;

    while((students < 1) || (students > 10)){
        printf("Please enter the number of students in \
the class (up to 10): ");
        scanf("%d", &students);
    }

    float grades[students];

    // Populate grades table from user input
    for (int i = 0; i < students; i++) {
        printf("Please enter the grade of student %d: ", i + 1);
        scanf("%f", &grades[i]);
        printf("%f\n", grades[i]);
    }

    printf("The average grade is %f\n", average(grades, students));
}

float average(float *a, int size){
    float sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += *(a + i);
    }

    return sum / size;
}


