
    #include<stdio.h>
    int main(){
                  int x, y, z;
                  printf(" Enter three Integer numbers for x, y, z : ");
                  scanf("%d %d %d", &x, &y, &z);
                  if((x < y)&&(x < z))
                  printf("\n x is smallest : %d",x);
                  else
                 {
                 if(y < z)
                 printf("\n y is smallest : %d",y);
                 else
                 printf("\n z is smallest : %d",z);
                 }
    return(0);
    }