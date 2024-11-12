#include <stdio.h>

/*Nel programmma viene inserito un pò tutto quello appreso nella giornata odierna
Vengono dichiarate delle variabili all'inizio per poterle riutilizzare in varie funzioni.
si passa a creare le funzoni per le varie operazioni e per la media è stato usato un puntatore*/

int risultato = 0;
float risultatod = 0;

int somma(int primo, int secondo)
{
    risultato = primo + secondo;
    return risultato;
}

int sottrazione(int primo, int secondo)
{
    risultato = primo - secondo;
    return risultato;
}

int moltiplicazione(int primo, int secondo)
{
    risultato = primo * secondo;
    return risultato;
}

float divisione(float primod, float secondod)
{
    if (secondod != 0)
    {
        risultatod = primod / secondod;
    }
    else
    {
        printf("\nErrore!!!! Non posso dividere per 0!!!!");
    }
    return risultatod;
}

int resto(int primo, int secondo)
{
    if (secondo != 0)
    {
        risultato = primo % secondo;
    }
    else
    {
        printf("\nErrore!!!! Non posso dividere per 0!!!!");
    }
    return risultato;
}

/*Per il calcolo della media viene chiesto all'utente quanti numeri vuole inserire per il calcolo della media,
i dati raccolti vengono inseriti in un array, sommati tra loro e infine divisi per il numero di dati inseriti*/
void media(int n)
{
    float sommamedia = 0, numeri[n];
    for (int i = 1; i <= n; i++)
    {
        printf("\nInserisci il numero n°%d: ", i);
        scanf("%f", &numeri[i]);
        sommamedia = sommamedia + numeri[i];
    }
    printf("La media è: %f", sommamedia / n);
}

/*il main visualizzato dall'utente è una serie di scelte, poste per far selezionare l'operazione da svolgere*/
int main()
{

    int menu, primo, secondo, n;
    float primod, secondod, rismedia;

    printf("\nSeleziona l'operazione da svolgere.");
    printf("\n1. Somma");
    printf("\n2. Sottrazione");
    printf("\n3. Moltiplicazione");
    printf("\n4. Divisione");
    printf("\n5. Resto");
    printf("\n6. Media");
    printf("\nScegli: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\nHai scelto Somma");
        printf("\nInserisci il primo numero: ");
        scanf("%d", &primo);
        printf("Inserisci il secondo numero ");
        scanf("%d", &secondo);
        printf("\nLa somma è: %d", somma(primo, secondo));
        break;
    case 2:
        printf("\nHai scelto Sottrazione");
        printf("\nInserisci il primo numero: ");
        scanf("%d", &primo);
        printf("Inserisci il secondo numero ");
        scanf("%d", &secondo);
        printf("\nLa sottrazione è: %d", sottrazione(primo, secondo));
        break;
    case 3:
        printf("\nHai scelto Moltiplicazione");
        printf("\nInserisci il primo numero: ");
        scanf("%d", &primo);
        printf("Inserisci il secondo numero ");
        scanf("%d", &secondo);
        printf("\nLa moltiplicazine è: %d", moltiplicazione(primo, secondo));
        break;
    case 4:
        printf("\nHai scelto Divisione");
        printf("\nInserisci il primo numero: ");
        scanf("%f", &primod);
        printf("Inserisci il secondo numero ");
        scanf("%f", &secondod);
        printf("\nLa divisione è: %f", divisione(primod, secondod));
        break;
    case 5:
        printf("\nHai scelto Resto");
        printf("\nInserisci il primo numero: ");
        scanf("%d", &primo);
        printf("Inserisci il secondo numero ");
        scanf("%d", &secondo);
        printf("\nIl resto della divisione è : %d", resto(primo, secondo));
        break;
    case 6:
        printf("\nDi quanti numeri vuoi fare la media? ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("\nErrore!!! Il numero deve essere maggiore di zero.\n");
        }
        else
        {
            media(n);
        }

        break;

    default:
        printf("\nErrore!!! Scegli un numeo da 1 a 6!!!");
    }

    return 0;
}