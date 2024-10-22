#include<iostream>
#include<string>
using namespace std;
int main()
// // {
// //     string dep;
// //     int year,rollno;
// //     cout<<"Enter your rollno: ";
// //     cin>>rollno;
// //     cout<<"Enter your year: ";
// //     cin>>year;
// //     cout<<"Enter your department: ";
// //     cin>>dep;

// //     if(year>=2015 && year<=2019)
// //     {
// //         if(rollno>=1 && rollno<=260)
// //             {
// //              if(dep=="CS")
// //              {
// //                cout<<"Valid Registration Number :"<<endl;
// //                cout<<year<<"-"<<dep<<"-"<<rollno;
// //             }
// //             }
// //     }
// //     else
// //         cout<<"Invalid Data";

// // }
// #include<iostream>
// #include<regex>
// using namespace std;
// int main()
// {
//     regex pattern1("^(201[5-9])[-]{1}[A-Z]{2}[-]{1}(\\d+)$");
//     regex pattern2("^(201[5-9])[-]{1}[A-Z]{2}[-]{1}[A-Z]{2}[-]{1}(\\d{1,3})$");
//     regex pattern3("^(201[5-9])[-]{1}[A-Z]{1}[/]{1}(201[5-9])[-]{1}[A-Z]{2}[-]{1}(\\d{1,3})$");
//     string a;
//     int rollno;
//     cout<<"Enter reg no: ";
//     cin>>a;
//     smatch match;
//     if(regex_match(a,match, pattern1))
//         {
//             string rollnost=match[3].str();
//             cout<<rollnost;
//             rollno=stoi(rollnost);
//             cout<<"hello";
//             if(rollno>=1 && rollno <=260)
//                 {
//             cout<<a<<" is valid registration registration number";
//                 }
//         }
//     else
//      if(regex_match(a, pattern2))
//         {
//             cout<<a<<" is valid registration registration number";
                       
//         }
//         else
//      if(regex_match(a, pattern3))
//         {
//             cout<<a<<" is valid registration registration number";
                       
//         }  
//     else
//         {
//             cout<<a<<" is not valid registration number";
//         }

// }
{
    string a="2015-CS-1";
    string b="2015-R/2019-CS-1";
    string c="2015-CD-CS-1";
    string e="2019-CS-260";
    string f="2019-R/2019-CS-260";
    string g="2019-CD-CS-260";
    string d;
    cout<<"Enter Reg No: ";
    cin>>d;
    if(a<=d || b<=d || c<=d)
    {
        if(e>=d || f>=d || g>=d)
        {
        cout<<d<<" is valid";  
        }
        else
         cout<<d<<" is invalid";
    }
    else
    cout<<d<<" is invalid";




}




