#include<iostream>
using namespace std;
class Customer
{
	public:
	int option;
	int sum=0,differ=0;
	int Balance=25000;
	int Withdraw,Deposit;
	int Number;
	int Amount,Pay;
	int phone;
	string UserID;
	
	void display_options(){
		cout<<"****DATHERA PATI NB BANK SERVICES*****"<<endl;
		cout<<"THE FOLLOWING ARE THE SERVICES PROVIDED "<<endl;
		cout<<"1.Check Account Balance"<<endl;
		cout<<"2.Deposit Money"<<endl;
		cout<<"3.Withdraw Money"<<endl;
		cout<<"4.Send Money"<<endl;
		cout<<"5.Log Into Your Account"<<endl;
		cout<<"6.Payments"<<endl;
		cout<<"7.6Exit"<<endl;
	}
				
		void Options(){

			cout<<"ENTER YOUR OPTION:"<<endl;
				cin>>option;
			if(option>0 && option<=6)	{
			switch(option){
				case 1:
					{
						cout<<"YOUR ACCOUNT BALANCE IS: MWK"<<Balance<<endl;
						
					}
					break;
				case 2:
					{
						cout<<"Enter the amount to deposit "<<endl;
						cin>>Deposit;
						sum=Balance+Deposit;
						cout<<"Your balance after deposit is: MWK"<<sum<<endl;
						
					}
					break;
				case 3:
					{
						cout<<"Enter the amount to withdraw: "<<endl;
						cin>>Withdraw;
					if(Balance>=Withdraw){
						differ=Balance-Withdraw;
						cout<<"You have withdrawed MWK"<<Withdraw<<endl;
						cout<<"Your balance after withdraw MWK"<<differ<<endl;
						
					 }
					 else
					 {
					 	cout<<"You have in Sufficient funds!!"<<endl;
					 }
					 break;
					}
				case 4:
					cout<<"ENTER THE RECEIPENT NUMBER"<<endl;
					cin>>Number;
					cout<<"Enter the amount to send: "<<endl;
					cin>>Amount;
					if(Balance>Amount){
						int pin;
						cout<<"Enter your pin "<<endl;
						cin>>pin;
						cout<<"YOU HAVE SUCCESFULLY SENT "<<Amount<<" TO "<<Number<<endl;
						
					}
					else
					{
						cout<<"YOU HAVE INSUFFICIENT BALANCE!!"<<endl;
					}
					break;
					case 5:
						{
							cout<<"Enter your phone number"<<endl;
							cin>>phone;
							cout<<"Enter Your Account User ID"<<endl;
							cin>>UserID;
							cout<<"WELCOME "<<UserID<<" TO NDATHERA PATI NB SERVICES"<<endl;
						}
						break;
						case 6:
							{
								cout<<"1.Water bills"<<endl<<"2.Electricity"<<endl<<"3.Examinations"<<endl<<"4.Items ( e.g groceries)"<<endl;
								
								cout<<"ENTER THE KIND OF PAYMENT REQUIRED"<<endl;
								cin>>Pay;
					
								if(Pay>0 && Pay<=4)
								{
								switch(Pay){
									unsigned int code, amount;
									case 1: 
									{
										cout<<"Enter your account code"<<endl;
										cin>>code;
										cout<<"Enter the amount to pay"<<endl;
										cin>>amount;
										if(amount>Balance){
											cout<<"Amount is insufficient"<<endl;
										}
										else
										{
											cout<<"Trans id: 26060404"<<amount<<" has been succefuly been paid to "<<code<< UserID<<endl;
										}
									}
									break;
									case 2:
										{
										cout<<"Enter your account code"<<endl;
										cin>>code;
										cout<<"Enter the amount to pay"<<endl;
										cin>>amount;
										if(amount>Balance){
											cout<<"Amount is insufficient"<<endl;
										}
										else
										{
											cout<<"Trans id: 26060404"<<amount<<" has been succefuly been paid to "<<code<< UserID<<endl;
										}
										}
										break;
									case 3:
											{
											    cout<<"1.MSCE"<<endl<<"2.JCE"<<endl<<"3.PLSCE"<<endl;
											    
												unsigned int exam,exnumber,fee;
												
												cout<<"Enter the number of the exams you are paying for"<<endl;
												cin>>exam;
												
												if(exam>0 && exam<=3){
													switch(exam){
												case 1:
													{
													
													cout<<"HUMANITIES=12,000"<<endl<<"PURE SCIENCES=15,000"<<endl<<"MIXTURE=10,000"<<endl;
													cout<<" Enter the student exam number"<<endl;
													cin>>exnumber;
													cout<<"Enter the total fee"<<endl;
													cin>>fee;
													if(fee==10000 || fee==12000 || fee==15000){
														cout<<"You have succefully paid for "<<exnumber<<endl;
										           }
										       }
										       break;
										       case 2:
										       	{
										       		cout<<"FEE=9,500"<<endl;
													cout<<" Enter the student exam number"<<endl;
													cin>>exnumber;
													cout<<"Enter the total fee"<<endl;
													cin>>fee;
													if(fee==9500){
														cout<<"You have succefully paid for "<<exnumber<<endl;
										           }
												   }	
												
												break;
												case 3:
										       	{
										       		cout<<"FEE=9,000"<<endl;
													cout<<" Enter the student exam number"<<endl;
													cin>>exnumber;
													cout<<"Enter the total fee"<<endl;
													cin>>fee;
													if(fee==9000){
														cout<<"You have succefully paid for "<<exnumber<<endl;
										           }
												   }
												   
											   }
											}
											break;
											case 4:
												{
													unsigned int shop,pcode,shop_amount;
													cout<<"1.SHOPRITE"<<endl<<"2.SANA"<<endl<<"3.CHIPIKU"<<endl<<"4.DAPP"<<endl<<"5.PEP"<<endl<<"6.BATA"<<endl;
													cout<<"Enter the shop number"<<endl;
													cin>>shop;
													cout<<"YOU HAVE CHOSEN "<<shop<<endl;
													
													cout<<"Enter your pin code"<<endl;
													cin>>pcode;
													cout<<"Enter the amount"<<endl;
													cin>>shop_amount;
													
													if(Balance>shop_amount || Balance==shop_amount){
													
													cout<<"You have succesfully paid "<<shop_amount<<" to option "<< shop<<endl;
												}
												else
												{
													cout<<"You have insufficient funds"<<endl;
												}
												}
										
								}	
								}
							}
							break;
				default :
					{
					cout<<"Re-enter the options for another task to occur "<<endl;
					}					
			}
		}
	}
		else
		{
			cout<<"INVALID OPTION!!!"<<endl;
		}
	}
};
int main(){
	Customer C1;
	C1.display_options();
	C1.Options();
	return 0;
	
}