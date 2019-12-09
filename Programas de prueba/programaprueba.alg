algoritmo orden3;
	const a=5; fconst;
	funcion asdf(a, b:entero;) dev entero;
		a:=b
		dev a
	ffuncion
	
	ent a, b, c: entero;
	sal a, b, c,max: entero; 
	{Prec: a = A AND b = B AND c = C}
	si a >= b y a >= c->
		max := a
	[] b >= a y b >= c ->
		max := b
	[] c >= b y c >= a ->
		max := c
	fsi
{Post: a=A AND b = B AND c= C ...}
falgoritmo.

