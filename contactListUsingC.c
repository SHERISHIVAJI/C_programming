#include<stdio.h>
#include<string.h>

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 11

struct Contact {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    do {
        printf("\n========== Simple Contact List ==========\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Display All Contacts\n");
        printf("5. Exit\n");
        printf("\nEnter your choice: ");
        scanf(" %d", &choice);
        getchar();

        switch(choice) {
            case 1: {
                if(count >= MAX_CONTACTS) {
                    printf("Contact list is full!\n");
                    break;
                }
                printf("Enter name: ");
                fgets(contacts[count].name, NAME_LEN, stdin);
                contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';

                printf("Enter phone number: ");
                fgets(contacts[count].phone, PHONE_LEN, stdin);
                contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';

                count++;
                printf("Contact added successfully!\n");
                break;
            }

            case 2: {
                char searchName[NAME_LEN];
                int found = 0;

                printf("Enter name to search: ");
                fgets(searchName, NAME_LEN, stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                for(int i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        printf("Contact found!\n");
                        printf("Name: %s\nPhone: %s\n", contacts[i].name, contacts[i].phone);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;
            }

            case 3: {
                char deleteName[NAME_LEN];
                int found = 0;

                printf("Enter name to delete: ");
                fgets(deleteName, NAME_LEN, stdin);
                deleteName[strcspn(deleteName, "\n")] = '\0';

                for(int i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, deleteName) == 0) {
                        for(int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j+1];
                        }

                        count--;
                        printf("Contact deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;
            }

            case 4: {
                if (count == 0) {
                    printf("No contacts to display.\n");
                } else {
                    printf("\n----- Contact List -----\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. Name: %s | Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
                    }
                }
                break;
            }

            case 5: 
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}