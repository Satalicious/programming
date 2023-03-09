
#include <stdio.h>


typedef struct {
    char name[32];
    char nachname[32];
    int age;
    char geschlecht[2];
} Kurs;

int main() {
    int b = 0, anz = 0;

    printf("Wechselautomat\n");

    printf("Geben sie den zu wechselnden Betrag ein: ");
    scanf("%d",&b);

    
    anz = b / 20;
    b = b - (anz*20);
    printf("Anzahl 20 euro scheine: %d",anz);
    anz = b / 10;
    b = b - (anz*10);
    printf("Anzahl 10 euro scheine: %d",anz);
    anz = b / 5;
    b = (anz*5);
    printf("Anzahl 5euro scheine: %d",anz);
}