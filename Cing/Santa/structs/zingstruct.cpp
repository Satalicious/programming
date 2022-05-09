
#include <stdio.h>
#include <string.h>

#define LEN 16


struct SPers {   // Strukdeklaration
    char VName[LEN];
    char NName[LEN];
    int KNr;
};

int main() {
    SPers P1,P2,P3;
    strcpy(P1.VName, "Peter");
    strcpy(P1.NName, "Huber");
    strcpy(P2.VName, "Herbert");
    strcpy(P2.NName, "Seidl");
    P1.KNr = 120, P2.KNr =254;
    printf("Guten Tag Herr %s %s, ihre Katalognummer ist %d.\n",P1.NName,P1.VName,P1.KNr);
    printf("Guten Tag Herr %s %s, ihre Katalognummer ist %d.\n",P2.NName,P2.VName,P2.KNr);

    printf("Geben Sie ihre Daten ein:\n");
    printf("Name: ");
    scanf("%s",&P3.VName);
    printf("Vorname: ");
    scanf("%s",&P3.NName);
    printf("Kundennummer: ");
    scanf("%d", &P3.KNr);
    printf("\nServus Herr %s %s, ihre Katalognummer ist %d.\n",P3.NName,P3.VName,P3.KNr);

    return 0;
}