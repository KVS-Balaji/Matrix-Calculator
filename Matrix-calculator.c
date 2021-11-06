#include <stdio.h>
#include <math.h>

int main()
{
    int option, sum=0;
    int m, n, m1, n1, m2, n2;
    int i, j, k, i1, j1, i2, j2;
    int matrix[100][100], matrix1[100][100], matrix2[100][100];
    int determinant, addition[100][100], subtraction[100][100], multiply[100][100];

    do
    {
        printf("This is a matrix caluclator.\nYou can choose one of the functions displayed below by typing 1, 2, 3 or 4 or type 5 to exit the program.\n");
        printf("1. Determinant of a matrix.\n2. Addition of two matrices.\n3. Subtraction of two matrices.\n4. Multiplication of two matrices.\n5. Exit.\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
            {
                do
                {
                printf("Enter the order of the matrix.\n");
                printf("m(number of rows): ");
                scanf("%d", &m);
                printf("n(number of coloums): ");
                scanf("%d", &n);

                if(m!=n)
                    printf("Determinant cannot be calculated for non-square matrices.\n");
                    
                }while(m!=n);
                
                for(i=1; i<=m; i++)
                {
                    for(j=1; j<=n; j++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }

                for(i=1; i<=m; i++)
                {
                for(j=1; j<=n; j++)
                {
                    printf(" %d ", matrix[i][j]);
                }
                printf("\n");
                }

                if(m==n && m==2)
                determinant = abs((matrix[1][1]*matrix[2][2])-(matrix[1][2]*matrix[2][1]));
                if(m==n && m==3)
                determinant = abs(matrix[1][1]*((matrix[2][2]*matrix[3][3]) - (matrix[2][3]*matrix[3][2])) - matrix[1][2]*((matrix[2][1]*matrix[3][3]) - (matrix[3][1]*matrix[2][3])) + matrix[1][3]*((matrix[2][1]*matrix[3][2]) - (matrix[3][1]*matrix[2][2])));
                if(m!=n)
                {
                printf("Determinant cannot be calculated for this matrix.\n");
                return 0;
                }

                printf("The determinant of your matrix is: %d", determinant);

                break;
            }
            case 2:
            {
                do
                {
                    printf("Enter the order of the first matrix.\n");
                    printf("m(number of rows): ");
                    scanf("%d", &m1);
                    printf("n(number of coloums): ");
                    scanf("%d", &n1);
                    printf("Enter the order of the second matrix.\n");
                    printf("m(number of rows): ");
                    scanf("%d", &m2);
                    printf("n(number of coloums): ");
                    scanf("%d", &n2);

                    if(m1!=m2 || n1!=n2)
                        printf("Matrices of the order (%dx%d) and (%dx%d) cannot be added.\n", m1, n1, m2, n2);
                
                }while(m1!=m2 || n1!=n2);

                printf("Enter the values of each entry in matrix 1.\n");
                for(i1=0; i1<m1; i1++)
                {
                    for(j1=0; j1<n1; j1++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i1+1, j1+1);
                        scanf("%d" , &matrix1[i1][j1]);
                    }
                }
                printf("This is your first matrix.\n");
                for(i1=0; i1<m1; i1++)
                {
                    for(j1=0; j1<n1; j1++)
                    {
                        printf(" %d ", matrix1[i1][j1]);
                    }
                    printf("\n");
                }

                printf("Enter the values of each entry in matrix 2.\n");
                for(i2=0; i2<m2; i2++)
                {
                    for(j2=0; j2<n2; j2++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i2+1, j2+1);
                        scanf("%d" , &matrix2[i2][j2]);
                    }
                }
                printf("This is your second matrix.\n");
                for(i2=0; i2<m2; i2++)
                {
                    for(j2=0; j2<n2; j2++)
                    {
                        printf(" %d ", matrix2[i2][j2]);
                    }
                    printf("\n");
                }

                printf("\n");
                printf("The addition of matrix 1 and 2 is: \n");
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n1; j++)
                    {
                        addition[i][j] = matrix1[i][j] + matrix2[i][j];
                    }
                }
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n1; j++)
                    {
                        printf(" %d ", addition[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3:
            {
                do
                {
                    printf("Enter the order of the first matrix.\n");
                    printf("m(number of rows): ");
                    scanf("%d", &m1);
                    printf("n(number of coloums): ");
                    scanf("%d", &n1);
                    printf("Enter the order of the second matrix.\n");
                    printf("m(number of rows): ");
                    scanf("%d", &m2);
                    printf("n(number of coloums): ");
                    scanf("%d", &n2);

                    if(m1!=m2 || n1!=n2)
                        printf("Matrices of the order (%dx%d) and (%dx%d) cannot be added.\n", m1, n1, m2, n2);
                
                }while(m1!=m2 || n1!=n2);

                printf("Enter the values of each entry in matrix 1.\n");
                for(i1=0; i1<m1; i1++)
                {
                    for(j1=0; j1<n1; j1++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i1+1, j1+1);
                        scanf("%d" , &matrix1[i1][j1]);
                    }
                }
                printf("This is your first matrix.\n");
                for(i1=0; i1<m1; i1++)
                {
                    for(j1=0; j1<n1; j1++)
                    {
                        printf(" %d ", matrix1[i1][j1]);
                    }
                    printf("\n");
                }

                printf("Enter the values of each entry in matrix 2.\n");
                for(i2=0; i2<m2; i2++)
                {
                    for(j2=0; j2<n2; j2++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i2+1, j2+1);
                        scanf("%d" , &matrix2[i2][j2]);
                    }
                }
                printf("This is your second matrix.\n");
                for(i2=0; i2<m2; i2++)
                {
                    for(j2=0; j2<n2; j2++)
                    {
                        printf(" %d ", matrix2[i2][j2]);
                    }
                    printf("\n");
                }

                printf("\n");
                printf("Matrix 1 - Matrix 2 is: \n");
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n1; j++)
                    {
                        subtraction[i][j] = matrix1[i][j] - matrix2[i][j];
                    }
                }
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n1; j++)
                    {
                        printf(" %d ", subtraction[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 4:
            {
                do
                {
                    printf("Enter the order of the first matrix.\n");
                    printf("m(number of rows): ");
                    scanf("%d", &m1);
                    printf("n(number of coloums): ");
                    scanf("%d", &n1);
                    printf("Enter the order of the second matrix.\n");
                    printf("m(number of rows): ");
                    scanf("%d", &m2);
                    printf("n(number of coloums): ");
                    scanf("%d", &n2);

                    if(n1!=m2)
                        printf("Matrices of the order (%dx%d) and (%dx%d) cannot be multiplied.\n", m1, n1, m2, n2);
                    
                }while(n1!=m2);

                m = m1;
                n = n2;

                printf("Enter the values of each entry in matrix 1.\n");
                for(i1=0; i1<m1; i1++)
                {
                    for(j1=0; j1<n1; j1++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i1+1, j1+1);
                        scanf("%d" , &matrix1[i1][j1]);
                    }
                }
                printf("This is your first matrix.\n");
                for(i1=0; i1<m1; i1++)
                {
                    for(j1=0; j1<n1; j1++)
                    {
                        printf(" %d ", matrix1[i1][j1]);
                    }
                    printf("\n");
                }

                printf("Enter the values of each entry in matrix 2.\n");
                for(i2=0; i2<m2; i2++)
                {
                    for(j2=0; j2<n2; j2++)
                    {
                        printf("Enter the value of entry (%d,%d): ", i2+1, j2+1);
                        scanf("%d" , &matrix2[i2][j2]);
                    }
                }
                printf("This is your second matrix.\n");
                for(i2=0; i2<m2; i2++)
                {
                    for(j2=0; j2<n2; j2++)
                    {
                        printf(" %d ", matrix2[i2][j2]);
                    }
                    printf("\n");
                }

                for(i=0; i<m; i++) 
                {
                for(j=0; j<n; j++) 
                {
                    for(k=0; k<m2; k++) 
                    {
                    sum += matrix1[i][k]*matrix2[k][j];
                    }
                    multiply[i][j] = sum;
                    sum = 0;
                }
                }
                printf("Product of matrix 1 and 2 is: \n");
                for(i=0; i<m; i++) 
                {
                for(j=0; j<n; j++)
                    printf(" %d ", multiply[i][j]);
            
                printf("\n");
                }
                break;
            }
            case 5:
            {
                printf("You chose to quit the program.\n");
                return 0;
            }
        }
        printf("\n");
    }while(m!=5);
}