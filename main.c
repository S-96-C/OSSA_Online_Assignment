//Name - Cooray P S L
//IT Number - IT20638054
//Paper Number - 4
//Group - 2.2

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define NUM_THREADS 2
void * thread1()
{
  for (int x=40; x<=100; x++){
    printf("Square Number :%d\n", x*x);
  }
  printf("");
  return 0;
}

void * thread2()
{
  for (int y=10; y<=70; y++){
    printf("Cubic Number :%d\n", y*y);
  }
  return 0;
}
int main()
{
  pthread_t tid1[NUM_THREADS];
  for (int z=0; z<NUM_THREADS; z++){
    pthread_create(&tid1[z], NULL, thread1,NULL);
  }
  
  pthread_t tid2[NUM_THREADS];
  for (int j=0; j<NUM_THREADS; j++){
    pthread_create(&tid2[j], NULL, thread2,NULL);
    pthread_join(tid2,NULL);
  }

  int j;
  printf("Enter All Even Numbers :");
  scanf("%d", &j);
  for (int q=1; q<=j; q++){
    printf("%d\n", q*q*q);
  }

  return 0;
}