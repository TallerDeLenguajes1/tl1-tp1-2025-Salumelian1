[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

*Archivo .gitingnore*

El archivo .gitignore es un archivo de texto que le indica a Git qué archivos o directorios no deben ser rastreados ni incluidos en los commits. 

_¿Cuándo se debe hacer?_
    El archivo .gitignore debe crearse al inicio del proyecto, preferiblemente antes del primer commit. Si se agrega después, algunos archivos ya podrían estar siendo rastreados por Git, y será necesario eliminarlos manualmente del historial con comandos.

¿Cómo configurar el archivo .gitignore?
    El archivo .gitignore se crea en la raíz del proyecto y sigue reglas simples:

     Líneas que comienzan con # son comentarios.

    / al inicio indica que el patrón es relativo al directorio raíz.

    / al final indica que es un directorio.

    * funciona como comodín para cualquier cadena.

    ! antepuesto niega el patrón (incluye archivos que normalmente serían ignorados).
