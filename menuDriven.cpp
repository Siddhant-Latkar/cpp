#include<iostream>
using namespace std;

class BankAccount{
	private:
		string accountHolder;
		int accountNumber;
		string accountType;
		double balance;
	public:
		void getAccountHolder(){
			cout<<"Account Details:"<<endl;
			cout<<"Holder:";
			getline(cin,accountHolder);
		}	
		void getAccountType(){
			cout<<"Account Type:";
			cin>>accountType;
		}
		int getBlance(){
			cout<<"Balance:";
			cin>>balance;
			return balance;
		}
		void setAccountType(string newType){
			cout<<"Type:current"<<endl;
		}
		int deposits(){
			int amount;
			cout<<"Depositing:";
			cin>>amount;
			cout<<"New Amount:";
			int total=amount+balance;
			cout<<total<<endl;
			return total;
		}
		int withdraw(){
			int amount;
			int total=deposits();
			cout<<"Withdrawing:";
			cin>>amount;
			cout<<"New Balance:";
			cout<<total-amount;
			cout<<endl;
		}
		void displayAccountDetails(){
			cout<<"Final Account Details:";
		}
		
};

int main()
{
	BankAccount d1;
	d1.getAccountHolder();
	d1.getAccountType();
	d1.getBlance();
	
	//cout<<"Updated Account Type to Current"<<endl;
	//d1.setAccountType("current");
	
	
	d1.withdraw();
	//cout<<"Upadated account to current";
	return 0;
}
