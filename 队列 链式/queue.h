#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QueueDataType;

typedef struct QueueNode
{
	QueueDataType data;
	struct QueueNode* next;
}QNode;

struct Queue
{
	QNode* head;
	QNode* tail;
};

//初始化
void QueueInit(struct Queue* pc);

//插入数据（队尾）
void QueuePush(struct Queue* pc, QueueDataType x);

//删除数据（队头）
void QueuePop(struct Queue* pc);

//取数据（队头）
QueueDataType QueueTop(struct Queue* pc);

//判断队列是否为空
bool QueueEmpty(struct Queue* pc);

//销毁队列
void QueueDestory(struct Queue* pc);