#include<stdio.h>
int main(){
    for(int i=10;i>0;i--){
        printf("%d\n",i);
    }   
    int a,b;
    a=2;b=6;

    int sum;
    for(int i=a;i<b;i++){
       sum=sum+i; 
    }
    printf("%d",sum);
    for(int i=0;i<=b;i++){
        if(i%2==1){
            sum+=1;
        }
    }
    return 0;
}