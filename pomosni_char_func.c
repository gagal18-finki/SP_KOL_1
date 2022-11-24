//Да се напише програма во која од тастатура се внесуваат непознат број мали
//букви сѐ додека не се внесе знак што не е мала буква. За секој пар
//последователни букви, во нов ред треба да се испечати секвенца од буквите во
//абецеден редослед што се наоѓаат меѓу нив (без нив) проследено со вкупниот
//број на вакви букви. Секогаш печатењето се почнува од буквата што се наоѓа
//понапред во азбуката кон таа што е поназад. Ако парот букви е составен од две
//соседни букви во азбуката, не се печати ништо. На крај да се испечати
//вкупниот број на испечатени секвенци од букви.

#include <stdio.h>
#include <ctype.h>

int malaProverka(int bukva){
    if((bukva >= 'a') &&( bukva <= 'z')){
        return 1;
    }else{
        return 0;
    }
}
int golemaProverka(int bukva){
    if((bukva >= 'A') &&( bukva <= 'Z')){
        return 1;
    }else{
        return 0;
    }
}
int brojProverka(int bukva){
    if((bukva >= '0') &&( bukva <= '9')){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char bukvi;
    while(scanf("\n%c", &bukvi)){
        if(malaProverka(bukvi)){
            printf("%c MALA\n", bukvi);
        }
        if(golemaProverka(bukvi)){
            printf("%c Golema\n", bukvi);
        }
        if(brojProverka(bukvi)){
            printf("%d Broj\n", bukvi - '0');
        }
        if(isdigit(bukvi)){
            printf("%c kako broj -> %d\n", bukvi, bukvi - '0');
        }
    }
    return 0;
}
