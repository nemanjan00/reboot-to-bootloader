#include <unistd.h>
#include <stdio.h>
#include <linux/reboot.h>
#include <errno.h>

int main(){
	char bootloader[] = {'b', 'o', 'o', 't', 'l', 'o', 'a', 'd', 'e', 'r', '\0'};

	int res;
	
	sync();

	res = reboot(LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2, LINUX_REBOOT_CMD_RESTART2, &bootloader);

	if(res == -1){
		perror("reboot()");
	}

	return 0;
}

