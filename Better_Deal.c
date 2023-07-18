#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    int x=abs((100*a/100)-100);
	    int y=abs((200*b/100)-200);
	    (x<y)?printf("FIRST\n"):(y<x)?printf("SECOND\n"):printf("BOTH\n");
	    
	}
	return 0;
}

