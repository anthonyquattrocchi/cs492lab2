#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
	int arg1 = 4;
	int arg2 = 5;
	int pid = getpid();
	printf("Name: Anthony Quattrocchi\n");
	printf("Current PID: %d\n", pid);
	char * str = "Boo";
	int check = syscall(332, arg1, arg2);
	printf("System call my_syscall returned %d with given arguments %d and %d\n", check, arg1, arg2);
	int check2 = syscall(333, str);
	printf("System call my_syscall2 returned %d with given argument %s\n", check2, str);
	return 0;


}
