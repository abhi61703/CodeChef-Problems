#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int a[2*n];
	    for(int i=0;i<2*n;i++){
	        scanf("%d",&a[i]);
	    }
	    int count;
	    for(int i=0;i<2*n;i++){
	        count=0;
	        for(int j=i+1;j<2*n;j++){
	            if(a[i]==a[j])
	                count++;
	        }
	        if(count>1)
	            break;
	    }
	    if(count>1)
	        printf("No\n");
	    else
	        printf("Yes\n");
	    
	}
	return 0;
}

