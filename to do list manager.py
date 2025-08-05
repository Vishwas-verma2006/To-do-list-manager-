to do list manager made by me 
def add_task(tasks):
    task = input("Enter your task:- ")
    tasks.append(task)
    print("Your task added successfully !")
    
def view_task(tasks):
    if len(tasks) == 0:
        print("No task to show !")
    else:
        print("Your task:-")
        for i , task in enumerate(tasks,start =1): # for i , tasks in enumerate(task):
            print(f"{i}. {task}")                   #     print(f"{i+1} .{task}") you can use this also !
            
def main():
    tasks=[]
    while True:
        print("Welcome to the 'To do lits MANAGER' ~")
        print("1. Add Task !")
        print("2. View Taks !")
        print("3. Exit program !")
        
        choice = int(input("Enter the number:- "))
        
        if choice == 1:
            add_task(tasks)
            
        elif choice == 2:
            view_task(tasks)
            
        elif choice == 3:
            print("Exiting program !")
            break
        
        else :
            print("Invalid choice !")

if __name__ == "__main__":
  main()


program of to do list manager in some extra features made by me 

def add_task(tasks):
    if len(tasks) <100:
        task = input("Enter your task:- ")
        tasks.append({"text" :task , "completed":False})
        print("Task added succesfully !")
        
    else:
        print("Task list full !(Maximum than 100)")
        
def view_task(tasks):
    if len(tasks)==0:
        print("No taks to show !")
        
    else:
        print("Your task:=============== ")
        for i,task in enumerate(tasks,start=1):
            status = "#" if task["completed"] else " "
            print(f"{i}. {status} {task["text"]}")
            print("\n===================")
            
    
            
def delete_task(tasks):
    view_task(tasks)
    
    
    if len(tasks)==0:
        return 
    
    try:
        task_num = int(input("Enter the number of task which you want to delete:- "))
        if 1<=task_num <=len(tasks):
            print(f"Your current task:- {tasks[task_num-1]["text"]}")
            delete_task= tasks.pop(task_num-1)
            print(f"Task '{delete_task["text"]}' deleted succesfully !")
            
        else:
            print("Invlid number entered !")
            
    except ValueError:
        print("You can only enter integer or number")
        

def edit_task(tasks):
    view_task(tasks)
    
    
    if len(tasks)==0:
        return 
    
    try :
        task_num= int(input("Enter number of task which you want to edit:- "))
        if 1<= task_num <=len(tasks):
            print(f"Your current task:- {tasks[task_num-1]["text"]}")
            new_task = input("Enter your new task:- ")
            tasks[task_num-1]["text"] = new_task
            print(f"Your task Edited succesfully !")
        
        else:
            print("Invalid number entered !")
            
    except ValueError:
        print("You can only enter number")
        
        
def mark_task(tasks):
    view_task(tasks)
    
    
    if len(tasks)==0:
        return
    
    try:
        task_num= int(input("Enter the number you want to mark as completed/Incomplete:- "))
        if 1<= task_num <=len(tasks):
            tasks[task_num-1]["completed"] = not tasks[task_num-1]["completed"]
            status = "completed" if tasks[task_num-1]["completed"] else "Incomplete"
            print(f"Your current task mark as {status}")
            
        else:
            print("Invalid number entered !")
            
    except ValueError:
            print("You can only enter number")
            
def main():
    tasks = []
    while True:
        
        print("\n==========Welcome to the 'TO DO LIST MANAGER ~'===============")
        print("1. Add task")
        print("2. View task")
        print("3. Delete task")
        print("4. Edit task")
        print("5. Mark task")
        print("6. Exit program")
    
        choice = int(input("Enter your choice:- "))
        
        if choice == 1:
            add_task(tasks)
            
        elif choice == 2:
            view_task(tasks)
            
        elif choice == 3:
            delete_task(tasks)
            
        elif choice == 4:
            edit_task(tasks)
            
        elif choice == 5:
            mark_task(tasks)
            
        elif choice == 6:
            print("Thanking you for using 'TO DO LIST MANAGER' Good beye")
            break
            
        else :
            print("Invalid choice !")
            
if __name__ =="__main__":
    main()
