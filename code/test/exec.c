/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid1;
    PrintString("In Exec Start\n");
    MySleep(100000000);

    PrintString("In Exec End\n");
}
