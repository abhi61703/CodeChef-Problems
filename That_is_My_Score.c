#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int p[n],s[n];
	    for(int i=0;i<n;i++){
	        scanf("%d%d",&p[i],&s[i]);
	        if(p[i]>8){
	            s[i]=0;
	        }
	    }
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(p[i]==p[j]){
	                if(s[i]>s[j]){
	                    s[j]=0;
	                }
	                else
	                    s[i]=0;
	            }
	        }
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=s[i];
	    }
	    printf("%d\n",sum);
	    
	}
	return 0;
}

