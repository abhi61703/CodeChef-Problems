#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int a,b,s,d;
	    scanf("%d%d",&a,&b);
	    s=7-a;
	    d=7-b;
	    if(s>d)
	        printf("%d\n",d);
	    else
	        printf("%d\n",s);
	}
	return 0;
}

