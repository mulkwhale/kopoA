#include<stdio.h>

int main(){
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 986.28 / 100;
	const float RATE_EUR = 1342.13;
	const float RATE_CNY = 193.17;
	const float RATE_GBP = 1604.74;
	int inputWon;
	int returnWon = 0;
	int returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10;
	
	float outputDollar = 0;
	int outputDollarFinal = 0;
	
	float outputYen = 0;
	int outputYenFinal = 0;
	
	float outputEur = 0;
	int outputEurFinal = 0;
	
	float outputCny = 0;
	int outputCnyFinal = 0;
	
	float outputGbp = 0;
	int outputGbpFinal = 0;
	
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &inputWon);
	
	// �̱��޷�
	outputDollar = inputWon / RATE_USD; // 40.55
	outputDollarFinal = outputDollar;
	returnWon = outputDollar * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_USD / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f �޷�\n", inputWon, outputDollar);
	printf("%d �޷�, % d���� ȯ��\n", outputDollarFinal, returnWon);
	
	returnWon50000 = returnWon / 50000;
	returnWon = returnWon % 50000;
	returnWon10000 = returnWon / 10000;
	returnWon = returnWon % 10000;
	returnWon5000 = returnWon / 5000;
	returnWon = returnWon % 5000;
	returnWon1000 = returnWon / 1000;
	returnWon = returnWon % 1000;
	returnWon500 = returnWon / 500;
	returnWon = returnWon % 500;
	returnWon100 = returnWon / 100;
	returnWon = returnWon % 100;
	returnWon50 = returnWon / 50;
	returnWon = returnWon % 50;
	returnWon10 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	// �Ϻ���
	outputYen = inputWon / RATE_JPY;
	outputYenFinal = outputYen;
	returnWon = outputYen * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_JPY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f ��\n", inputWon, outputYen);
	printf("%d ��, % d���� ȯ��\n", outputYenFinal, returnWon);
	
	returnWon50000 = returnWon / 50000;
	returnWon = returnWon % 50000;
	returnWon10000 = returnWon / 10000;
	returnWon = returnWon % 10000;
	returnWon5000 = returnWon / 5000;
	returnWon = returnWon % 5000;
	returnWon1000 = returnWon / 1000;
	returnWon = returnWon % 1000;
	returnWon500 = returnWon / 500;
	returnWon = returnWon % 500;
	returnWon100 = returnWon / 100;
	returnWon = returnWon % 100;
	returnWon50 = returnWon / 50;
	returnWon = returnWon % 50;
	returnWon10 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	// ��������
	outputEur = inputWon / RATE_EUR;
	outputEurFinal = outputEur;
	returnWon = outputEur * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f ����\n", inputWon, outputEur);
	printf("%d ����, % d���� ȯ��\n", outputEurFinal, returnWon);
	
	returnWon50000 = returnWon / 50000;
	returnWon = returnWon % 50000;
	returnWon10000 = returnWon / 10000;
	returnWon = returnWon % 10000;
	returnWon5000 = returnWon / 5000;
	returnWon = returnWon % 5000;
	returnWon1000 = returnWon / 1000;
	returnWon = returnWon % 1000;
	returnWon500 = returnWon / 500;
	returnWon = returnWon % 500;
	returnWon100 = returnWon / 100;
	returnWon = returnWon % 100;
	returnWon50 = returnWon / 50;
	returnWon = returnWon % 50;
	returnWon10 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	// �߱�����
	outputCny = inputWon / RATE_CNY;
	outputCnyFinal = outputCny;
	returnWon = outputCny * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f ����\n", inputWon, outputCny);
	printf("%d ����, % d���� ȯ��\n", outputCnyFinal, returnWon);
	
	returnWon50000 = returnWon / 50000;
	returnWon = returnWon % 50000;
	returnWon10000 = returnWon / 10000;
	returnWon = returnWon % 10000;
	returnWon5000 = returnWon / 5000;
	returnWon = returnWon % 5000;
	returnWon1000 = returnWon / 1000;
	returnWon = returnWon % 1000;
	returnWon500 = returnWon / 500;
	returnWon = returnWon % 500;
	returnWon100 = returnWon / 100;
	returnWon = returnWon % 100;
	returnWon50 = returnWon / 50;
	returnWon = returnWon % 50;
	returnWon10 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	// �����Ŀ��
	outputGbp = inputWon / RATE_GBP;
	outputGbpFinal = outputGbp;
	returnWon = outputGbp * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_GBP / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f �Ŀ��\n", inputWon, outputGbp);
	printf("%d �Ŀ��, % d���� ȯ��\n", outputGbpFinal, returnWon);
	
	returnWon50000 = returnWon / 50000;
	returnWon = returnWon % 50000;
	returnWon10000 = returnWon / 10000;
	returnWon = returnWon % 10000;
	returnWon5000 = returnWon / 5000;
	returnWon = returnWon % 5000;
	returnWon1000 = returnWon / 1000;
	returnWon = returnWon % 1000;
	returnWon500 = returnWon / 500;
	returnWon = returnWon % 500;
	returnWon100 = returnWon / 100;
	returnWon = returnWon % 100;
	returnWon50 = returnWon / 50;
	returnWon = returnWon % 50;
	returnWon10 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	return 0;
}
