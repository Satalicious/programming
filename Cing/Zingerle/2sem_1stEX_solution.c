
#include <stdio.h>
#include <string.h>

    int GetDayNr (int Mont, int Day) {
        int Months[] = {31,28,31,30,31,30,31,30,31,30,31};
        int total = 0;

        Mont = Mont -1;
        for (int i = 0; i < Mont; i++)
            total+=Months[i];
        return total + Day;
    }

    void insert (char x, int pos) {
        char Text[100] = "Das Haus";
        for (int i = 0; i < strlen(Text); i++) {
            if (i == pos) {
                for (int j = strlen(Text); j >= strlen(Text) -i -1; j--)
                    Text[j] = Text[j-1]; 
            }
        }
        Text[pos-1] = x;
        for (int i = 0; i < strlen(Text); i++)
            printf("%c", Text[i]);
    }

int main() {
    
    int zahl1 = 0, zahl2 = 0,abs = 0;

    printf("Der 14. Maerz ist der %d. Tag im Jahr.\n",GetDayNr(3,14));
    do
    {
        printf("Geben sie die erste Zahl ein: ");
        scanf("%d",&zahl1);
        printf("Geben Sie die zweite Zahl ein: ");
        scanf("%d",&zahl2);
        if (zahl1 < 0)
            zahl1 *= -1;
        if (zahl2 < 0)
            zahl2 *= -1; 
        if (zahl1 > abs)
            abs = zahl1;
        if (zahl2 > abs)
            abs = zahl2;
    } while (zahl1 != zahl2);
    printf("%d\n",abs);
    
    insert('!',4);
    return 0;
}