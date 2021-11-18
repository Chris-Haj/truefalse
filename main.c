#include <stdio.h>

int and(int,int);
int or(int,int);
int greera(int,int);


int main() {
    int P1[32];
    int P2[32];
    int P3[32];
    int P4[32];
    int P5[32];


    int false=1;
    for(int i=1;i<=32;i++){
        i%16==0 ? false = !false:!false;
        P1[i]=false;
    }

    for(int i=1;i<=32;i++){
        i%8==0 ? false = !false:!false;
        P2[i]=false;
    }
    for(int i=1;i<=32;i++){
        i%4==0 ? false = !false:!false;
        P3[i]=false;
    }
    for(int i=1;i<=32;i++){
        i%2==0 ? false = !false:!false;
        P4[i]=false;
    }
    for(int i=1;i<=32;i++){
        i%1==0 ? false = !false:!false;
        P5[i]=false;
    }

    
    printf("CL\t|\tP1\t|\tP2\t|\tP3\t|\tP4\t|\tP5\t|\tN1\t|\tN2\t|\tN3\t|\tW1\t|\tW2\t|\tW3\n");
    for(int i=0;i<32;i++)
        printf("%d\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\t|\t%c\n",
               i+1,P1[i]==1? 'T':'F',P2[i]==1? 'T':'F',P3[i]==1? 'T':'F',P4[i]==1? 'T':'F',P5[i]==1? 'T':'F'
               , or(P1[i],P4[i])==1? 'T':'F', and(P1[i],P5[i])==1? 'T':'F',greera(P2[i], and(P4[i],P5[i]))==1? 'T':'F',
               greera(and(P4[i],P2[i]),P3[i])==1? 'T':'F',greera(P3[i],!P4[i])==1? 'T':'F',greera(P3[i], and(P4[i],P5[i]))==1? 'T':'F');

    return 0;
}

int and(int a,int b){
    return a&b;
}
int or(int a,int b){
    return a|b;
}
int greera(int a,int b){
    return !(a==1&&b==0);
}
