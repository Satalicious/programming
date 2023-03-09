
#include <stdio.h>
#define MAX 3

typedef struct {
    char Vorname[32];
    char Nachname[32];
    char Kurs[32];
    int Alter;
    int Index;
    char Geschlecht[3];
} KursT;

void fillPersons(KursT *Pers) {
    for (int i = 1; i < MAX; i++) {
        printf("\nVorname: "); 
        scanf("%s", Pers[i].Vorname);
        printf("Nachname: ");
        scanf("%s", Pers[i].Nachname);
        printf("Kurs: ");
        scanf("%s", Pers[i].Kurs);
        printf("Alter: ");
        scanf("%d", &Pers[i].Alter);
        Pers[i].Index = i;
        printf("Geschlecht: M / W ? ");
        scanf("%s", Pers[i].Geschlecht);
        printf("\nPerson %d: %s %s wurde fertig erstellt\n",i,Pers[i].Vorname,Pers[i].Nachname);
    }
}

int main() {
    KursT Pers[MAX];
    double averageA = 0.0;
    printf("Geben Sie 10 Teilnehmer ein\n");
    fillPersons(Pers);

    for (int i = 1; i < MAX; i++) {
        averageA += Pers[i].Alter;
        printf("\nPerson %d: %s %s Alter: %d Geschl.: %s",i,Pers[i].Vorname,Pers[i].Nachname,Pers[i].Alter,Pers[i].Geschlecht);
    }
    printf("\nDas Durschnittsalter der Teilnehmer: %02lf\n",averageA / MAX);
    return 0;
}