#include <stdio.h>

int main() 
{
    int T,x,n;
    scanf("%d",&T);
    int a[T];
    for(int i=0;i<T;i++){
       scanf("%d",&n);
       x=100-n;
       a[i]=x;
    }
    for(int i=0;i<T;i++){
        printf("%d\n",a[i]);
    }
	
	return 0;
}
