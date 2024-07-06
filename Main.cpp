#include"Doctor.h"
#include"Patient.h"

int main()
{
	char* name = new char[100];
	char* phone = new char[13];
	char* address = new char[100];
	char* disease = new char[100];
	int age = 0,a=0;

	Patient obj;
	Doctor obj1;
	
start:
	system("CLS");
	system("color 9");
	cout << "\t\t\t******Welcome To Doctor's Hospital******\t\t\t"<<endl;
	cout << "\n\n\n\n";
	cout << "\t\t\t Press 1 to check-in with a doctor" << endl;
	cout << "\t\t\t Press 2 to quit the Program" << endl;
	cout << "Enter Your Choice ->";
	cin >> a;

	switch (a)
	{
	case 1:

		system("CLS");
		system("color 2");

		cout << " Sorry for the delay" << endl;
		cout << "Please Enter Your Name :" << endl;
		cin.ignore();
		cin.getline(name, 90);
		obj.setname(name);
		cout << "Please Enter Your Age :" << endl;
		cin>>age;
		obj.setage(age);
		cout << "Please Enter Your Phone Number :"<<endl;
		cin.ignore();
		cin.getline(phone, 12);
		obj.setphone(phone);
		cout << "Please Enter Your Address : " << endl;
		cin.getline(address, 90);
		obj.setaddress(address);
		cout << "Please Enter Your known Disease :" << endl;
		cin.getline(disease, 90);
		obj.setdisease(disease);


		system("CLS");
		system("color 6");
		
	
	out:
		cout << "\t\t\t Would you like to see the Information you entered?" << endl;
		cout << " Press 1 for YES, Press 2 for NO" << endl;
		cout << "Enter Your Choice->";
		cin >> a;
		if (a == 1)
		{
			obj.display();
			goto in;
		}
		else if (a == 2)
		{
			goto in;
		}
		else
		{
			cout << "Wrong Entered Number, Please Enter Again. " << endl;
			goto out;
		}
	in:
		cout << "\t\t\tWe have 2 doctors available at this moment.\t\t\t" << endl;
		cout << "\t\t\tWho would you like to check-in with?\t\t\t" << endl;
		cout << "\t\t\tPress 1 for Doctor Maham, Press 2 for Doctor Lyba\t\t\t" << endl;
		cout << "Enter Your Choice->";
		cin >> a;
		if (a == 1)
		{
			cout << "Doctor Maham will check the medical records of you and the disease " << disease << " . You will be notified on your mobile number." << endl;
			system("pause");
			system("CLS");
			system("color 3");
			cout << "Would you like to Enter another Patient Appointment?" << endl;
			cout << "Press 1 for YES, Press 2 for NO" << endl;
			cin >> a;
			if (a == 1)
			{
				goto start;
			}
			else if (a == 2)
			{
				goto end;
			}
		}
		else if(a==2)
		{
			cout << "Doctor Lyba will check the medical records of you and the disease "<<disease<<" .You will be notified on your mobile number." << endl;
			system("pause");
			system("CLS");
			system("color 3");
			cout << "Would you like to Enter another Patient Appointment?" << endl;
			cout << "Press 1 for YES, Press 2 for NO" << endl;
			cin >> a;
			if (a == 1)
			{
				goto start;
			}
			else if (a == 2)
			{
				goto end;
			}
		}
		else
		{
			cout << "Wrong Entry" << endl;
		}
	case 2:
	end:
		system("CLS");
		system("color 7");
		cout << "\t\t\tThank you for using our Program\t\t\t" << endl;
		obj.~Patient();
		obj1.~Doctor();
		break;
	}
	return 0;
}