#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int sum=0,max=0;
	    for(int i=0;i<=n-k;i++){
	        sum=a[i];
	        int b=i+1;
            for(int j=0;j<k-1;j++){
                sum=sum+a[b];
                b++;
            }
	        
	        if(max<sum)
	                max=sum;
	    }
	    printf("%d\n",max);
	}
	return 0;
}

