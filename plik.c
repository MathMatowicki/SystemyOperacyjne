#include <stdio.h>
 
int main(nt argc, char *argv[])
{
    FILE *f = fopen("notatki.txt", "r");    // otwiera plik do odczytu (musi istniec)
    if (f == NULL)
    {
        perror("Nie udalo sie otworzyc pliku notatki.txt");
        return 1;
    }
    puts("Plik otwarty pomyslnie!");
    fclose(f);
    return 0;
}
