#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int maxT,maxN,sumN,t,te;
	    scanf("%d %d %d",&maxT,&maxN,&sumN);
	    t=0;te=1;
	    while(te<=maxT&&sumN!=0)
	    {
	        if(sumN>=maxN)
	        {
	            t=t+maxN*maxN;
	            sumN=sumN-maxN;
	        }
	        else
	        {
	            t=t+sumN*sumN;
	            sumN=sumN-sumN;
	        }
	        te++;
	    }
	    printf("\n%d",t);
	}
	return 0;
}

