#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("paneer ki sabji\n");
            break; 
        case 2:
            printf("naan roti\n");
            break;
        case 3:
            printf("palak paneer\n");
            break;
        default: 
            printf("Invalid choice!\n");
    }

    return 0;
}