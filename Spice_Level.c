#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int X;
	    scanf("%d",&X);
	    if(X>=4 && X<7){
	        printf("MEDIUM\n");
	    }
	    else if(X<4){
	        printf("MILD\n");
	    }
	    else {
	        printf("HOT\n");
	    }
	}
	return 0;
}

