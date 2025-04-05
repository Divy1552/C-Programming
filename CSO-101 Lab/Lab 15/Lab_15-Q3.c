# include <stdio.h>

typedef struct Book {

    char Title[50];
    char Author[50];
    int YOP;
    float Price;

} Book;

void readInfo(Book *Books) {

    printf("Enter Book Title : ");
    scanf("%s",Books->Title);

    printf("Enter Author's Name : ");
    scanf("%s",Books->Author);

    printf("Enter Year of Publication : ");
    scanf("%d",&Books->YOP);

    printf("Enter Price : ");
    scanf("%f",&Books->Price);

}

void printDetails(Book Books) {

    printf("\n-- Book with Highest Price --\n");

    printf("Book Title : %s\n",Books.Title);
    printf("Author's Name : %s\n",Books.Author);
    printf("Year of Publication : %d\n",Books.YOP);
    printf("Price : %.2f\n",Books.Price);
    
}

int main() {

    Book Books[3];

    for (int i = 1;i <= 3;i++) {
        printf("for Book %d,\n",i);
        readInfo(&Books[i-1]);
    }

    int Highest_Price = Books[0].Price,Highest_idx = 0;

    for (int i = 1;i < 3;i++) {
        if (Books[i].Price > Highest_Price) {
            Highest_Price = Books[i].Price;
            Highest_idx = i;
        }
    }

    printDetails(Books[Highest_idx]);

    return 0;
}