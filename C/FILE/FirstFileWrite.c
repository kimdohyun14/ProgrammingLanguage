#include <stdio.h>

int main() {
	FILE* fp = fopen("data.txt", "wt"); // ��� ��Ʈ���� ����
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp); // ��Ʈ���� ����
	return 0;
}