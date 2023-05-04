#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int count=0;
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]==a[j]){
	                count++;
	                break;
	            }
	        }
	    }
	    printf("%d\n",n-count);
	    
	}
	return 0;
}

