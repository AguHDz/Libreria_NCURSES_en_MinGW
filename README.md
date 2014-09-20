Instalar Librería Ncurses en compilador MinGW C/C++
============

Para trabajar con la pantalla de "MS-DOS" o ventana de comandos en Windows, tradicionalmente se ha empleado en C la librería <conio.h>. Sin embargo esta librería es muy antigua y no estandar del lenguaje C/C++. La librería estándar y mucho más potente en cuanto a recursos es <ncurses.h>

Sin embargo esta librería no viene "de serie" en las distribuciones actuales de los compiladores como MinGW, al menos en su distribucuón para Windows. Pero tiene solución.

Existe otra biblioteca que se llama PDCurses para plataformas DOS y WIN32.

Para instalarla en cualquiera de las distribuciones del compilador libre y gratuito MinGW, es necesario seguir los siguientes pasos:

Pero primero una aclaración: MinGW es un compilador C/C++ que se usa desde la línea de comandos, sin embargo lo habitual es que vaya acompañado de un editor y entorno IDE que facilita su uso y la organización de proyectos. Este entorno de trabajo es el curioamente suelo dar nombre a distintas distribuciones del mismo compilador. Así para MinGW tenemos, entre otros, CodeBlocks.

Por ser en la fecha en que escribo este documente uno de los que parece que está apoyando la comunidad de desarrolladores a la vista de sus actualizaciones, lo voy a escoger para explicar el proceso de instalación de la librería Ncurses en el compilador MinCW para entorno Windows.

## 1. Intalar IDE de programación y compilador MinGW

Si no tienes instalado CodeBlocks, debes empezar por ahí, o si estás acostumbrado a trabajar con otro IDE, pasaté directamente al paso 2.

- Si no tienes ya instalado CodeBlocks, lo puedes instalar entrando en http://www.codeblocks.org. Elegimos "Download the binary release", para Windows XP/Vista/7. Bajas el programa con soporte mingw (ej: codeblocks-13.12mingw-setup-TDM-GCC-481.exe)

- Instalamos el programa en la siguiente ruta. C:\CodeBlocks . Instalar version completa (complete instalation)

## 2. Compilar nueva librería en MinGW

Instalamos la librería en el compilador MinGW

- Entramos a http://pdcurses.sourceforge.net

- Elegimos la versión más reciente (en Septiembre de 2014, la 3.4). Descargamos el archivo pdcursxx.zip donde xx es la versión. (En el momento de escribir este documento: pdcurs34.zip).

- Creamos el directorio pdcurs34 dentro del de CodeBlocks (Nuevo directorio: C:\CodeBlocks\pdcurs34) y descomprimimos el contenido de pdcurs34.zip)

- Ahora toca, tal vez la parte más importante, compilar la nueva librería para que pueda usarla MinGW. Para ello, abrimos la consola de comandos de Windows (*Inicio --> Ejecutar --> cmd o [win+R] --> cmd*) y escribimos cada una de las siguientes comandos seguidas de Enter:

            cd C:\
            set PDCURSES_SRCDIR=C:\CodeBlocks\pdcurs34
            path=c:\codeblocks\mingw\bin
            cd C:\CodeBlocks\pdcurs34
            cd win32
            mingw32-make -f mingwin32.mak

Tras la última línea tiene que comenzar la compilación cuyo proceso ira mostrandos información en la pantalla sin que deba aparecer ningún mensaje de error.

Ya tenemos compilada y lista para su uso desde MinGW la librería Ncurses para Windows.

##3) Configurar incorporación de nueva librería en el entorno IDE de programación CodeBlocks

Ahora es necesario adaptar el programa IDE para que incorpore esta nueva librería cuando ejecute el compilador. Si instalaste la distribución CodeBlocks sigue los siguientes pasos:

- Abrimos CodeBlocks y accedemos al menú Setting de la barra superior (File, Edit, View.... *Setting*)

- *Settings --> Compiler...* Pestaña *Linker setting* y añadimos (botón Add) la dirección de los fichero C:\CodeBlocks\pdcurs34\win32. Habrá dos ficheros con los nombre *pdcurses* y *panel* y cuyas extensiones podrán ser .a o .so (En mi caso: pdcurses.a y panel.a)

- *Settings --> Compiler...* Pestaña *Searh directores* y cada una de las SubPestañas *Compiler*, *Linker* y *Resource Compiler* añadimos (botón Add) la dirección C:\CodeBlocks\pdcurs34

- Y por último, *Settings --> Compiler...* Pestaña *Toolchain executables* donde debería aparecer la C:\CodeBlocks\MinGW, pulsamos botón Auto-detect

Y con esto ya debería funcionar sin ningún problema el siquiente programa de prueba:

            #include <curses.h>
            
            int main()
            {
                initscr();                 /* Start curses mode               */
                printw("Hello World !!!"); /* Print Hello World               */
                refresh();                 /* Print it on to the real screen  */
                getch();                   /* Wait for user input             */
                endwin();                  /* End curses mode                 */
            
                return 0;
            }





