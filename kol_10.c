//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>eПр. 343, 4624, 6231209Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
#include <stdio.h>

int main(){
    int vnes, broj_check, sp_1, sp_2, op = 0, flagBreak = 0;
    while(scanf("%d", &vnes)){
        if(vnes > 9){
            broj_check = vnes;
            if(broj_check >= 10){
                flagBreak = 0;
                sp_1 = broj_check % 10;
                sp_2 = (broj_check / 10) % 10;
                if(sp_1 > sp_2) op = 1;
                else op = 0;
                while(broj_check > 9){
                    sp_1 = broj_check % 10;
                    sp_2 = (broj_check / 10) % 10;
                    if(sp_1 == sp_2) break;
                    switch (op) {
                        case 1:
                            if(sp_1 < sp_2){
                                flagBreak = 1;
                                break;
                            }
                            break;
                        case 0:
                            if(sp_1 > sp_2){
                                flagBreak = 1;
                                break;
                            }
                            break;
                        default: break;
                    }
                    if(op){
                        op = 0;
                    }else{
                        op = 1;
                    }
                    if(flagBreak){
                        break;
                    }
                    broj_check /= 10;
                }
            }
            if(broj_check < 10){
                printf("%d\n", vnes);
            }
        }
    }

}