int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int x1[add(3, 4)];
	int x2[add(a, b)];

	int n1 = add(a, b);
}