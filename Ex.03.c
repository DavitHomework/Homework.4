#include <stdio.h>
int main ()
{
	int p;
	int p2;
	int i;
	int min;
	int max;
	printf("Input how many numbers you want to compare:");
	scanf("%d",&i);
	int numbers[i];
	printf("Input the %d numbers ",i);
	for (p=0;p<i;p++)
	{
		scanf("%d",&numbers[p]);
	}
	for (p=0;p<i;p++)
	{
		if(max<numbers[p])
		{
			max=numbers[p];
		}
	}	
		min=max;
	for (p=0;p<i;p++)
	{
		if(min>numbers[p])
		{
			min=numbers[p];
		}
	}	
	printf("In the numbers the greatest is %d\n",max);
	printf("In the numbers the smallest is %d\n",min);
}
/* haskanumem vor indznic sa cher uzum bayc de chhaskaca incher uzum dra hamar es areci u fsyo chnayac eli shat usha 2-na linum bayc de parkumem qnem el uj chka vres bari gisher */
