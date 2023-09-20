#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    (c<a || d<b)?printf("IMPOSSIBLE\n"):printf("POSSIBLE\n");
	    
	}
	return 0;
}

