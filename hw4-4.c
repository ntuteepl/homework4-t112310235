
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int matrix[n][n];
    int boy=0, girl=0,max=0;
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

for(int c=0;c<n;c++)
{

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]>max){

                max=matrix[i][j];
                boy=i;
                girl=j;

                }
                }

            }
for(int i=0;i<n;i++)
{
 matrix[boy][i]=0;
 matrix[i][girl]=0;
}


printf("boy %d pair with girl %d.\n",boy+1,girl+1);
max=0;
}

    return 0;

}
