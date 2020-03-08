#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage int my_syscall2(char * arr) {
	int count = 0;
	int ret = 0;
	int size = 0;
	while(arr[size] != '\0'){
		size++;
	}
	if(size > 128){
		return 23;
	}
	else{
		while(arr[count] != '\0'){
			if(arr[count] == 'o' || arr[count] == 'O'){
				count++;
				ret++;
			}
			else{
				count++;
			}
		}
	}
	printk("my_syscall2: \nThe result of mysyscall2 is %d\nThe input string is %s\nThe PID is %d", ret, arr, current->pid);
	return ret;
}
		
