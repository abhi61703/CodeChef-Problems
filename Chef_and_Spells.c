#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	   int a,b,c;
	   scanf("%d%d%d",&a,&b,&c);
	   int sum=0;
	   if (a>=b && a>=c){
	        sum=a;
	        (b>c)?printf("%d\n",sum+b):printf("%d\n",sum+c);
	   }
	   else if(b>=a && b>=c){
	        sum=b;
	        (a>c)?printf("%d\n",sum+a):printf("%d\n",sum+c);
	   }
	   else{
	        sum=c;
	        (b>a)?printf("%d\n",sum+b):printf("%d\n",sum+a);
	   }
	   
	}
    
	return 0;
}
