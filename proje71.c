#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int sayilar[20];
	int sayi,i,j;
	
	printf("Kac Sayi Girmek Istiyorsunuz?");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("\nSayi %d: ",i+1);
	    scanf("%d",&sayilar[i]);
	}
	
	for(j=0;j<sayi;j++)
	{
		printf("\nSayi %d: %d\n",j+1,sayilar[j]);
	}
	
	
	
	
	
	
	//int sayilar[]={15,25,18,24,52};
	//int i;
	
	//for(i=0;i<5;i++)
	//{
		//printf("%d\n",sayilar[i]);
	//}
	
	return 0;
}
