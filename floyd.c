
#include<stdio.h>
#define inf 20

void floyd(int graph[4][4]){

    for(int k=0;k<4;k++)
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
    {
        if(graph[i][j] > (graph[i][k]+graph[k][j]) && graph[i][k]!=inf && graph[k][j]!=inf){
                graph[i][j] = graph[i][k]+graph[k][j];
        }
    }

     for(int i=0;i<4;i++)
        {for(int j=0;j<4;j++)
           {    if(graph[i][j] == inf)
                    printf("inf ");
                else
                    printf("%d ",graph[i][j]);
           }printf("\n");
}
}
int main(){

    int graph[4][4] = {
    { 0 , 5, inf, 10 },
    { inf, 0, 3 ,inf   },
    { inf, inf, 0, 1 },
    { inf, inf, inf, 0  }
    };

    floyd(graph);



}
