#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
  int pid;
  for(int i =1; i <= 10; i++){

    pid = fork();
    if(!pid){
      exit(0);
    }

  }
  printf("Please, press enter after looking at the zombie process...");
  (void)getchar();

  return 0;
}
