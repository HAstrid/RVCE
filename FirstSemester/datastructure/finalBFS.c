#include <stdio.h>
#define MAX 10
int rear = (-1), front = (-1), i;
int size;

void breadth_first_search(int adj[][MAX], int visited[], int start)
{
    
    int queue[MAX];
    queue[++rear] = start;
    visited[start] = 1;
    while (rear != front)
    {
        start = queue[++front];
        //printf("%d",start);
        for (i = 0; i < size; i++)
        {
            if (adj[start][i] == 1 && visited[i] == 0)
            {                
                queue[++rear] = i;
                printf("%d-%d",start,i);
                visited[i] = 1;
            }
        }
    }
}
int main(){
    int start;
    int visited[MAX] = {0};
    int adj[MAX][MAX], i, j;
    
    printf("\nEnter nodes\n");
    scanf("%d",&size);
    printf("\n Enter the adjacency matrix: ");
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            scanf("%d", &adj[i][j]);
    printf("\n adjacency matrix is : ");
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++)
            printf("%d", adj[i][j]);
        printf("\n");
    }
    printf("\nEnter source \n");
    scanf("%d", &start);

    breadth_first_search(adj, visited, start);
    return 0;
}