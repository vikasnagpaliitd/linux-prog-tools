//This file demo multiple threads 
// this change on a new branch
#include <stdio.h>
#include <stdlib.h>
#include<pthread.h> // For thread library
#include<sys/types.h>

void print_sequence(const char * s);
void * thread_function(void *arg);

int main()
{
    pthread_t thread_id; 
    int ret;

    printf("one");
    ret=pthread_create(&thread_id, NULL, thread_function, "Spawned Thread");
    if (ret != 0)
    {
    printf("Error in Creating Thread\n");
    exit(ret);
    }
    print_sequence("Main thread:");
    pthread_join(thread_id,NULL);
    exit(0);

}

void print_sequence(const char * s)
{
    int i;

    for(i=1;i<=5;i++)
    {
        printf("%s:%d\n", s, i);
        //system("sleep 1");
    }
}

void * thread_function(void *arg)
{
    print_sequence(arg);
    return NULL;
}

