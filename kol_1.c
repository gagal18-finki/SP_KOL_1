//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
#include <stdio.h>

int main() {
    int m, n, temp,br_blag = 0;
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n;i++){
        temp = i;
        while(temp > 0){
            if((temp % 10) % 2 == 0){
                temp /= 10;
            }else{
                break;
            }
        }
        if(temp == 0){
            br_blag = i;
            break;
        }
    }
    if(br_blag != 0){
        printf("%d", br_blag);
    }else{
        printf("NE");
    }
    return 0;
}
