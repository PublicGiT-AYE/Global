//#include <stdio.h>
//#include <locale.h>
//using namespace std;
//int main() 
//{
//	setlocale(LC_ALL,"rus");
//	char c; /* код состояния */
//	char f; /* признак ошибки */
//	char b; /* признак занятости */
//	unsigned char n; /* количество байт */
//	unsigned int unitstateword; /* слово состояния */
//	 /* ввод слова состояния устройства */
//	printf("введите cлово состояния устройства \n");
//	printf("(16-ричное число от 0 до 0xffff) >");
//	scanf_s("%x", &unitstateword);
//	/* выделение составных частей */
//	c = (unitstateword >> 11) & 0x1f;
//	f = (unitstateword >> 9) & 1;
//	b = (unitstateword >> 8) & 1;
//	n = unitstateword & 0xff;
//	/* вывод результатов */
//	printf("\nкод состояния              = %hhd\n", c);
//	printf("признак ошибки             = %hhd\n", f);
//	printf("признак занятости          = %hhd\n", b);
//	printf("количество переданных байт = %hhd\n", n);
//	return 0;
//}