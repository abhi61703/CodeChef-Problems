#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    ((a>=b)&&(a>=c))?printf("%d\n",a):((b>=a)&&(b>=c))?printf("%d\n",b):printf("%d\n",c);
	    
	}
	return 0;
}

