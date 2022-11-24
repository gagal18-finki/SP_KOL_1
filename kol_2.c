//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <stdio.h>
int main(){
    int broj, broj_cut, brojac, broj_reverse;
    scanf("%d", &broj);
    if(broj < 9){
        printf("Brojot ne e validen");
    }else{
        for(int i = broj - 1; i > 0;i--){
            broj_cut = i;
            brojac=1;
            broj_reverse = 0;
            while(broj_cut > 9){
                broj_reverse += broj_cut % 10;
                broj_reverse *= 10;
                broj_cut /= 10;
                brojac++;
            }
            broj_reverse += broj_cut;
            if(broj_reverse % brojac == 0){
                printf("%d", i);
                break;
            }
        }
    }
    return 0;
}