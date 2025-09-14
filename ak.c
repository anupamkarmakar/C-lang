#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Diary {
    char date[20];
    char time[10];
    char title[50];
    char content[500];
};

void addEntry() {
    FILE *fp = fopen("diary.txt", "a");
    struct Diary d;

    printf("\nEnter Date (DD-MM-YYYY): ");
    scanf(" %[^\n]", d.date);
    printf("Enter Time (HH:MM): ");
    scanf(" %[^\n]", d.time);
    printf("Enter Title: ");
    scanf(" %[^\n]", d.title);
    printf("Enter Content: ");
    scanf(" %[^\n]", d.content);

    fwrite(&d, sizeof(d), 1, fp);
    fclose(fp);
    printf("Entry added successfully!\n");
}

void viewEntries() {
    FILE *fp = fopen("diary.txt", "r");
    struct Diary d;

    if (fp == NULL) {
        printf("No diary entries found.\n");
        return;
    }

    printf("\n--- Diary Entries ---\n");
    while (fread(&d, sizeof(d), 1, fp)) {
        printf("\nDate: %s\nTime: %s\nTitle: %s\nContent: %s\n", d.date, d.time, d.title, d.content);
    }
    fclose(fp);
}

void searchEntry() {
    FILE *fp = fopen("diary.txt", "r");
    struct Diary d;
    char searchDate[20];
    int found = 0;

    if (fp == NULL) {
        printf("No diary entries found.\n");
        return;
    }

    printf("Enter Date to Search (DD-MM-YYYY): ");
    scanf(" %[^\n]", searchDate);

    while (fread(&d, sizeof(d), 1, fp)) {
        if (strcmp(d.date, searchDate) == 0) {
            printf("\nFound Entry:\nDate: %s\nTime: %s\nTitle: %s\nContent: %s\n", d.date, d.time, d.title, d.content);
            found = 1;
        }
    }

    if (!found)
        printf("No entry found on %s.\n", searchDate);

    fclose(fp);
}

void deleteEntry() {
    FILE *fp = fopen("diary.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Diary d;
    char deleteDate[20];
    int deleted = 0;

    if (fp == NULL) {
        printf("No diary entries found.\n");
        return;
    }

    printf("Enter Date of Entry to Delete (DD-MM-YYYY): ");
    scanf(" %[^\n]", deleteDate);

    while (fread(&d, sizeof(d), 1, fp)) {
        if (strcmp(d.date, deleteDate) != 0) {
            fwrite(&d, sizeof(d), 1, temp);
        } else {
            deleted = 1;
        }
    }

    fclose(fp);
    fclose(temp);
    remove("diary.txt");
    rename("temp.txt", "diary.txt");

    if (deleted)
        printf("Entry deleted successfully.\n");
    else
        printf("No entry found on that date.\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Personal Diary Management ---\n");
        printf("1. Add Entry\n");
        printf("2. View All Entries\n");
        printf("3. Search Entry by Date\n");
        printf("4. Delete Entry by Date\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEntry(); break;
            case 2: viewEntries(); break;
            case 3: searchEntry(); break;
            case 4: deleteEntry(); break;
            case 5: printf("Exiting Diary System.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
