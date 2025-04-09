// matrix solver
#include <stdio.h>
int m,n,i,j,m1,n1;
void add(int arr1[m][n],int arr2[m1][n1]){
      int sum[m][n];
      for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
      }
      
}
void sub(int arr1[m][n],int arr2[m1][n1]){
    int diff[m][n];
    for (i=0;i<m;i++){
      for(j=0;j<n;j++){
          diff[i][j]=arr1[i][j]-arr2[i][j];
          printf("%d\t",diff[i][j]);
      }
      printf("\n");
    }
    
}

void scaler(int arr1[m][n]){
    int k;
    printf("Enter your scaler constant");
    scanf("%d",&k);
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr1[i][j]*=k;
            printf("%d",arr1[i][j]);
        }
        printf("\n");
      }
}
void multiply(int arr1[m][n],int arr2[m1][n1]){
    // int multiply[m][n]=0;
    for (i=0;i<m;i++){
      for(j=0;j<n;j++){
    
        //   multiply[j][i]+=arr1[i][j]+arr2[i][j];
        //   printf("%d\t",multiply[j][i]);
      }
      printf("\n");
    }
    
}
int main(){
    printf("enter your row and col");
    scanf("%d %d\n",&m,&n);
    int matrix2[m1][n1];
    int matrix[m][n];
    printf("Enter first matrix\n");
  for (i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
    }
    printf("\n");
  }
  printf("\nEnter 2nd matrix");
  printf("enter your row and col");
  scanf("%d %d\n",&m1,&n1);
  for (i=0;i<m1;i++){
    for(j=0;j<n1;j++){
        scanf("%d",&matrix2[i][j]);
    }
    printf("\n");
  }
  add(matrix,matrix2);
  sub(matrix,matrix2);
  scaler(matrix);
      return 0;
}