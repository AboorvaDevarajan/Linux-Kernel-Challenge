#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aboorva Devarajan");
MODULE_DESCRIPTION("Task 1 Eudyptula Challenge");


static int __init hello_init(void)
{
	printk(KERN_DEBUG "Hello world!\n");
	return 0;
}

static void __exit hello_cleanup(void){

	printk(KERN_DEBUG "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);


