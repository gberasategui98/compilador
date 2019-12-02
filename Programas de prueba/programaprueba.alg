<<<<<<< HEAD
algoritmo prueba;
ent a, b, c ,d:entero;
{Prec: a = A AND b = B AND c = C}
si a >= b ->
	a:=b
[] a < b ->
	b:=a
fsi;
a:=c;
a:=d
=======
algoritmo orden3;
	ent a, b, c: entero;
	sal max, min, med: entero; 
	{Prec: a = A AND b = B AND c = C}
	si a<b -> 
		a:=b;
		b:=c
	fsi
>>>>>>> 80d1e4830bfe61407deccc9d8a68c91cf13934f3
{Post: a=A AND b = B AND c= C ...}
falgoritmo.