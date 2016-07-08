# Juego-Space
Juego en C++ usango Alegro 5 para IPOO UCSP

nstalacion Allegro 5 en windows


descarga Allegro segun la version de su compilador en mi caso MinGW 4.7.0
https://www.allegro.cc/files/?v=5.0


se descagaran tres carpetas bin, lib e include
descomprimir las tres carpetas en las carpetas respectivas del compilador.
despues ir al codeblock y añadir en setting -> compiler -> linker setting -> add y selecionar todos los archivos 
de la carpeta lib del compilador por ejemplo
C:\Program Files (x86)\CodeBlocks\MinGW\lib\Allegro\liballegro_acodec-5.0.10-md.a

despues en search directorios agregar la carpeta include del compilador por ejemplo
C:\Program Files (x86)\CodeBlocks\MinGW\include


luego solo compilar y ejecutar



p.d. si les da error con la ubicacion del archivo "liballegro_audio-5.0.10-mt"
ir a project -> build options -> linker setting -> add y busca liballegro_audio-5.0.10-mt
