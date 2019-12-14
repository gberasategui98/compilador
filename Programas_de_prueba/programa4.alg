algoritmo programamezcla;
	ent n, m: entero;
	sal suma: entero;
	{Prec: n= N AND m = M AND M >= N >0}
	var
		i, comb, z, metaz, aux: entero;
	fvar;
	i:= 0;
	suma:= 0;
	comb:= m;
	metaz:=8;
	para i:=0 hasta n hacer
		suma := suma + i;
		comb := comb * (m - i -1) div (i + 2);
		si suma < comb ->
			aux:=suma;
			suma:=comb;
			comb:=aux;
			mientras z < metaz hacer
				z:= z + 1
			fmientras
		[] comb > suma ->
			aux:=m;
			m:=i;
			i:=aux
		[] i < m ->
			aux:=i;
			i:=m;
			m:=aux
		fsi
	fpara
{Post: n =N AND suma = SUMATORIO(i=1..N)(M sobre i)}
falgoritmo.

