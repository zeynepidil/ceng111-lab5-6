#include<stdio.h>
//Question1 
    int main(){
	int n;
	int numbers;
	float  total=0;
	int count;
	float average;
	printf("How many numbers?");
	scanf("%d",&n);
	while(count<=n){ 
		printf("%d.number:",count);
		scanf("%d",&numbers);
		total+=numbers;
		count++;
		
	}
	average=total/n;
	printf("average is %f",average);
	return 0;
//Question2
    int start;
	int finish;
	int sum=0;
	int count=2;

	
	printf("Please enter the minimum Limit Value\n:");
	scanf("%d",&start);
	
	printf("Please enter the maximum Limit Value:");
	scanf("%d",&finish);

    printf("Even numbers between %d and %d are:",start,finish);
	while(start<=finish){
		if(start%2==0){
			printf("%d",start);
			sum=sum+start;
		}
		start++;
}
    printf("\nThe sum of all the even numbers from %d upto %d=",start,finish);
	printf("%d",sum);
	return 0;
//Question3
  int students;
  int grade;
  int count=1;
  printf("number of students:");
  scanf("%d",&students);
  while(count<=students){
    printf("enter grade:");
    scanf("%d",&grade);
    count+=1;
	}
     if(grade>=60){
       printf("%d students have passed",students); 
    }
     else if(grade<=60){
       printf("%d students don't have passed",students);
     }
    return 0;
//Question4
int number;
  printf("Enter a number:\n");
  scanf("%d",&number);

  while(number>0){
  number=number/100;
  printf("Leftmostdigit is %d. \n",number);
  scanf("%d",&number);
}
  return 0;
//Question5
int num;
  int length,width;
  int count=1;
  int sum=0;
  int max,min;
  printf("Enter a number:");
  scanf("%d",&num);
  while(count<=num){
    printf("Enter width and length of the rectangle: ");
    scanf("%d %d",&width,&length);
    count+=1;
    if(length>width){
      max=length;
      sum=sum+max;
   }
    else if(width>length){
      max=width;
      sum=sum+max;
  }
   else{
      width=length;
      max=width=length;
      sum=sum+max;
   }
  }

  printf("Sum of larger sides is %d ",sum);
  return 0;
//Question6
 int number;
 int count=1;
 int digit;
 int largest=0,smallest=9;
 
 while(count<=5){
   printf("enter a number :");
   scanf("%d",&number);
   count+=1;
 if(number>0)
    digit=number%10;
 if(digit>largest)
     largest=digit;
 if(digit<largest)
     smallest=digit;
  number=number%10;
 }
 printf("\n maximum units digit amongs 5 numbers:%d",largest);
 return 0;
}



	
