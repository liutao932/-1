#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int QueueDataType;
struct Queue
{
	QueueDataType* a;
	int top;
	int end;
	int capatity;
};
//初始化
void QueueInit(struct Queue* pc);
//打印
void QueuePrint(struct Queue* pc);
//插入
void QueuePush(struct Queue* pc, QueueDataType x);
//删除
void QueuePop(struct Queue* pc);
//取队头
QueueDataType QueueTop(struct Queue* pc);
//判断队列是否为空
bool QueueEmpty(struct Queue* pc);
//销毁队列
void QueueDestory(struct Queue* pc);