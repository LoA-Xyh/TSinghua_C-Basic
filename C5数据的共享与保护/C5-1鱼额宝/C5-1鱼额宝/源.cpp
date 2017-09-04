#include <iostream>
using namespace std;

class Yuebao
{
	static double staticRate ;
	double balance = 0;
public:
	Yuebao(double foreBalance) {
		balance = foreBalance;
	}
	static void setProfitRate(double rate) {
		staticRate = rate;
	}
	void addProfit(){
		balance += balance*staticRate;
	}
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		balance -= amount;
	}
	double getBalance() {
		return balance;
	}
};
double Yuebao::staticRate = 0;
int main()
{
	int n;
	while (cin >> n)
	{
		double profitRate;
		cin >> profitRate;
		Yuebao::setProfitRate(profitRate);//�趨��������
		Yuebao y(0); //�½����˻�������ʼ��Ϊ0
		int operation;//���������ж��Ǵ滹��ȡ
		double amount;//���������ȡ���
		for (int i = 0; i < n; ++i)
		{
			y.addProfit();//����ǰһ������������Ϣ
			cin >> operation >> amount;
			if (operation == 0)
				y.deposit(amount);//������
			else
				y.withdraw(amount);//ȡ�����
		}
		cout << y.getBalance() << endl;//��������˻����
	}
	return 0;
}