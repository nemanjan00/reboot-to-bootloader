#include <unistd.h>
#include <linux/reboot.h>

void sync(void);
int reboot(int magic, int magic2, int flag, void *arg);

int main(){
	char bootloader[] = {'b', 'o', 'o', 't', 'l', 'o', 'a', 'd', 'e', 'r', '\0'};
	
	sync();
	reboot(LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2, LINUX_REBOOT_CMD_RESTART2, bootloader);

	return 0;
}

