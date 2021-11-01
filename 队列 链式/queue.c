#include"queue.h"

//初始化
void QueueInit(struct Queue* pc)
{
	assert(pc);
	pc->head = pc->tail = NULL;
}

//插入数据（队尾）
void QueuePush(struct Queue* pc, QueueDataType x)
{
	assert(pc);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	newnode->data = x;
	newnode->next = NULL;
	if (pc->tail == NULL)
	{
		pc->head = pc->tail = newnode;
	}
	else
	{
		pc->tail->next = newnode;
		pc->tail = newnode;
	}
}

//删除数据（队头）
void QueuePop(struct Queue* pc)
{
	assert(pc);
	assert(pc->head);
	if (pc->head->next == NULL)
	{
		free(pc->head);
		pc->head = pc->tail = NULL;
	}
	else
	{
		QNode* next = pc->head->next;
		free(pc->head);
		pc->head = next;
	}
}

//取数据（队头）
QueueDataType QueueTop(struct Queue* pc)
{
	assert(pc);
	assert(pc->head);
	return pc->head->data;
}

//判断队列是否为空
bool QueueEmpty(struct Queue* pc)
{
	assert(pc);
	return pc->head == NULL;
}

//销毁队列
void QueueDestory(struct Queue* pc)
{
	assert(pc);
	while (pc->head != NULL)
	{
		QNode* next = pc->head->next;
		free(pc->head);
		pc->head = next;
	}
}