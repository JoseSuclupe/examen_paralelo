# Parte Teorica

## Vectorizacion
### Pregunta 1
B, C, D
### Pregunta 2
A, D
### Pregunta 3
B, C, D
### Pregunta 4
A. El compilador está avisando de un posible problema de aliasing, es decir cuando punteros apuntan a regiones de memoria que se solapan.
B. Se le debe agregar el parámetro restrict en los argumentos de la función para indicarle manualmente que no hay peligro de aliasing.

##OpenMP
### Pregunta 5
B
### Pregunta 6
D
### Pregunta 7
A. barrier ----> #pragma omp barrier
B. masked ----> #pragma omp masked
C. Configura la variable de entorno que define el número de hilos que se usarán en cada región paralela.
D.  La condición de carrera implica posibles  múltiples resultados para una variable y esto dependerá del orden de ejecución de los hilos lo cual es consecuencia del modelo de memoria relajada.
### Pregunta 8
A. Variable privada ( en el stack )
B. Puede imprimir cualquier 


# Parte Practica

### Pregunta 1
Primero se definen variables y los arrays a,b y el entero sum=0.
Luego,  usando bucles se llena los arrays a con valores aleatorios, y luego se imprimen. Se hace lo mismo para el array b.
Finalmente, usando bucles se van sumando elemento a elemento los valores de a y b, y cada suma se va guardando en sum.
### Pregunta 2
real	0m2.699s
user	0m0.372s
### Pregunta 3
https://drive.google.com/file/d/1tRewBhNB3oVJ_e9aM98hDpOOH3nE0qtq/view?usp=sharing
Explicación:
No se está usando vectorización, por eso requiere optimizar la gestión de hilos y hay hotspots.
### Pregunta 4
https://drive.google.com/file/d/1Mrc9DLh2Hkwd2Lg8ZDENl6AbW0XpiyRV/view?usp=sharing
Los hotspots están principalmente al imprimir los valores, pero también en los bucles (al llenar los valores de los arrays y al hacer la operación suma).
ver Hotsptos:
https://drive.google.com/file/d/1KeUONQKsx9F8O7AK7A92v_RPUSSiSZa4/view?usp=sharing

Solución: Usar pragmas para optimizar los hilos en los for, y las operaciones SIMD como se muestra en la siguiente pregunta.

### Pregunta 5
(se ejecutó $dpcpp -fopenmp -g -O0 -o random_matrix2 random_matrix2.cpp) donde random_matrix2.cpp incluye los pragmas:
https://drive.google.com/file/d/1Y3pfEN6JyPjqKApK3-55ylVlcJ8FY84N/view?usp=sharing

real	0m0.094s
user	0m0.031s

speedup = 28

## ENSAYO
### Pregunta 1
A. He aprendido los fundamentos básicos de programación paralela en CPUs. Las aplicaciones de OPENMP para un nodo, y MPI para conectar varios nodos.
B. Le daría aplicaciones en procesamiento de señales, especificamente en paralelizar algoritmos de procesamiento de señales de radar. Ya que muchas veces uno se enfrenta a escenarios donde hay mucha data cruda y en estos casos es necesario tener algoritmos corriendo en paralelo ya que muchas veces los recursos computacionales son limitados y se debe tener la máxima eficiencia para sistemas que funcionan de manera continua (24 x 7).

