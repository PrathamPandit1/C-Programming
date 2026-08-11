#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[100];
    char author[100];
    float price;
    int quantity;
};

struct Book books[MAX];
int count = 0;

// Function Declarations
void loadBooks();
void saveBooks();
void addBook();
void displayBooks();
void searchBook();
void updateBook();
void deleteBook();
void issueBook();
void returnBook();
void sortBooks();
void countBooks();

int main()
{
    int choice;

    loadBooks();

    while (1)
    {
        printf("\n====================================");
        printf("\n     LIBRARY MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Update Book");
        printf("\n5. Delete Book");
        printf("\n6. Issue Book");
        printf("\n7. Return Book");
        printf("\n8. Sort Books");
        printf("\n9. Count Books");
        printf("\n10. Save Books");
        printf("\n11. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                updateBook();
                break;

            case 5:
                deleteBook();
                break;

            case 6:
                issueBook();
                break;

            case 7:
                returnBook();
                break;

            case 8:
                sortBooks();
                break;

            case 9:
                countBooks();
                break;

            case 10:
                saveBooks();
                printf("\nData Saved Successfully.\n");
                break;

            case 11:
                saveBooks();
                printf("\nThank You!\n");
                exit(0);

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}





void addBook()
{
    if(count >= MAX)
    {
        printf("\nLibrary is Full!\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d",&books[count].id);

    getchar();

    printf("Enter Book Title: ");
    fgets(books[count].title,100,stdin);
    books[count].title[strcspn(books[count].title,"\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(books[count].author,100,stdin);
    books[count].author[strcspn(books[count].author,"\n")] = '\0';

    printf("Enter Price: ");
    scanf("%f",&books[count].price);

    printf("Enter Quantity: ");
    scanf("%d",&books[count].quantity);

    count++;

    printf("\nBook Added Successfully.\n");
}

void displayBooks()
{
    int i;

    if(count==0)
    {
        printf("\nNo Books Available.\n");
        return;
    }

    printf("\n============================================================");
    printf("\nID\tTitle\t\tAuthor\t\tPrice\tQty");
    printf("\n============================================================");

    for(i=0;i<count;i++)
    {
        printf("\n%d\t%s\t\t%s\t\t%.2f\t%d",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].price,
               books[i].quantity);
    }

    printf("\n");
}

void searchBook()
{
    int id;
    int i;
    int found=0;

    printf("\nEnter Book ID: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
            printf("\nBook Found");
            printf("\n------------------------");
            printf("\nID : %d",books[i].id);
            printf("\nTitle : %s",books[i].title);
            printf("\nAuthor : %s",books[i].author);
            printf("\nPrice : %.2f",books[i].price);
            printf("\nQuantity : %d",books[i].quantity);

            found=1;
            break;
        }
    }

    if(found==0)
        printf("\nBook Not Found.\n");
}





void updateBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(books[i].id == id)
        {
            getchar();

            printf("Enter New Title: ");
            fgets(books[i].title,100,stdin);
            books[i].title[strcspn(books[i].title,"\n")] = '\0';

            printf("Enter New Author: ");
            fgets(books[i].author,100,stdin);
            books[i].author[strcspn(books[i].author,"\n")] = '\0';

            printf("Enter New Price: ");
            scanf("%f",&books[i].price);

            printf("Enter New Quantity: ");
            scanf("%d",&books[i].quantity);

            printf("\nBook Updated Successfully.\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found.\n");
}

void deleteBook()
{
    int id, i, j, found = 0;

    printf("\nEnter Book ID to Delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
            for(j=i;j<count-1;j++)
            {
                books[j]=books[j+1];
            }

            count--;
            found=1;

            printf("\nBook Deleted Successfully.\n");
            break;
        }
    }

    if(found==0)
        printf("\nBook Not Found.\n");
}

void issueBook()
{
    int id, i;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
            if(books[i].quantity>0)
            {
                books[i].quantity--;
                printf("\nBook Issued Successfully.\n");
            }
            else
            {
                printf("\nBook Out of Stock.\n");
            }
            return;
        }
    }

    printf("\nBook Not Found.\n");
}

void returnBook()
{
    int id, i;

    printf("\nEnter Book ID to Return: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
            books[i].quantity++;
            printf("\nBook Returned Successfully.\n");
            return;
        }
    }

    printf("\nBook Not Found.\n");
}





void sortBooks()
{
    int i, j;
    struct Book temp;

    if(count == 0)
    {
        printf("\nNo Books Available.\n");
        return;
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(strcmp(books[j].title, books[j + 1].title) > 0)
            {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    printf("\nBooks Sorted Successfully.\n");
}

void countBooks()
{
    printf("\nTotal Books in Library : %d\n", count);
}

void saveBooks()
{
    FILE *fp;

    fp = fopen("books.dat", "wb");

    if(fp == NULL)
    {
        printf("\nError Saving File!\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(books, sizeof(struct Book), count, fp);

    fclose(fp);
}

void loadBooks()
{
    FILE *fp;

    fp = fopen("books.dat", "rb");

    if(fp == NULL)
    {
        count = 0;
        return;
    }

    fread(&count, sizeof(int), 1, fp);
    fread(books, sizeof(struct Book), count, fp);

    fclose(fp);
}
