PROGRAM RAIZ2;
USES CRT;
VAR
A : INTEGER;
RAIZ : REAL;
BEGIN
CLRSCR;
WRITE('INGRESE EL NUMERO: ');
READ(A);
WRITELN('');
IF A > 0 THEN
BEGIN
RAIZ:=SQRT(A);
WRITELN('LA RAIZ CUADRADA DEL NUMERO ES: ',RAIZ:1:1);
END
ELSE
BEGIN
WRITELN('LA RAIZ CUADRADA DE UN NUMERO NEGATIVO NO EXISTE EN LOS NUMEROS REALES');
END;
READKEY();
END.