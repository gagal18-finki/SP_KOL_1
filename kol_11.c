//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>eПр. 343, 4624, 6231209Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви

#include <stdio.h>

int main(){
    int vnes, flag_sort = 0,flag_break = 0, vnes_cifra, vnes_temp;
    while(scanf("%d", &vnes)){
        if(vnes > 9){
            vnes_temp = vnes;
            if((vnes_temp % 10) < 5){
                flag_sort = 0;
            }else{
                flag_sort = 1;
            }
            while(vnes_temp > 0){
                vnes_cifra = vnes_temp % 10;
                switch (flag_sort) {
                    case 0:
                        if((vnes_cifra > 5) || (vnes_cifra == 5)){
                            flag_break = 1;
                        }else{
                            flag_sort = 1;
                        }
                        break;
                    case 1:
                        if(vnes_cifra < 5){
                            flag_break = 1;
                        }else{
                            flag_sort = 0;
                        }
                        break;
                }
                if(flag_break){
                    break;
                }
                vnes_temp /= 10;
            }
            flag_break = 0;
            if(vnes_temp == 0){
                printf("%d\n", vnes);
            }
        }
    }
    return 0;
}