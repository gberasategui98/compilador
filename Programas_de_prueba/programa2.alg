algoritmo orden3;
	ent a, b, c: entero;
	sal max, min, med: entero; 
	{Prec: a = A AND b = B AND c = C}
	si a >= b y a >= c->
		max := a;
		si b >= c ->
			med := b;
			min := c
		[] b <c ->
			med := c;
			min := b
		fsi
	[] b >= a y b >= c ->
		max := b;
		si a >= c ->
			med := a;
			min := c
		[] a <c ->
			med := c; 
			min := a
		fsi
	[] c >= b y c >= a ->
		max := c;
		si b >= a ->
			med := b;
			min := a
		[] b <a ->
			med := a;
			min := b
		fsi
	fsi
{Post: a=A AND b = B AND c= C ...}
falgoritmo.
