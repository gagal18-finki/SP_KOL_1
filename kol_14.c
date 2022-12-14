//Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број. За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри). За секој внесен број резултатот треба да се испечати во следниот формат:
//[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]
//342: 9   //3+4+2
//345: 16 //3+4+5+4
//123: 11 //1+2+3+5
//456: 18 //4+5+6+3

#include <stdio.h>

int main(){
    int broj, tmp_broj, max_prev = 0, sum_current = 0;
    while(scanf("%d", &broj)){
        tmp_broj = broj;
        sum_current = max_prev;
        max_prev = tmp_broj % 10;
        while(tmp_broj > 0){
            sum_current += tmp_broj % 10;
            if((tmp_broj % 10) > max_prev){
                max_prev = tmp_broj % 10;
            }
            tmp_broj /= 10;
        }
        printf("%d: %d\n", broj, sum_current);
        sum_current = 0;
    }
}