#include<stdio.h>
#include<stdint.h>
unsigned char chieucao1;
unsigned char chieucao2;
unsigned char chieucao3;

int main(){
    //dung stdint
    // type int is 4byte but char is 1 byte  , after it ghi de len cac dia chi xung quanh 
    // little endian, big endian 
    // create variable temp
    // dia chi dau tien, cua o nho dau tien cua phan tu dau tien
    // %s need a address , and end at \0
    int temp;
    scanf("%d",&temp);
    // scanf only get data to space, use getline();gets();
    chieucao1=temp;
    scanf("%d",&temp);
    chieucao2=temp;
    scanf("%d",&temp);
    chieucao3=temp;
    printf("\n%d",chieucao1);
    printf("\n%d",chieucao2);
    printf("\n%d",chieucao3);
}