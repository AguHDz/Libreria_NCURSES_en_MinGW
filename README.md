Instalar Librería Ncurses en compiladro C/C++ MinGW
===================================================

Para trabajar con la pantalla de "MS-DOS" o ventana de comandos en Windows, tradicionalmente
se ha empleado en C la librería <conio.h>. Sin embargo esta librería es muy antigua y no estandar
del lenguaje C/C++. La librería estándar y mucho más potente en cuanto a recursos es <ncurses.h>

Sin embargo esta librería no viene "de serie" en las distribuciones actuales de los compiladores 
como MinGW, al menos en su distribucuón para Windows. Pero tiene solución.

Existe otra biblioteca que se llama PDCurses para plataformas DOS y WIN32.

Para instalarla en cualquiera de las distribuciones del compilador libre y gratuito MinGW, es 
necesario seguir los siguientes pasos:

Pero primero una aclaración: MinGW es un compilador C/C++ que se usa desde la línea de comandos,
sin embargo lo habitual es que vaya acompañado de un editor y entorno IDE que facilita su uso
y la organización de proyectos. Este entorno de trabajo es el curioamente suelo dar nombre a distintas
distribuciones del mismo compilador. Así para MinGW tenemos, entre otros, CodeBlocks.

Por ser en la fecha en que escribo este documente uno de los que parece que está apoyando la comunidad
de desarrolladores a la vista de sus actualizaciones, lo voy a escoger para explicar el proceso de
instalación de la librería Ncurses en el compilador MinCW para entorno Windows.

1.-Si no tienes instalado CodeBlocks, debes empezar por ahí, o si estás acostumbrado a trabajar con
otro IDE, pasaté directamente al paso 2.
1.1 Si no tienes ya instalado CodeBlocks, lo puedes instalar entrando en http://www.codeblocks.org.
Elegimos ¨Download the binary release¨, para Windows XP/Vista/7. Bajas el programa con soporte
mingw (ej: codeblocks-13.12mingw-setup-TDM-GCC-481.exe)
1.2. Instalamos el programa en la siguiente ruta. C:\CodeBlocks . Instalar version completa (complete
instalation)
