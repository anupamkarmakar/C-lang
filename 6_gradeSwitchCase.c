#include <stdio.h>

int main() {
    int marks;
    
    // Taking input
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    
    // Convert marks to grade category
    int grade = marks / 10; 

    switch (grade) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
        case 4:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
            break;
    }

    return 0;
}
