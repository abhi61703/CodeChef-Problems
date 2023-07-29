#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c,x;
	    scanf("%d%d%d%d",&a,&b,&c,&x);
	    ((a+b>=x)|| (b+c>=x)||(c+a>=x))?printf("YES\n"):printf("NO\n");
	    
	}
	return 0;
}

