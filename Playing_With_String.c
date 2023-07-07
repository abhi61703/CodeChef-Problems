#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,count1=0,count2=0;
	    scanf("%d",&n);
	    char str[n+1];
	    scanf("%s",str);
	    char g[n+1];
	    scanf("%s",g);
	    for(int i=0;i<n;i++){
	        if(str[i]=='1'){
	            count1++;
	        }
	        if(g[i]=='1'){
	            count2++;
	        }
	    }
	    (count1==count2)?printf("YES\n"):printf("NO\n");
	    
	}
	return 0;
}

