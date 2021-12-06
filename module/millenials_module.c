#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int __init  millenials_init(void) {
    printk(KERN_INFO "Loading millenials kernel module\n");
    return 0;
}

static void __exit millenials_exit(void) {
    printk(KERN_INFO "millenials kernel module successfully unloaded\n");
}

module_init(millenials_init);
module_exit(millenials_exit);