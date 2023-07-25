#include <stdio.h>

int main(void) {
	
	int t; scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int m=60*n;
	    int z=m/20;
	    printf("%d\n", z);
	}
	return 0;
}
