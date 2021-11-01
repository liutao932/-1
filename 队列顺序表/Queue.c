#include"Queue.h"

//初始化
void QueueInit(struct Queue* pc)
{
	assert(pc);
	pc->a = NULL;
	pc->capatity = pc->top = pc->end = 0;
}
//插入
void QueuePush(struct Queue* pc, QueueDataType x)
{
	assert(pc);
	if (pc->end == pc->capatity)
	{
		int newcapatity = pc->capatity == 0 ? 10 : pc->capatity * 2;
		QueueDataType* tmp = (QueueDataType*)realloc(pc->a, sizeof(QueueDataType) * newcapatity);
		pc->a = tmp;
		pc->capatity = newcapatity;
	}
	pc->a[pc->end++] = x;
}
//删除
void QueuePop(struct Queue* pc)
{
	assert(pc);
	assert(pc->end > 0);
	int begin = 1;
	for (int i = begin; i < pc->end; i++)
	{
		pc->a[begin - 1] = pc->a[begin];
	}
	pc->end--;
}
//打印
void QueuePrint(struct Queue* pc)
{
	assert(pc);
	for (int i = 0; i < pc->end; i++)
	{
		printf("%d ", pc->a[i]);
	}
}
//取队头
QueueDataType QueueTop(struct Queue* pc)
{
	assert(pc);
	assert(pc->end > 0);
	return pc->a[pc->top];
}
//判断队列是否为空
bool QueueEmpty(struct Queue* pc)
{
	assert(pc);
	return pc->end == 0;
}
//销毁队列
void QueueDestory(struct Queue* pc)
{
	free(pc->a);
}