PROGRAM OF TO DO LIST MANAGER 
#include<stdio.h>
#include<conio.h>
void main()
{ char task[100];
  int choice;
  
  while(1)
  { printf("\nTO DO LIST MANAGER PROGRAM\n");
    printf("1.Add task:\n");
    printf("2.View task:\n");
    printf("3.Exit program:\n");
    printf("ENTER THE CHOICE:");
    scanf("%d",&choice);
    
    switch (choice)
    { case 1:
              
              printf("Enter your task:- ");
              getchar();
              fgets(task,100,stdin);
              printf("Task added successfully--!\n");
      break;
      case 2:
              if(task[0]=='\0')
              {
                printf("No task to show now--!\n");  
              }
        else
        {
            printf("your task -- %s\n",task);
        }
        break;
      case 3:
            printf("Exiting program --GOODBEYE--!\n");
          exit(1);
            
    default:
    printf("INVALID CHOICE PLEASE TRY AGAIN--!\n");
    
    }

  }
  
}
 
program of to do list manager (you can write 5 task in this program)
#include<stdio.h>
#include<stdlib.h>
void main()
{ char task[5][100];
  int taskcount=0;
  int choice;
  
  while(1)
  {
    printf("\nWELCOME TO THE TO DO LIST MANAGER\n");
    printf("1. ADD TASK\n");
    printf("2. VIEW TASK\n");
    printf("3. EXIT PROGRAM\n");
    printf("ENTER THE CHOICE:-");
    scanf("%d",&choice);
  
  
  switch (choice) {
  
  case 1: 
         if(taskcount<5)
        {
           printf("Enter the new task:-");
           getchar();
           fgets(task[taskcount],100,stdin);
           
           
           for(int i=0; task[taskcount][i]=='\0'; i++)
           {
               if(task[taskcount][i]=='\n')
               { task[taskcount][i]='\0';  }
                  
            
           }
           
           taskcount++;
            printf("--TASK ADDED SUCCESFULLY--\n");  
        } 
         else
         {
            printf("TASK LIST IS FULL\n"); 
         }
  break;
   case 2:
          if(taskcount==0)
          {
            printf("NO TASK TO SHOW\n");  
          }
            else
            {
                printf("YOUR TASK:-\n");
                for(int i=0; i<taskcount; i++)
                {
                    printf("%s",task[i]);    
                }
            }

    break;
   case 3:
          printf("EXITING PROGRAM `~~GOODBEYE~~!");
          exit(1);
   default:
          printf("INAVLID CHOICE\n");
    break;
  }    
    
}
      
  } 
    
program of to do list manager Made by me 
#include<stdio.h>
#include<stdlib.h>

#define Maxlenght 100
#define Maxtask 100


void addTask (char task[][Maxlenght] , int *taskcount  ) 
{ if(*taskcount < Maxtask)
{   printf("What's next for Me !\n");
    printf("Enter the task:-");
    getchar();
    fgets(task[*taskcount] , Maxlenght , stdin);
    if(task[*taskcount] == '\n')
    {
        task[*taskcount] =='\0';
    }
    (*taskcount)++;
    printf("Task added succsefully!\n");
}
else{
    printf("Taks list is Full!\n");
}
    
} 

void viewTask (char task[][Maxlenght] , int taskcount)
{
    if(taskcount == 0)
    {
        printf("No task to show !\n");
    }
    else{
        printf("Your Task --\n");
        for (int i=0;  i<taskcount;  i++)
        {
            printf("%s",task[i]);
        }
    }
}

int main()
{
    char task[Maxtask][Maxlenght];
    int taskcount=0;
    int choice;
    
    while(1) {
    printf("\n Welcome \n");
    printf("1. Add Task\n");
    printf("2. View Task\n");
    printf("3. Exit Program\n");
    printf("Enter the choice:- ");
    scanf("%d",&choice);
    
   
  
    switch(choice)
    {
        case 1:
        addTask(task , &taskcount);
        break;
        
        case 2: 
        viewTask(task ,taskcount);
        break;
        
        case 3:
        printf("Exiting the Progam\n");
        printf("GOOD BEYE!\n");
        exit(1);
        break;
        
        default:
        printf("Invalid choice Please Try again!\n");
    }
  }

}   
  
Program of to do list manager some changes

#include<stdio.h>
#include<stdlib.h>

void addtask (char task[100][100], int *taskcount)
{
 if(*taskcount<100)
 {
   printf("Enter your task:- ");
   getchar();
   fgets(task[*taskcount],100,stdin);
    
    for(int i=0; task[*taskcount][i]=='\0'; i++)
    if(task[*taskcount][i]=='\n')
       {
           task[*taskcount][i]=='\0';
       }
   
   
   (*taskcount)++;
   printf("Task added sucessfully !\n");
 } 
 
 else
 {
    printf("Task list full!\n");
 }
} 

void viewtask (char task[100][100] , int taskcount)
{
    if(taskcount == 0)
    {
        printf("No task to show !\n");
    }
    else{
        printf("Your Task --\n");
        for (int i=0;  i<taskcount;  i++)
        {
            printf("%s",task[i]);
        }
    }
}

int main()
{
    char task[100][100];
    int taskcount=0;
    int choice;
    
    while(1)
    {
        printf("\nWlcome to the 'TO DO LIST MANAGER' !\n");
        printf("1. ADD TASK\n");
        printf("2. VIEW TASK\n");    
        printf("3. EXIT PROGRAM \n");
        printf("ENTER YOUR CHOICE:-");
        scanf("%i",&choice);
        
        switch (choice)
        {
            case 1:
            addtask(task,&taskcount);
            break;
            
            case 2:
            viewtask(task, taskcount);
            break;
            
            case 3:
            printf("EXITING PRGRAM\n");
            exit(1);
            break;
            
            default:
            printf("Invalid choice !\n");
        }
    }
}

