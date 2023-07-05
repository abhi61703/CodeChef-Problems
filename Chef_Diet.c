#include <stdio.h>

int main(void) {

	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int sum1=0,flag=0;
	    int N,K,arr[100000];
	    scanf("%d%d",&N,&K);
	    for(int j=0;j<N;j++){
	        scanf("%d",&arr[j]);
	    }
	    for (int j=0;j<N;j++){
	        sum1+=(arr[j]-K);
            if(sum1<0){
            	flag=0;
                printf("NO %d\n",j+1);
                break;
            }
            else {
               flag=1;
	        }
	    }
	    if(flag==1){
	        printf("YES\n");
	    }
	}
	return 0;
}

