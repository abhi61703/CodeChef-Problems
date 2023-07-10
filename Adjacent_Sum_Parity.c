#include <stdio.h>
int main(void) {
	
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int a[n],count=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	            count++;
	        }
	    }
	    if(count%2==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

