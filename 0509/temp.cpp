#include <string>


using std::string;


class CustomerData
{
	string customer_id;
	string name;
	string account_number;
	string phone_number;
	string manage_branch_id;
};

class BankData
{
	string branch_id;
	string address;
	int account_count;
	int avalable_account;
};

class BankManager
{
	BankData bankData;
	string customer_id;

	void setBankData(BankData& bankData)
	{
		this->bankData = bankData;
	}
	void addNewCustomer(CustomerData customerData);
	void addNewBranch(int type, string branch_id); // 1: add, 2: delete
	void printBranchInfo(string branch_id);
};

class CustomerManager
{
	CustomerData customerData;

	void setCustomerData(CustomerData customerData)
	{
		this->customerData = customerData;
	}
	string addNewAccout(BankData bankData); // return account_number
	void printAccountInfo(string account_number);
	int sendMoney(int value, string account_number); // return money left
	void printCustomerInfo(CustomerData customerData);	
};