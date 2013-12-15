struct qu {
	pacijent value;
	qu *next;
};

struct que{
	qu *front, *rear;
};

typedef que Queue;
typedef qu *element;


pacijent FrontQ(Queue *Q) {
	return Q->front->next->value;
}

void EnQueueQ(pacijent x, Queue *Q) {
	element novi = new qu;
	novi->value = x;
	novi->next = NULL;

	Q->rear->next = novi;
	Q->rear = novi;
}

void DeQueueQ(Queue *Q) {
	element brisi = Q->front;
	Q->front = Q->front->next;
	delete brisi;
}

void InitQ(Queue *Q) {
	element novi = new qu;
	novi->next = NULL;

	Q->front = novi;
	Q->rear = novi;
}

bool IsEmptyQ(Queue *Q) {
	return Q->rear == Q->front;
}
