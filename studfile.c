#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10

// Structure to store student details
struct Student {
    int rollNo;
    char name[50];
    int marks[3]; // Marks for 3 subjects
};

// Function to calculate the grade based on marks
char getGrade(int marks) {
    if (marks >= 90) return 'S';
    else if (marks >= 80) return 'A';
    else if (marks >= 70) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 50) return 'D';
    else if (marks >= 40) return 'E';
    else return 'F';
}

int main() {
    struct Student students[MAX_STUDENTS];
    FILE *file;
    int count = 0;
    int totalMarks[3] = {0}; // Total marks for each subject

    // Open the file
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from file
    while (fscanf(file, "%d %s %d %d %d", &students[count].rollNo, students[count].name,
                  &students[count].marks[0], &students[count].marks[1], &students[count].marks[2]) != EOF) {
        totalMarks[0] += students[count].marks[0];
        totalMarks[1] += students[count].marks[1];
        totalMarks[2] += students[count].marks[2];
        count++;
    }
    fclose(file);

    // Calculate class average
    float avgMarks[3];
    for (int i = 0; i < 3; i++) {
        avgMarks[i] = (float)totalMarks[i] / count;
    }

    // Print Results
    for (int sub = 0; sub < 3; sub++) {
        printf("\nSubject %d\n", sub + 1);
        printf("Roll No\tName\tGrade\n");
        for (int i = 0; i < count; i++) {
            printf("%d\t%s\t%c\n", students[i].rollNo, students[i].name, getGrade(students[i].marks[sub]));
        }
        printf("Class Average for Subject %d: %.2f\n", sub + 1, avgMarks[sub]);
    }

    return 0;
}
