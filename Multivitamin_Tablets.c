#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x, y;
        scanf("%d %d", &x, &y);
        if(y >= x * 3)
            printf("Yes\n");
        else
            printf("No\n");
	}
	return 0;
}

