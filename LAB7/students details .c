#include <stdio.h>
 
typedef struct{
  char name[30];
  int roll;
  char section[30];
  char department[30];
  int fees;
  int results;
  
} Student;
 
int main()
{
  char buffer;
  
  int n=2;


  Student students[n];

  printf("Enter %d Student Details \n \n",n);
  for(int i=0; i<n; i++){
    printf("Student %d:- \n",i+1);
    

    printf("Name: ");
    scanf("%s",&students[i].name);
  
    
    printf("Roll: ");
    scanf( "%d",&students[i].roll );


    printf("section: ");
    scanf("%s",&students[i].section);
   
    printf("department: ");
    scanf ("%s",&students[i].department);
    
    
    printf("fees: ");
    scanf("%d",&students[i].fees);
   
    
    printf("results: ");
    scanf("%d",&students[i].results);
 

    printf("\n");
  }

  
  printf("-------------- All Students Details ---------------\n");
  for(int i=0; i<n; i++){
    printf("Name: ");
    printf("%s \n",students[i].name);

    printf("Roll \t: ");
    printf("%d \n",students[i].roll);

    printf("section: ");
    printf("%s \n",students[i].section);
    
    printf("department: ");
    printf("%s \n",students[i].department);

    printf("fees \t: ");
    printf("%d \n",students[i].fees);
    
    printf("results \t: ");
    printf("%d \n",students[i].results);
    printf("\n");
  }
  if(students[1].results > students[2].results) 
  printf("%s got more marks",students[1].name);
  else
  printf("%s got more marks",students[2].name);

  return 0;
}