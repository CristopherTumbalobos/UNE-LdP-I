PROGRAM LOGBASE10;
USES CRT, MATH;
VAR
N: INTEGER;
BEGIN
CLRSCR;
WRITELN(' ESTUDIANTE: Tumbalobos Peralta, Cristopher R.');
WRITELN(' PROGRAMA QUE CALCULA EL LOGARITMO EN BASE 10 DE UN NUMERO');
WRITELN('');
WRITE(' INGRESA UN NUMERO ENTERO: ');
READ(N);
WRITELN('');
WRITE(' EL LOGARITMO DE ', N, ' EN BASE 10 ES: ', LOG10(N):8:5);
READKEY();
END.
