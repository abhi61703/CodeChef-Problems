#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int tem;
	    scanf("%d",&tem);
	    (tem>20)?printf("HOT\n"):printf("COLD\n");
	}
	return 0;
}

