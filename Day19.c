#include <stdio.h>

// ---- ����ü ������ ----
// ����ü �����͸� �̿��ؼ� �������� ������ ���� ->(�ַο�)�� ����ؼ� ������ �� �ִ�.
// ������ *�� ����� �� �ִµ� �̶��� �켱���� ������ ��ȣ�� ������� �Ѵ�.
//				ex) (*d).data1 == d->data1

// ---- �����Ϳ� �迭�� ���� ----
// �����Ϳ� �迭�� ������ ���踦 ���� ������, �и��� �������� �ִ�.
// �迭�� �����ϰ� �Ǹ� �⺻������ �迭 �ڱ� �ڽ��� ���� �ּҸ� ���� �ִ�.
// �����Ϳ� �迭�� �� �� �ּҸ� ������ ������ �����ϱ� ������ �����͸� �迭ó�� ����� �� �ִ�.

/*typedef struct {
	int data1;
	int data2;
}Data;*/

/*void Func(Data* d)
{
	(*d).data1 = 11;
	d->data2 = 22;
}*/

/*typedef struct {
	int kor, mat, eng, total;
	double avg;
	char grade;
}Student;

void Total(Student* st)
{
	(st)->kor + st->mat + st->eng;
}

void Avg(Student* st)
{
	(st)->avg = Total / 3;
}

void Grade(Student* st)
{
	switch ((int)st->avg / 10)
	{
	case 10:
	case 9:
		st->grade = 'A';
		break;
	case 8:
		st->grade = 'B';
		break;
	case 7:
		st->grade = 'C';
		break;
	case 6:
		st->grade = 'D';
		break;
	default:
		st->grade = 'F';
		break;
	}
}*/

/*typedef struct {
	int data1;
	int data2;
	int data3;
}Data;*/

int main()
{
	/*Data d;

	d.data1 = 10;
	d.data2 = 20;

	Func(&d);

	printf("��� %d %d\n", d.data1, d.data2);*/

	/*Student st;

	printf("����, ����, ���� ���� �Է�: ");
	scanf_s("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(&st);
	Avg(&st);
	Grade(&st);

	printf("����: %d\n", st.total);
	printf("���: %.2f\n", st.avg);
	printf("���: %c\n", st.grade);*/

	/*Data d;
	Data* pd;

	pd = &d;

	printf("d�� ũ��: %d\n", sizeof(d));
	printf("pd�� ũ��: %d\n", sizeof(pd));

	printf("\npd�� ��: %p\n", pd);*/

	/*char str[10];

	printf("str�� �ּ�: %p\n", &str);
	printf("str�� ��: %p", str);

	printf("�Է�: ");
	scanf("%s", str);

	printf("���: %s\n", str);*/

	char str1[10] = "Hello";
	char* str2 = "Abcde";

	//printf("str1: %s\n", str1);
	//printf("str2: %s\n", str2);

	str1[0] = 'B';
	str2[0] = 'Z';

	printf("str1: %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	printf("str2: %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

	return 0;
}