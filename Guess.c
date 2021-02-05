#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int max = 1000000;
    int min = 0;
    int answer,guess,try;
    try=0;

    printf("Aklindan %d ile %d arasinda bir sayi tut\n",min,max);

    while (1){
        try+=1;
        srand(time(NULL));
        guess = rand() % (max-min) + min;

        printf("tuttugun sayi %d miydi Deneme: %d\n",guess,try);
        printf("Dogruysa: 1\nYuksekse: 2\nDusukse: 3 e bas\n");
        scanf("%d",&answer);
        if (answer== 1){
           printf("Iste bu be! Yendim seni");
            system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
            break;
        }
        else if (answer==2){
            min = guess;
        }
        else if (answer == 3 ){
            max = guess;
        }
        if (try==40){
            printf("Sen kazandin pes ediyorum :((");
            system("start https://youtu.be/VmVnwm12qpo?t=121");
            break;
        }
    }
}
