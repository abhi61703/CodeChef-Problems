#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x;
    	scanf("%d",&x); 
    	if(x<300){
    	   int rem=300-x;
    	   int c=rem+x;
    	   printf("%d\n",c*10);
    	}
    	else{
    	printf("%d\n",x*10);
    	
    	}
	}
	return 0;
}

