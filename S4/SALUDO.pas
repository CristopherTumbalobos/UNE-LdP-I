PROGRAM SALUDO;
USES CRT;
VAR
A, B : INTEGER;
SUMA : REAL;
BEGIN
CLRSCR;
GOTOXY(10,8);
WRITE('....... HOLA MUNDO .......');
GOTOXY(15,14);
WRITE('SOY DE MATEMATICA E INFORMATICA');
GOTOXY(17,16);
WRITE('SOY DE LA FACULTA DE CIENCIAS');
GOTOXY(19,18);
WRITE('SOY EL ALUMNO: CRISTOPHER TUMBALOBOS PERALTA');
GOTOXY(21,20);
WRITE('INGRESE EL PRIMER NUMERO: ');
READ(A);
GOTOXY(21,22);
WRITE('INGRESE EL SEGUNDO NUMERO: ');
READ(B);
GOTOXY(21,24);
SUMA:=A+B;
WRITE('LA SUMA ES: ',SUMA:0:0);
READKEY();
END.
