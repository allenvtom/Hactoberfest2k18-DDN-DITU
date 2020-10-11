#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int i,j,sum=0,n,head=0;
 int d[20];
 int disk;  //loc of head
 int temp,max;
 int dloc;  //loc of disk in array

 printf("enter number of location\t");
 scanf("%d",&n);
 printf("enter position of head\t");
 scanf("%d",&disk);
 printf("enter elements of disk queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i]);
 }
 d[n]=disk;
 n=n+1;
 for(i=0;i<n;i++)  // sorting disk locations
 {
 for(j=i;j<n;j++)
 {
 if(d[i]>d[j])
 {
 temp=d[i];
 d[i]=d[j];
 d[j]=temp;
 }
 }
 }
 max=d[n];
 for(i=0;i<n;i++)  // to find loc of disc in array
 {
 if(disk==d[i]) { dloc=i; break;  }
 }
 head=d[dloc];
 sum=0;

 for(i=dloc;i>=0;i--)
 {
 printf("%d -->",d[i]);
 sum=sum+abs(head-d[i]);
 head=d[i];

 }
 printf("0 -->");
 sum=sum+head;
head=0;

 for(i=dloc+1;i<n;i++)
 {
 printf("%d-->",d[i]);
 sum=sum+abs(head-d[i]);
 head=d[i];
 }

 printf("\ntotal seek time= %d",sum);
 printf("average seek time= %d",sum/(float)n);
 getch();
 return 0;
}
