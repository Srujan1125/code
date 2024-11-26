#include<stdio.h>
int main(){
    int m,h,d,s;
    s=31558150;
    m=s/60;
    h=m/60;
    d=h/24;
    printf("earth takes %d",m);
    printf("  minutes to revolve \n");
    printf("earth takes %d",h);
    printf("  hours to revolve\n");
    printf("earth takes %d",d);
    printf("  days to revolve ");
    return 0;
}