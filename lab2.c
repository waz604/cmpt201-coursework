#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {

  char str[250];
  while (1) {
    printf("Enter progras to run \n");
    scanf("%s", str);
    pid_t pid = fork();

    if (pid == 0) {

      printf("Enter programs to run \n ");

      scanf("%s", str);
      execl(str, str, NULL);
    } else {
      int status;
      waitpid(pid, &status, 0);
    }
  }

  return 0;
}
