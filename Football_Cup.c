#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>=1&&y>=1&&x==y){
    	    printf("YES \n");
    	 }
    	 else{
    	    printf("NO \n");
    	 }
	}
	return 0;
}

