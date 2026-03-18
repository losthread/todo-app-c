#include <stdio.h>
#include <stdbool.h>

// Struct definition
struct Task
{
  int id;
  char name[100];
  char category[20];
  int priority;
  bool completed;
};

// Array of tasks and no. of tasks in the array
struct Task tasks[100];
int taskCount = 0;

int showMenu()
{
  printf("\n\n");
  printf("====== To-Do App ======\n");
  printf("1. Add Task\n");
  printf("2. Save and Exit\n");

  // take user's choice
  int choice;
  printf("Enter your choice: ");
  scanf("%d", &choice);

  printf("\n");

  return choice;
}

int main()
{

  while (true)
  {
    // take user's choice
    int choice = showMenu();

    switch (choice)
    {
    case 1:
      break;
    
    default:
      printf("Enter a number between 1 and 5\n");
      break;
    }
  }

  return 0;
}