#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(3*x>2*y)
	    {
	        printf("%d\n",2*y);
	    }
	    else{
	        printf("%d\n",3*x);
	    }
	}
	return 0;
}

