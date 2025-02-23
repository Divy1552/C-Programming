# include <stdio.h>

void main() {

    int a,b,c;
    printf("Enter Phone Number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d",&a,&b,&c);

    printf("Phone Number [xxx.xxx.xxxx] : %d.%d.%d",a,b,c);
}