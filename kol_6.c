//Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, а потоа последователно се внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0). Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

#include <stdio.h>

int main(){
    int p_1, p_2, vneseni_parovi = 0, br_parovi = 0, potreben_zbir, flag = 1;
    double p;
    scanf("%d", &potreben_zbir);
    while(flag){
        scanf("%d %d", &p_1, &p_2);
        if((p_1 == 0) && (p_2 == 0)){
            flag = 0;
            break;
        }
        else{
            if(p_1 + p_2 == potreben_zbir){
                br_parovi++;
            }
            vneseni_parovi++;
        }
    }
    p = (br_parovi * 1.0) / vneseni_parovi * 100.0;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", br_parovi, potreben_zbir);
    printf("Procentot na parovi so zbir %d e %.2f%%", potreben_zbir, p);
    return 0;
}
