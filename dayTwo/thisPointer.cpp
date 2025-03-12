class CA {
public:
	CA& disp() { 
		return *this;
	}
};

int main() {
	CA a; 
	a.disp(); 
	CA b;
	b.disp();
}