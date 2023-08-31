#include<stdio.h>
int main(){
    // to enter data for an integer variable , you can use function scanf() with format %d
    int a;
    scanf("%d",&a);
    printf("a=%d",a);
    int length,width;
    scanf("%d%d",&length,&width);
    printf("Area=%d\n",length*width);
    printf("a+b=%d\n",length+width);
    
    int c=length;
    length=width;
    width=c;
    printf("after swapping, a=%d,b=%d\n",length,width);
    int e,f;
    scanf("%lf%lf",&e,&f);
    printf("a*b=%f\n",e*f);
    char c;
    scanf("%c",&c);
    c=c+1;
    printf("%c\n",c);

    return 0;
}