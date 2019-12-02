algoritmo orden3;
	ent a, b, c: entero;
	sal max, min, med: entero; 
	{Prec: a = A AND b = B AND c = C}
	si a<b -> 
		a:=b;
		b:=c
	fsi
{Post: a=A AND b = B AND c= C ...}
falgoritmo.