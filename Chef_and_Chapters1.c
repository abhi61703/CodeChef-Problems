#include <stdio.h>

int main (void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int veda1,veda2,veda3;
	    scanf("%d %d %d",&veda1,&veda2,&veda3);
	    printf("%d\n",veda1*veda2*veda3);
	}
	return 0;
}

