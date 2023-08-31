#include<stdio.h>
int main(){
//  int n;
//  scanf("%d",n);
//  if(n%2==0){
//      printf("so chan");
//  }
//  else{
//      printf("so le");
//  }
 int a,b,c;
 a=4;b=2;c=8;
 if(a>=b && a>=c){
     printf("a lon nhat:%d",a);
 }
 if(b>=a && b>=c){
     printf("b lon nhat :%d",b);
 }
 if(c>=a && c>=b){
     printf("c lon nhat:%d",c);
 }

 if(a>=b && b>=c){
     printf("day so giam");
 }
 else if(a<=b && b<=c){
     printf("day so tang");
 }
 else{
     printf("day khong tang khong giam");
}
 char c2;
 int g,h;
 scanf("%d %d %c",&g,&h,&c2);
 switch (c2)
 {
 case '+':
    printf("cong hai so la=%d ",g+h);
     break;
 }
return 0;
}