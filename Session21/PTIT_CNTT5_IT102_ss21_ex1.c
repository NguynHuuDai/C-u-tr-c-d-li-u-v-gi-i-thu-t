//
// Created by hp on 7/23/2025.
//

#include <stdio.h>
#include <stdlib.h>


int MATRIC[3][3];
void matric(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            MATRIC[i][j] = 0;
        }
    }
}
void addMatric(int U, int V)
{
    MATRIC[U][V] = 1;
    MATRIC[V][U] = 1;
}
void PrintMatric()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", MATRIC[i][j]);
        }
        printf("\n");
    }

}
int main(){
    int U = 0, V = 1;
    matric();
    addMatric(U, V);
    PrintMatric();


    return 0;
}