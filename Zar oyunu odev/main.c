#include <stdio.h>
#include <time.h>

int main()
{
    printf("Kurallar: iki zar atilir\nZarlarin toplami hesaplanir\nIlk atista 7 veya 11 gelirse oyuncu kazanir\nIlk atista 2, 3 veya 12 gelirse oyuncu kaybeder\nIlk atista 4,5,6,8,9,10 gelirse bu oyuncunun puani oluyor.\nOyuncu 7 atmadan önce kendi puanini tutturmalidir.\n");
    int zar1=0;
    int zar2=0;
    int toplam;
    int temp;
    srand(time(NULL));
    zar1=(1+rand() %6);
    zar2=(1+rand() %6);
    toplam=zar1+zar2;
    printf("Zar1 : %d\n",zar1);
    printf("Zar2 : %d\n",zar2);

    if(toplam==7 || toplam == 11){
        printf("Puaniniz : %d\n",toplam);
        printf("Oyunu kazandiniz!\n");
        }
    else if(toplam==2 || toplam == 3 || toplam == 12){
        printf("Puaniniz : %d\n",toplam);
        printf("Oyunu kaybettiniz!");
        }
    else if(toplam==4 ||toplam==5 ||toplam==6 ||toplam==8 ||toplam==9 ||toplam==10){
        temp=toplam;
        printf("Puaniniz : %d\n",temp);
    while(toplam != 7 || toplam != temp){
    zar1=(1+rand() %6);
    zar2=(1+rand() %6);
    toplam=zar1+zar2;
    printf("Yeni puaniniz : %d\n",toplam);
        if(toplam == 7){
        printf("Oyunu kaybettiniz, tekrar deneyin!");
        break;
        }
        if(toplam==temp){
        printf("Oyunu kazandiniz, tebrikler!");
        break;
        }
    }/*While son*/
    }

    return 0;
}
