#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double pi = 3.14, r, l;
    printf("����� ���-�� �����: "); scanf("%lf", &l);
    r = l/(2*pi);
    printf("������� ����� �����: %lf", pi*pow(r,2));
}