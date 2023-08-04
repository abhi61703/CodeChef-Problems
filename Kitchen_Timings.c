#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int start,end;
	    scanf("%d%d",&start,&end);
	    printf("%d\n",end-start);
	}
    
	return 0;
}
