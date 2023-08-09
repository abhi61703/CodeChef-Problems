#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x;
	    scanf("%d",&x);
	    if(x>30){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}

