void fun();

void fun(int);
void fun(double);
void fun(float);
void fun(char);
void fun(const char*);

void fun(int, int);
void fun(double, double);
void fun(int, double);
void fun(double, int);

int main() {
	fun();
	fun(10);
	fun(10.234);
	fun(10.234f);
	fun('a');
	fun("Hello");

	fun(10, 20);
	fun(2.345, 5.66);
	fun(2.345, 5);
	fun(2, 5.66);
}