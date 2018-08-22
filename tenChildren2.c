#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
  int counter = 0;
  int pid;

  while(counter < 10){
    pid = fork();
    printf("%d \n", pid);
    if(!pid){
      _exit(0);
    }

    else{
      counter ++;
      printf("%d \n", counter);
    }
  }
}
