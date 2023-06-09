#include <stdio.h>

int main(void) {

	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int girls,boys;
	    scanf("%d%d",&girls,&boys);
	    printf("%d\n",boys-girls);
	}
	return 0;
}

