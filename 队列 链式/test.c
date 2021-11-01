#include"queue.h"


void test()
{
   struct  Queue q;
   QueueInit(&q);
   QueuePush(&q, 10);
   QueuePush(&q, 20);
   QueuePush(&q, 30);
   QueuePush(&q, 40);
   QueuePush(&q, 50);
   while (!QueueEmpty(&q))
   {
       printf("%d  ", QueueTop(&q));
       QueuePop(&q);
   }
   QueueDestory(&q);
}
int main()
{
    test();
}