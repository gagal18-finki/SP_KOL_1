//Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
//
//[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
//0: 2
//1: 3
//2: 1
//3: 1
//4: 1
//за броевите 97654 48654 12345 12343 1263 12443 12643 12777


#include <stdio.h>
int main(){
    int broj, tmp_broj, c_0, c_1, c_2, c_3, c_4, max_cifra, index_counter = 0, index = 0;
    c_0 = c_1 = c_2 = c_3 = c_4 = 0;
    while(scanf("%d", &broj)){
        tmp_broj = broj;
        max_cifra = tmp_broj % 10;
        while(tmp_broj > 0){
            if((tmp_broj % 10) > max_cifra){
                max_cifra = tmp_broj % 10;
                index = index_counter;
            }
            tmp_broj /= 10;
            index_counter++;
        }
        switch (index) {
            case 0:
                c_0++;
                break;
            case 1:
                c_1++;
                break;
            case 2:
                c_2++;
                break;
            case 3:
                c_3++;
                break;
            case 4:
                c_4++;
                break;
        }
        index = 0;
        index_counter = 0;
        
    }
    printf("0: %d\n", c_0);
    printf("1: %d\n", c_1);
    printf("2: %d\n", c_2);
    printf("3: %d\n", c_3);
    printf("4: %d\n", c_4);
    return 0;
}