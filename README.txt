¿Qué hace el programa?

  El programa está basado en un juego matemático llamado Sudoku, en donde el objetivo es rellenar
una cuadrícula de 9x9 con números del 1 al 9 con la restricción de que en cada fila, columna y
cuadrado 3x3 no puede haber ningún número repetido. En un principio, la resolución del problema sería
sencilla en el caso de que dicha cuadrícula venga completamente vacía, es por esa razón, que primeramente
se plantea una cuadrícula parcialmente completa y a partir de ahí, solucionar completamente el problema
matemático. Sin embargo, el juego no está simplemente basado en un sudoku, sino que a su vez, cuenta con
un sistema de vidas!, si colocas algún valor que haga que el sudoku sea irresoluble, perderás una vida!.

  El programa empieza generando una nueva cuadrícula 9x9 con una cantidad determinada de casillas rellenas,
y con una solución posible. Una vez generado, ya todo está preparado para jugar!. El juego te mostrará
la cuadrícula generada, y luego te preguntará las coordenadas del sudoku que deseas modificar y el valor
que se insertará en esa posición. En el caso de que dicho valor no sea una solución posible para las
coordenadas dadas, se te descontará una vida de las 3 con las que inicias, y así sucesivamente hasta que
pierdas, o en su dado caso, completes el sudoku con vidas restantes.

¿Quiénes han hecho el programa?

  Los autores de este programa son:
    -Brian Márquez.
    -Eugenio Montilla.
    -Maria Fernanda Castillo.

¿Cómo se compila el programa?

  Para compilar y poder probar el juego, primero se tendrá que tener instalado el programa make y gcc en el
sistema, una vez instalados estos dos, se tendrá que ejecutar el comando:

$ make

  Sobre la carpeta en la que se encuentra el juego. Esto debe compilarte el juego completo para que pueda
ser ejecutado. Sólo queda correr el programa, puedes hacerlo una vez compilado con el comando:

$ ./sudoku

  Y listo!, ahora puedes jugar al sudoku desde tu terminal!.
