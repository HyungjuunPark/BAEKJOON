//2021270632_박형준_2번
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15

typedef struct Queue {
    int front, rear;
    int* data;
}Queue;

int size, inDegree[MAX_SIZE];
int node[MAX_SIZE][MAX_SIZE];

void EnQ(Queue* q, int data) {
    if (q->front == (q->rear + 1)) 
    {
        puts("Queue is Full");
        return;
    }
    else
    {
        q->rear = q->rear + 1;
        q->data[q->rear] = data;
    }
    return;
}
int DeQ(Queue* q) {
    if (q->front == q->rear) 
    {
        puts("Queue is Empty");
        return;
    }
    else
    {
        q->front = q->front + 1;
        return q->data[q->front];
    }
}

void topologySort() {
    int result[MAX_SIZE];
    Queue q;
    q.front = 0;
    q.rear = 0;
    q.data = malloc(sizeof(int) * MAX_SIZE);

    for (int i = 1; i <= size; i++) {
        if (inDegree[i] == 0) EnQ(&q, i);
    }

    for (int i = 1; i <= size; i++) {
        if (q.front == q.rear) {
            printf("사이클이 발생했습니다.\n");
            return;
        }

        int x = DeQ(&q);
        int cnt = 0;
        result[i] = x;

        for (int y = 1; y <= size; y++)
            if (node[x][y] == 1) {
                node[x][y] = 0;
                if (--inDegree[y] == 0)
                    EnQ(&q, y);
            }
    }

    for (int i = 1; i <= size; i++) {
        if (i == size)
            printf("%d", result[i]);
        else
            printf("%d->", result[i]);
    }
}

int main() {
    size = 9;

    node[1][3] = 1;
    inDegree[3]++;
    node[3][7] = 1;
    inDegree[7]++;
    node[7][4] = 1;
    inDegree[4]++;
    node[4][9] = 1;
    inDegree[9]++;
    node[9][2] = 1;
    inDegree[2]++;
    node[2][5] = 1;
    inDegree[5]++;
    node[5][8] = 1;
    inDegree[8]++;
    node[8][6] = 1;
    inDegree[6]++;
    

    topologySort();
}