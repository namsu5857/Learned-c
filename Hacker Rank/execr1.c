#include<stdio.h>
int table(int j){
        for(int i = 1; i<=20; i++){
        printf("%d * %d = %d \n",j, i, j*i);
    }

}
int main(){
    int k,l,m,n,o,p,q,r,s,t;
    printf("Please Enter 5 Numbers for 5 Multiplication Table \n", k,l,m,n,o);
    scanf("%d %d %d %d %d", &k,&l,&m, &n, &o);
    p = table(k);
    q = table(l);
    r = table(m);
    s = table(n);
    t = table(o);
    printf("%d %d %d %d %d",p, q, r, s, t);
    return 0;
}