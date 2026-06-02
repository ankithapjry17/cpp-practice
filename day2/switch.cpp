#include<bits/stdc++.h>
using namespace std;

void menu(){
    cout<<"press 1:registering"<<endl;
    cout<<"press 2:login"<<endl;
    cout<<"press 3:admin login"<<endl;
    cout<<"press 4:admin logout"<<endl;
    cout<<"press 5:exit"<<endl;
}

void Register(){
    string name,email,password;
    cout<<"Enter the registration details:";
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the email:";
    cin>>email;
    cout<<"Enter the password:";
    cin>>password;
    cout<<"Registred scssflly"<<endl;
}

void Login(){
    string username,userpass;
    cout<<"Enter the username:";
    cin>>username;
    cout<<"Enter the user_password:";
    cin>>userpass;
    cout<<"Logged in!!"<<endl;
}

void AdminLogin(){
    string admin_id,ad_pass;
    cout<<"Enter the admin_id:";
    cin>>admin_id;
    cout<<"Enter the admin_password:";
    cin>>ad_pass;
    cout<<"Admin Logged in!!"<<endl;
}

void AdminLogout(){
    cout<<"Logged out!!"<<endl;
}

void Exit(){
    cout<<"Successful exit.."<<endl;
}


int main(){
    int choice;
    bool flag=true;

    while(flag){
        menu();
        cin>>choice;
        switch(choice):
            case 1: Register();
                    break;
            case 2: Login();
                    break;
            case 3: AdminLogin();
                    break;
            case 4: AdminLogout();
                    break;
            case 5: Exit();
                    flag = false;
                    break;
            default: cout<<"Not found";
    }
}