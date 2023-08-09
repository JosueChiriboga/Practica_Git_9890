#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h> 

void gotoxy(int, int);
void titulos();
void lineasHV(int, int, int, int);
void centrarTexto(char*, int);
void letras();

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void lineasHV(int cs, int fs, int ci, int fi) {
    int i;
    for (i = cs; i <= ci; i++) {
        gotoxy(i, fs); printf("%c", 205);
        gotoxy(i, fi); printf("%c", 205);
    }
    for (i = fs; i <= fi; i++) {
        gotoxy(cs, i); printf("%c", 186);
        gotoxy(ci, i); printf("%c", 186);
    }
    gotoxy(cs, fs); printf("%c", 201);
    gotoxy(ci, fi); printf("%c", 188);
    gotoxy(ci, fs); printf("%c", 187);
    gotoxy(cs, fi); printf("%c", 200);
}

void centrarTexto(char* texto, int f) {
    int longitud = strlen(texto);
    gotoxy(40 - (longitud / 2), f);
    printf(texto);
}

void titulos() {
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    lineasHV(0, 0, 79, 24);
    lineasHV(5, 1, 75, 3);
    centrarTexto("UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE", 2);

    // Cambiar el color del segundo rectángulo y el texto "FUNDAMENTOS DE PROGRAMACION"
    lineasHV(10, 4, 70, 6);
    centrarTexto("FUNDAMENTOS DE PROGRAMACION", 5);

    // Cambiar el color del tercer rectángulo y el texto "ESTUDIANTE: JOSUE CHIRIBOGA"
    //system("COLOR F9");
    lineasHV(15, 7, 65, 12);
    centrarTexto("-------------------INTEGRANTES-------------------", 8);
    centrarTexto("BRANDON CARDENAS", 9);
    centrarTexto("JOSUE CHIRIBOGA", 10);
    centrarTexto("STEVEN VALDIVIESO", 11);

    letras();
	
    centrarTexto("CARGANDO BASE DE DATOS...", 21);
    for (int i = 4; i < 76; i++) {
    	gotoxy(i, 22);
    	printf("%c", 177);
    }
    for (int i = 4; i < 76; i++) {
    	gotoxy(i, 22);
    	printf("%c", 219);
    	Sleep(45);
    }
    gotoxy(4, 21);
    printf("                                                        ");
    gotoxy(4, 21);
    centrarTexto("BIENVENIDO: PRESIONA ENTER PARA CONTINUAR", 21);
    getch();
}

void letras() {
    int centroX = 40; // Coordenada X del centro
    int inicioY = 14; // Coordenada Y de inicio

    // Calcular el ancho total de las letras (E + S + P + E)
    int anchoTotal = 5 + 7 + 7 + 5; // Suma de los anchos de cada letra y espacios

    // Calcular la coordenada X de inicio para que las letras estén centradas
    int inicioX = centroX - (anchoTotal / 2);

    // Imprimir la letra E

    gotoxy(inicioX, inicioY); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 1); printf("%c", 219);
    gotoxy(inicioX, inicioY + 2); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 3); printf("%c", 219);
    gotoxy(inicioX, inicioY + 4); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);

    // Espacio entre letras
    inicioX += 5 + 2; // Ancho de letra + espacio

    // Imprimir la letra S

    gotoxy(inicioX, inicioY); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 1); printf("%c", 219);
    gotoxy(inicioX, inicioY + 2); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 3); printf("    %c", 219);
    gotoxy(inicioX, inicioY + 4); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);

    // Espacio entre letras
    inicioX += 5 + 2; // Ancho de letra + espacio

    // Imprimir la letra P
    
    gotoxy(inicioX, inicioY); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 1); printf("%c   %c", 219, 219);
    gotoxy(inicioX, inicioY + 2); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 3); printf("%c", 219);
    gotoxy(inicioX, inicioY + 4); printf("%c", 219);

    // Espacio entre letras
    inicioX += 5 + 2; // Ancho de letra + espacio

    // Imprimir la letra E

    gotoxy(inicioX, inicioY); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 1); printf("%c", 219);
    gotoxy(inicioX, inicioY + 2); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
    gotoxy(inicioX, inicioY + 3); printf("%c", 219);
    gotoxy(inicioX, inicioY + 4); printf("%c%c%c%c%c", 219, 219, 219, 219, 219);
}

int main(int argc, char** argv) {
    system("cls");
    lineasHV(10, 3, 70, 22);
    titulos();
    gotoxy(4, 25);
    system("pause");
    getch();
    return 0;
}
