#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int v_lod, v_tech;
    double t_oz, t_rec;
    printf("������� �������� ����� � �������� ������� ");
    scanf("%d %d", &v_lod, &v_tech);
    printf("������� ����� ���������� �� ����� � �� ���� ");
    scanf("%lf %lf", &t_oz, &t_rec);
    if (v_tech<v_lod) {
        printf("���������� ���� S = %lf", (v_lod*t_oz)+((v_lod-v_tech)*t_rec));
    }
    else {
        printf("�������� ������ ����������.");
    }
}