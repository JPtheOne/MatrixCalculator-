
// Matrix Calculator who adds, subtracts, and multiplies matrix

#include <stdio.h>
int r1=0,c1=0,r2=0,c2=0,i=0,j=0,k, matrix1[100][100], matrix2[100][100], finalmatrix[100][100];
//r stands for rows, c for columns and i,j are iterarions
//matrix 1 and matrix2 will store the values given by the user, then finalmatrix will store and print the result

void fillMatrix(){ //Function that creates two bidimensional arrays and asks for its parameters
  printf("Enter the number of rows of first matrix: \n");
  scanf("%d", &r1);

  printf("Enter the number of columns of first matrix: \n");
  scanf("%d", &c1);

  printf(" First matrix sizes are:[%d][%d] \n", r1,c1); //This is only the print of rows and columns values of matrix1

  printf("\nEnter elements of 1st matrix: \n"); //saves the values of the matrix
    for (i = 0; i < r1; ++i)
      for (j = 0; j < c1; ++j) {
        printf("Enter element a%d%d: \n", i + 1, j + 1);
        scanf("%d", &matrix1[i][j]);
      }

  printf("Enter the number of rows of second matrix: \n");
  scanf("%d", &r2);

  printf("Enter the number of columns of second matrix: \n");
  scanf("%d", &c2);

  printf("Second matrix sizes are:[%d][%d] \n", r2,c2);   //This is only the print of rows and columns values of matrix1

  printf("\n Enter elements of 2nd matrix: \n");
      for (i=0; i< r2; i++)
          for (j=0; j<c2; j++){
          printf("Enter the element a%d%d: \n", i+1,j+1);
          scanf("%d", &matrix2[i][j]);
          }
}

void addMatrix()
{
    if (r1==r2 && c1==c2){  //Check that given matrixes have same size in order to be able to add
      //Initialize matrix3=0
    for(i=0; i<r1; i++)
    {
        for (j=0; j<c2; ++j)
        {
          finalmatrix[i][j]=0;
        }
    }

  //Add matrix1 to matrix2 and store in matrix3
    for (i=0; i<r1; i++)
    {
      for (j=0; j<c2; j++)
      {
        finalmatrix[i][j]=matrix1[i][j] + matrix2[i][j];
      }
    }

  //print matrix3
  printf("++The resulting matrix is: \n");
    for (i=0; i<r1; i++)
    {
      for (j=0;j<c2; j++)
      {
        printf("%d ", finalmatrix[i][j]);
        if (j==c2-1){
        printf("\n \n");}
      }
    }
  }

  else{
    printf("\n Order of matrixes is different, addition cannot be done \n");}
    printf("Type anything to return to menu");

getch();
}

void subMatrix()
{
     if (r1==r2 && c1==c2){  //Check that given matrixes have same size in order to be able to subtract
      //Initialize matrix3=0
    for(i=0; i<r1; i++)
    {
        for (j=0; j<c2; ++j)
        {
          finalmatrix[i][j]=0;
        }
    }

  //Sub matrix1 to matrix2 and store in matrix3
    for (i=0; i<r1; i++)
    {
      for (j=0; j<c2; j++)
      {
        finalmatrix[i][j]=matrix1[i][j] - matrix2[i][j];
      }
    }

  //print matrix3
  printf("--The resulting matrix is: \n");
    for (i=0; i<r1; i++)
    {
      for (j=0;j<c2; j++)
      {
        printf("%d ", finalmatrix[i][j]);
        if (j==c2-1){
        printf("\n \n");}
      }
    }
  }

  else{
    printf("\n Order of matrixes is different, subtraction cannot be done \n");}
  printf("Type anything to return to menu");
getch();
}

void mulMatrix(){
  if (c1==r2)
  {
     //Initialize matrix3=0
    for(i=0; i<r1; i++)
    {
        for (j=0; j<c2; ++j)
        {
          finalmatrix[i][j]=0;
        }
    }

    // Loops to multiply variables
    for (int i=0; i<r1; ++i)
    {
      for (int j=0; j<c2; j++)
      {
        for (int k=0; k <c1; k++)
        {
          finalmatrix[i][j] += matrix1[i][k]*matrix2[k][j];
        }
      }
    }

    //print matrix3
    printf("xx The resulting matrix is: \n");
    for (i=0; i<r1; i++)
    {
      for (j=0;j<c2; j++)
      {
        printf("%d ", finalmatrix[i][j]);
        if (j==c2-1){
        printf("\n \n");}
      }
    }
  }
  else {
  printf("\n Multiplication of matrixes cannot be done if their order does not respect the rules. \n\n");}
  printf("Type anything to return to menu");
getch();
}

int main(){
    int menu=0;
        fillMatrix();
        printf("\n Type the number of the option you desire: \n");
    do{
        printf("\n 1. Add matrixes \n");
        printf("\n 2. Subtract matrixes \n");
        printf("\n 3. Multipy matrixes \n");
        printf("\n 4.Add new values to calculate  \n");
        printf("\n 5. To end and exit \n");
        scanf("%d", &menu);

        switch(menu){
            case 1: addMatrix();
            break;
            case 2: subMatrix();
            break;
            case 3: mulMatrix();
            break;
            case 4: fillMatrix();
            break;
            case 5: printf("Bye bye miss american pie");
        }
    }while(menu!=5);
    printf("-------> PROGRAM FINISHED");
    return 0;
}
