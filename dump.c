#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("mount -o remount,rw /");
	system("/etc/init.d/kdump-tools start");

	/* BUG! just reboot. */
	system("dmesg > /var/lib/kdump/bug");
	system("reboot -f");

	return 0;
}
