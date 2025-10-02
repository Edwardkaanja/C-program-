/*
    Name:edward
    Reg No: CT101/G/26505/25
    Program: exam eligibility.c
    Description: student eligibility for final exams.
 */
 
 #include <stdio.h>
 
int main() 
{
    float attendance_percent;
    int average_marks;
    
    printf(" student's attendance percentage: ");
    scanf("%f", &attendance_percent);

    printf(" student's average marks: ");
    scanf("%d", &average_marks);

    if (attendance_percent >= 75.0 && average_marks >= 40) {
        printf("\nStudent is eligible for final exams.\n");
    } 
    else {
        
        printf("Not eligible.\n"); 
    }

    return 0;
}