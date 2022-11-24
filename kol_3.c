//Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

#include <stdio.h>

int main(){
    int n, sum_del = 0, sum_del_prim, broj;
    scanf("%d", &n);
    for(int i = n-1; i > 0; i--){
        sum_del_prim = 0;
        for (int j = 1; j < i; j++){
            if(i % j == 0){
                sum_del_prim += j;
            }
        }
        if(sum_del_prim > sum_del){
            sum_del = sum_del_prim;
            broj = i;
        }
    }
    printf("%d\n", broj);

    return 0;
}
