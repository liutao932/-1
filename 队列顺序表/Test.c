#include"Queue.h"

void test()
{
	struct Queue q;
	QueueInit(&q);
	QueuePush(&q, 10);
	QueuePush(&q, 20);
	QueuePop(&q);
	QueuePop(&q);
	QueuePush(&q, 30);
	QueuePush(&q, 40);
	QueuePush(&q, 50);
	QueuePrint(&q);
}
int main()
{
	test();
}