#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#define SHMKEY ((key_t)1497)

typedef struct
{
  int value;
} shared_mem;

shared_mem *total;

// process 1 increases the value of shared variable "total" * by some number

int main()
{
  int shmid, pid1, pid2, pid3, pid4, ID, status;
  char *shmadd;
  shmadd = (char *)0;

  // create and connect to a shared memory segment
  if ((shmid = shmget(SHMKEY, sizeof(int), IPC_CREAT | 0666)) < 0)
  {
    perror("shmget");
    exit(1);
  }
  if ((total = (shared_mem *)shmat(shmid, shmadd, 0)) == (shared_mem *)-1)
  {
    perror("shmat");
    exit(0);
  }
  return 0;
}
