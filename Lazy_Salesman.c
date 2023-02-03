#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,w,i,j,count,sum,temp;
	    scanf("%d %d",&n,&w);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]>a[j])
	            {
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    count=0,sum=0;
	    for(i=n-1;i>=0;i--)
	    {
	        sum+=a[i];
	        count++;
	        if(sum>=w)
	        {
	           break;
	        }
	        
	       
	    }
	    printf("%d\n",n-count);
	}
	return 0;
}
