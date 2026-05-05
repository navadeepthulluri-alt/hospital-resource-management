#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    char name[50];
    int beds;
    struct Node* next;
};

struct Node* head = NULL;

// Create (Add Node)
void addNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter ID: ");
    scanf("%d", &newNode->id);

    printf("Enter Name: ");
    scanf(" %[^\n]", newNode->name);

    printf("Enter Available Beds: ");
    scanf("%d", &newNode->beds);

    newNode->next = head;
    head = newNode;

    printf("Hospital Added Successfully!\n");
}

// Read (Display)
void displayNodes() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("No records found.\n");
        return;
    }

    while (temp != NULL) {
        printf("ID: %d | Name: %s | Beds: %d\n",
               temp->id, temp->name, temp->beds);
        temp = temp->next;
    }
}

// Search
struct Node* searchNode(int id) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->id == id)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Update
void updateNode() {
    int id;
    printf("Enter ID to update: ");
    scanf("%d", &id);

    struct Node* node = searchNode(id);

    if (node == NULL) {
        printf("Hospital not found.\n");
        return;
    }

    printf("Enter new Name: ");
    scanf(" %[^\n]", node->name);

    printf("Enter new Beds: ");
    scanf("%d", &node->beds);

    printf("Updated Successfully!\n");
}

// Delete
void deleteNode() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    struct Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Deleted Successfully!\n");
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Hospital not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Deleted Successfully!\n");
}

// Menu
void menu() {
    int choice;

    while (1) {
        printf("\n--- Hospital Management ---\n");
        printf("1. Add Hospital\n");
        printf("2. Delete Hospital\n");
        printf("3. Update Hospital\n");
        printf("4. Search Hospital\n");
        printf("5. Display Hospitals\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addNode(); break;
            case 2: deleteNode(); break;
            case 3: updateNode(); break;
            case 4: {
                int id;
                printf("Enter ID to search: ");
                scanf("%d", &id);
                struct Node* result = searchNode(id);
                if (result)
                    printf("Found: %s (Beds: %d)\n", result->name, result->beds);
                else
                    printf("Not found.\n");
                break;
            }
            case 5: displayNodes(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}

int main() {
    menu();
    return 0;
}