#include <stdio.h>
#include <string.h>

#define C_SIZE 50  // User-defined constant for string size

// Defining a union with five string members
union Address {
    char Name[C_SIZE];
    char House_Name[C_SIZE];
    char City_Name[C_SIZE];
    char State[C_SIZE];
    char Pin_code[C_SIZE];
};

int main() {
    union Address addr;

    // Reading values into the union
    printf("Enter Name: ");
    fgets(addr.Name, C_SIZE, stdin);
    addr.Name[strcspn(addr.Name, "\n")] = 0;  // Remove newline character

    printf("Enter House Name: ");
    fgets(addr.House_Name, C_SIZE, stdin);
    addr.House_Name[strcspn(addr.House_Name, "\n")] = 0;

    printf("Enter City Name: ");
    fgets(addr.City_Name, C_SIZE, stdin);
    addr.City_Name[strcspn(addr.City_Name, "\n")] = 0;

    printf("Enter State: ");
    fgets(addr.State, C_SIZE, stdin);
    addr.State[strcspn(addr.State, "\n")] = 0;

    printf("Enter Pin Code: ");
    fgets(addr.Pin_code, C_SIZE, stdin);
    addr.Pin_code[strcspn(addr.Pin_code, "\n")] = 0;

    // Displaying values (Note: Only the last assigned value will be retained)
    printf("\nStored Values in Union:\n");
    printf("Name: %s\n", addr.Name);
    printf("House Name: %s\n", addr.House_Name);
    printf("City Name: %s\n", addr.City_Name);
    printf("State: %s\n", addr.State);
    printf("Pin Code: %s\n", addr.Pin_code);

    return 0;
}
