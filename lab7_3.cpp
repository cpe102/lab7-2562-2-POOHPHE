//status = "ONE-NIGHT-STAND";
#include<bits/stdc++.h>
using namespace std;
int main(){
	double age,h;
	long double money;
	string status;
	cin>>age;
	
	if(age<=20){
		cin>>h;
		if(h<160){
			status="UNFRIEND";
		}else if(h<175){
			status="FRIEND";
		}else{
			cin>>money;
			if(money>69000000){
				status="MARRIED";
			}else{
				status="ONE-NIGHT STAND";
			}
		}
	}else if(age<30){
		cin>>money;
		
		if(money>10000000){
			status="BEST FRIEND";
		}else{
			status="UNFRIEND";
		}
		
	}else{
		status="UNFRIEND";
	}
	
	
	
	cout<<status;
}
