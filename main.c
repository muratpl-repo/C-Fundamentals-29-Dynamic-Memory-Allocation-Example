#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    printf("***********SAYI DIZILERI\n");

    //SAYI DIZILERI
    int *sayiDizisi = calloc(4,sizeof(int));
    sayiDizisi[0] = 15;
    sayiDizisi[1] = 25;
    sayiDizisi[2] = 35;
    sayiDizisi[3] = 45;
    for(int i=0;i<4;i++){
        printf("%d\n",sayiDizisi[i]);
    }
    printf("***********KARAKTER DIZILERI\n");

    //KARAKTER DIZILERI
    char *karakterDizisi = calloc(4,sizeof(char));
    karakterDizisi[0] = 'K';
    karakterDizisi[1] = 'A';
    karakterDizisi[2] = 'A';
    karakterDizisi[3] = 'N';
    for(int i=0;i<4;i++){
        printf("%c",karakterDizisi[i]);
    }
    printf("\n");
    printf("***********COK BOYUTLU KARAKTER DIZILERI\n");

    //COK BOYUTLU KARAKTER DIZILERI
    char **cokBoyutluKarakterDizisi = malloc(sizeof(char*)*3);
    for (int i=0;i<3;i++){
        cokBoyutluKarakterDizisi[i] = malloc(10*sizeof(char));
    }
    cokBoyutluKarakterDizisi[0] = "Kaan";
    cokBoyutluKarakterDizisi[1] = "Academy";
    cokBoyutluKarakterDizisi[2] = "Hosgeldin";

    for(int i=0;i<3;i++){
        printf("%s\n",cokBoyutluKarakterDizisi[i]);
    }










    return 0;
}
