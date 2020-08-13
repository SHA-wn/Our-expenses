#include <stdio.h>
 void main()
{
 int n,i;
 printf("Enter the number of consumers involved : ");
 scanf("%d",&n);

 float oc;
 printf("Other charges (like delivery):");
 scanf("%f",&oc);

 float P[100],sum = 0.0;

 printf("Enter the expenses incurred by each person:\n");
 for(i=0;i<n;i++)
 {
  printf("Person %d: ",i+1);
  scanf("%f",&P[i]);
  sum = sum + P[i];
 }

 printf("The grand total comes to %f\n",sum + oc);

 printf("Here is the money each should pay:\n");
 for(i=0; i<n; i++)
 {
  printf("Person %d: %f\n",i+1,P[i]*(1 + oc/sum));
 }
}
