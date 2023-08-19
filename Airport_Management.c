#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int freq[1441]={0};
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        freq[a[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	        freq[b[i]]++;
	    }
	    int runway = freq[0];
	    for(int i=0;i<1441;i++){
	        if(runway<freq[i])
	            runway=freq[i];
	    }
	    printf("%d\n",runway);
	    
	}
	return 0;
}

