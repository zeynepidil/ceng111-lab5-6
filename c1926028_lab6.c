#include<stdio.h>
//Question1
int main(){
	
   int i,j,n,p,q;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { p=1;
     q=0;
     }
     else
     { p=0;
       q=1; 
     }
  for(j=1;j<=i;j++)
	   if(j%2==0){
	     printf("%d",p);
   }
	   else{
	     printf("%d",q);
   }
     printf("\n");
   }
   return 0;
//Question2
int num1,num2,max,i,lcm;
    printf("LCM of two numbers:\n");
    printf("----------\n");

    printf("Input 1st number for LCM\n:");
    scanf("%d",&num1);
    printf("Input 2nd number for LCM:");
    scanf("%d",&num2);
    max=num1>num2 ? num1:num2;
    for(i=1;i<max;i++){
      if(max%num1==0&& max%num2==0){
        lcm=max;
        break;
      }
      max++;
    }
    printf("LCM Of %d and %d=%d",num1,num2,lcm);
    return 0;
//Question3
int fact=1;
  int x,y;
  int res;
  int kontrol=0;
  printf("Input x and y:");
  scanf("%d %d",&x,&y);
  for(int i=1;i<=y;i++){
      fact =fact*i;
      if((x*y)/2==0){
          fact=fact*y;
          kontrol=1;
         
      }
      else if((x*y)%2!=0){
          res=pow(x,y);
          kontrol=2;

     }
     else if((x*y)<0){
          kontrol=0;
          break;
     }

    }
       
  if(kontrol<2){
      printf("F=%d\n",fact);
  
  }
  if(kontrol==2){
 printf("Pow=%d",res);
  }
  if(kontrol==0){
  printf("Goodbye!"); 
  }
  return 0;

//Question4
int n,i,m,flag;   
printf("Input a number:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("This is not a prime number.");    
flag=1; 
break;     
}    
}    
if(flag==0)    
printf("This is a prime number.");     
return 0;

//Question5
int i,n;
   float total=0.0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\n\n");
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
         printf("1/%d + ",i);
         total+=1/(float)i;
       }
       if(i==n)
     {
         printf("1/%d ",i);
         total+=1/(float)i;
     }
     }
        printf("\nSum of Series upto %d terms : %f \n",n,total);
return 0;
//Question6
int i, j, row;
        printf("Enter the number of rows:");
        scanf("%d",&row);
       for(i=row;i>=1;i--){
       for(j=1;j<=i;j++){
       printf("%d ",j);
       }
        printf("\n");
        }

    return 0;
}

