Ejercicio 1
int s = 0;  1
double prom = 0;  1
for (int i = 0; i  n; i++) {  1+n(1+interna+2)
  s = s + A[i]; 3
  prom = s  (double) n; 3
}
printf(Suma%dnProm%d, s, prom);  2

 Tiempo detallado 9n+5
 Tiempo asintotico O(n)

Ejercicio 2
int s = 0;  1
double prom = 0;  1
for (int i = 0; i  n; i++) {  1+n(1+interna+2)
  s = s + A[i];3
}
prom = s  (double)n; 3
printf(Suma%dnProm%d, s, prom);  2

 Tiempo detallado 6n+8
 Tiempo asintotico O(n)

Ejercicio 3
for (int i = 0; i  n - 1; i++) {    1+n(2+interna+2)
  for (int k = i + 1; k  n; k++) {    1+n(1+interna+2)  
    if (vec[i]  vec[k]) {  3
      int aux = vec[i];  2
      vec[i] = vec[k];  3
      vec[k] = aux;  2
    }
  }
}
 Tiempo detallado 13n^+5n+1
 Tiempo asintotico O(n^2)

Ejercicio 4
int frec[101] = {0};  1
for (int i = 0; i  n; i++) {  1+n(1+interna+2)
  frec[vec[i]]++;  3
}
int pos = 0;
for (int i = 0; i  101; i++) {
  for (int k = 0; k  frec[i]; k++) {
    vec[pos] = i;
  pos++;
  }
}

 Tiempo detallado 13n^+5n+1
 Tiempo asintotico O(n^2)

Ejercicio 5
int i=0;  1
int sum=0;  1
while (i  100) {  infinito
  if (i % 2 == 0) {
    for (int k = 0; k  n; k++) {
      sum += vec[i];  
    }
  }
else {
  for (int k=0; ki; k++) {
    sum += vec[i];
  }
}

Ejercicio 6
int fact = 1;  1
for (int i = 2; i  n; i++) {  1+n(1+interna+2)
  fact = i;  2
}
printf(Factorial %d, fact);  1

Ejercicio 7
int pos = -1;  1
for (int i = 0; i  n; i++) {  1+n(1+interna+2)
  if (strcmp(vec[i], cadBuscar) == 0) {  2+(INTERNA IF, INTERNA ELSE)
    pos = i;  1
  break;
}

Ejercicio 8
int pos = 0;  1
for (int i = 1; i  n; i++) {  1+n(1+interna+2)
  if (vec[i]  vec[pos])  3+(INTERNA IF, INTERNA ELSE)
    pos = i;  1
}
printf(El mayor es %d, vec[pos]);  2

Ejercicio 9
int max = 0;  1
for (int m = 0; m  n; m++) {  1+n(1+interna+2)
  int cont = 0;  1
  int k = m + 1;  2
  while (vec[m] = vec[k]) {  4
    k = k + 1;  2
    cont++;  2
  }
  if (cont  max)  1+(INTERNA IF, INTERNA ELSE)
    max = cont;  1
}
printf(Maximo %d, max);  1

 Tiempo detallado 
 Tiempo asintotico 

Ejercicio 10
int i=1;  1
while (i  n) {  1+n(interna)
  if (vec[i] % 2 == 0)  3+max(INTERNA IF, INTERNA ELSE)
    i = 3;  2
  else
    i = 2;  2
}

 Tiempo detallado 5n+2
 Tiempo asintotico O(n)

Ejercicio 11
int i=1;  1
while (i  n) { 1 + n(interna)
  if (vec[i] % 2 == 0)  3+max(INTERNA IF, INTERNA ELSE)
    n = n  3;  2
  else
    n = n  2;  2
}

 Tiempo detallado 5n+2
 Tiempo asintotico O(n)

Ejercicio 12
int inf = 0;  1
int sup = n - 1;  1
int pos = -1;  1

while ((pos == -1) && (sup = inf)) {
  int medio = (inf + sup)  2;
  if (arreglo[medio] == 80)
    pos = medio;
  else if (arreglo[medio]  80)
    inf = medio + 1;
else
    sup = medio - 1;
}
