typedef int element;

struct qu {
	pacijent elementi[1000];
	element front, rear;
};

typedef struct qu Queue;

pacijent FrontQ(Queue *Q) {
	return Q->elementi[Q->front];
}

int AddOne(int n) {
	return (n + 1) % 1000;
}

void EnQueueQ(pacijent x, Queue *Q) {
	Q->rear = AddOne(Q->rear);
	Q->elementi[Q->rear] = x;
}

void DeQueueQ(Queue *Q) {
	Q->front = AddOne(Q->front);
}

void InitQ(Queue *Q) {
	Q->front = 0;
	Q->rear = 999;
}

bool IsEmptyQ(Queue *Q) {
	return Q->front == AddOne(Q->rear);
}
