#include <linux/init.h>                                                                              
#include <linux/kernel.h>                                                                            
#include <linux/module.h>                                                                            
#include <linux/sched.h>                                                                             
#include <linux/printk.h>                                                                            
#include <linux/list.h>                                                                              
#include <linux/sched/signal.h>                                                                      
                                                                                                     
int mod_init(void)
{                                                                                  
                                                                                                     
  struct task_struct *task;                                                                          
  struct list_head *cursor;                                                                          
  struct task_struct *child;                                                                         
                                                                                                     
  //printk(KERN_INFO "Hellow world");                                                             
  for_each_process(task)
  { 

	printk(KERN_INFO "Hellow world");	  
    printk(KERN_INFO "Parent %d \n", task->pid);                                                     
                                                                                                     
   	 list_for_each(cursor, &task->children)
   	 {                                                         
      		child = list_entry(cursor, struct task_struct, children);                                      
 	    	 printk(KERN_INFO "\t Child %s | PID: %d \n", child->comm, child->pid);                         
	  }                                                                                                                       
  }                                                                                                  
                                                                                                     	
 	 	return 0;        		
                                                                                                     
}                                                                                                    
                                                                                                     
void mod_exit(void)
{                                                                                 
                                                                                                     
  printk(KERN_INFO "Good bye kernal");                                                             
                                                                                                                          
}                                                                                              
                                                                                                     
module_init( mod_init );                                                                             
module_exit( mod_exit );                                                                             
                                                                                                     
MODULE_DESCRIPTION("Trying");                                     
MODULE_AUTHOR("Rahul");                                                                           
MODULE_LICENSE("GPL");      
