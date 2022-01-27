 /*
 * wrapper.c by raresteak
 * Run a user controlled script as root.   Experimentation only!
 *
 * prerequisites:
 *    You must already have root access to change ownership to root
 *    and set the binary suid.
 *
 * usage:
 *    1. gcc wrapper.c -o wrapper
 *    2. sudo chown root:root ./wrapper
 *    3. sudo chmod 4555 ./wrapper
 *    4. permissions on wrapper should look like:
 *       -r-sr-xr-x 
 *    5. Create a file called myscript.sh in the same directory
 *       as wrapper with a regular user
 *       a. Put whatever you want in the script
 *       b. chmod +x myscript.sh
 *    6. Run ./wrapper
 *       a. myscript.sh will then be run as root
 *
 * WARNING:
 *      This is only for experimentation.
 *      What you put in myscript will run as root, be careful!
 *      This is very insecure way to run a script as root, 
 *      sudo should be used instead.
 *    
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    setuid( 0 );
    system( "./myscript.sh" );
    return 0;
}
