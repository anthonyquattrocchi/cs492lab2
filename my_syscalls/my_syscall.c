#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage int my_syscall(int a, int b){
	int ret = a + b;
	printk("my_syscall: \nThe result of my_syscall is %d\nThe input parameters are %d and %d\nThe PID is %d\n", ret, a, b, current->pid);
	return ret;
}
