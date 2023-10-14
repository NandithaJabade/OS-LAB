#include<stdio.h>
#include<conio.h>
main()
{
	int ms,bs,nob,ef,n,mp[10],tif=0,i,p=0;
	printf("Enter the total memory available (inBytes)--");
	scanf("%d",&ms);
	printf("Enter block size(inBytes)--");
	scanf("%d",&bs);
	nob=ms/bs;
	ef=ms-nob*bs;
	printf("\n Enter the number of processes--");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter memory requires for processes %d (in Bytes)--",i+1);
		scanf("%d",&mp[i]);
	}
	printf("\n No of Blocks available in memory--%d",nob);
	printf("\n\nPROCESS\tMEMORY REQUIRED\tALLOCATED \tINTERNAL FRAGMENTATION");
	for(i=0;i<n&&p<nob;i++)
	{
		printf("\n %d\t\t%d",i+1,mp[i]);
		if(mp[i]>bs)
		printf("\t\tNO\t\t---");
		else
		{
		printf("\t\tYES\t%d",bs-mp[i]);
		tif=tif+bs-mp[i];
		p++;
	}
}
if(i<n)
printf("\nMemory is Full,Remaining Processes cannot be accomodated");
printf("\n\nTotal Internal Fragmentation is %d",tif);
printf("\nTotal External Fragmentation is %d",ef);
	}
