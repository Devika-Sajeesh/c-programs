#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Student structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to insert a new student
void insertStudent(const char *filename) {
    struct Student s;
    FILE *file = fopen(filename, "ab"); // Append binary mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name); // Read string with spaces
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);

    printf("Student record added successfully!\n");
}

// Function to display all students from the file
void displayStudents(const char *filename) {
    struct Student s;
    FILE *file = fopen(filename, "rb");

    if (file == NULL) {
        printf("Error opening file or file does not exist!\n");
        return;
    }

    printf("\nStudent Records:\n");
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
    }

    fclose(file);
}

// Function to copy a file
void copyFile(const char *source, const char *destination) {
    FILE *src = fopen(source, "rb");
    FILE *dest = fopen(destination, "wb");

    if (src == NULL || dest == NULL) {
        printf("Error opening file(s)!\n");
        return;
    }

    char buffer[1024];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytesRead, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully!\n");
}

int main() {
    int choice;
    char filename[] = "students.dat";
    char sourceFile[100], destFile[100];

    do {
        printf("\nMenu:\n");
        printf("1. Insert Student\n");
        printf("2. Display Students\n");
        printf("3. Copy File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertStudent(filename);
                break;
            case 2:
                displayStudents(filename);
                break;
            case 3:
                printf("Enter source filename: ");
                scanf("%s", sourceFile);
                printf("Enter destination filename: ");
                scanf("%s", destFile);
                copyFile(sourceFile, destFile);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
