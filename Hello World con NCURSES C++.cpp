#include <ncurses.h>

// Libreria estandar de C++ que reemplaza a la antigua conio.h
// http://www.tldp.org/HOWTO/NCURSES-Programming-HOWTO/helloworld.html

// Más información sobre el uso y utilidad de la libreria ncurses.h en:
//   * http://www.juntadeandalucia.es/averroes/~41009822/inf/dfsi/Iniciacion%20a%20ncurses.pdf
//   * http://www.tldp.org/HOWTO/NCURSES-Programming-HOWTO

// Development Kit (Library of Widgets):
//   * CKD: Curses Development Kit (a library of widgets)
//       http://invisible-island.net/cdk/cdk.html
//   * Dialog: Script-driven curses widgets
//       http://invisible-island.net/dialog/dialog.html

// INSTALAR LIBRERIA NCURSES EN CODEBLOCKS
//   * https://lists.ubuntu.com/archives/ubuntu-co/2010-November/023766.html
//   * https://www.youtube.com/watch?v=mYnfix8ruAo

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
