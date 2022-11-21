#include<shell.h>


int main()
{
    int i = 1;


      pid_t pid1;
      char *argv[] = {"/bin/ls" , "-l" , "-a" , "-la" , NULL};
      char *argc[] = {"/bin/bash" , "NULL" ,NULL};
      char *argd[] = {"/bin/exit" , "NULL" , NULL};
      int i = 1;
      pid = fork();
      while (i = 1)
      {
          if (pid1 == -1)
            return -1;
          if (pid1 == 0)
          {
            printf("$");
          execve(argv[0] , argv , NULL);
          execve(argc[0] , argc , NULL);
          execve(argd[0] , argd , NULL);
          }
          else
          {
              wait(NULL);
              printf("parent process is done\n");

          }
      }
    return 0;
}
