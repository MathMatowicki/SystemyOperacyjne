#include <stdio.h>
 
int main(int argc, char *argv[])
{

    
    FILE *z = fopen("zrodlo.txt", "r");    // otwiera plik do odczytu (musi istniec)
    FILE *c = fopen("cel.txt","w");
    if (z == NULL)
    {
        perror("Nie udalo sie otworzyc pliku notatki.txt");
        return 1;
    }

    int test[5] = {1, 16, 256, 1024, 16384};
    
  
    for (int i = 0; i < 5; i++)
    {
        fread(c,test[i],1*test[i]/* tu ma byc ile razy pobieramy bajty*/,z);
        fwrite(z,test[i],1*test[i],c);

    }
    // while(fread("plik.txt"),,,)
    puts("Plik otwarty pomyslnie!");
    fclose(z);
    fclose(c);
    return 0;
}
