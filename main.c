#include <stdio.h>

// j'avais pas de consignes mdr ducoup j'ai improvisé


struct temps {
    unsigned int heures;
    unsigned int minutes;
};

void fonctionheure(struct temps instant) {
    printf("Donnez l'heure : ");
    scanf("%u", &instant.heures);

    printf("Donnez les minutes : ");
    scanf("%u", &instant.minutes);

    if (instant.heures < 10) {
        printf("il est :0%d", instant.heures);
    } else {
        printf("il est :%d", instant.heures);
    }

    printf(":");

    if (instant.minutes < 10) {
        printf("0%d", instant.minutes);
    } else {
        printf("%d", instant.minutes);
    }

    printf("\n");
}

int main() {
    struct temps instant;
    fonctionheure(instant);

    return 0;
}
