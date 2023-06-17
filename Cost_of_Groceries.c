#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int a[n],b[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=x){
	            sum+=b[i];
	        }
	    }
	    printf("%d\n",sum);
	}
    
	return 0;
}
