#include <iostream>

using namespace std;

int main()
{
    int num,check,i ;
    string message ;
    cout<<"if you want to cipher press 1 if you want to decipher press 2 \n";
    cin>>check;
    if (check==1){
    char arr[78]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout<<"enter the message without spaces"<<" ";
    cin>>message ;
    cout<<"enter the number of shifts"<<" ";
    cin>>num ;
    for (i=0;i<message.length();i++){
    message[i]=tolower(message[i]);
    if (message[i]==arr[26]){
                cout<<arr[26+num]<<" ";
                                 }
    else if (message[i]==arr[27]){
                cout<<arr[27+num]<<" ";
                                 }
    else if (message[i]==arr[28]){
                cout<<arr[28+num]<<" ";
                                      }
     else if (message[i]==arr[29]){
                cout<<arr[29+num]<<" ";
                                 }
      else if (message[i]==arr[30]){
                cout<<arr[30+num]<<" ";
                                 }
     else if (message[i]==arr[31]){
                cout<<arr[31+num]<<" ";
                                 }
      else if (message[i]==arr[32]){
                cout<<arr[32+num]<<" ";
                                 }
     else if (message[i]==arr[33]){
                cout<<arr[33+num]<<" ";
                                 }
      else if (message[i]==arr[34]){
                cout<<arr[34+num]<<" ";
                                 }
     else if (message[i]==arr[35]){
                cout<<arr[35+num]<<" ";
                                 }
      else if (message[i]==arr[36]){
                cout<<arr[36+num]<<" ";
                                 }
      else if (message[i]==arr[37]){
                cout<<arr[37+num]<<" ";
                                 }
      else if (message[i]==arr[38]){
                cout<<arr[38+num]<<" ";
                                 }
      else if (message[i]==arr[39]){
                cout<<arr[39+num]<<" ";
                                 }
      else if (message[i]==arr[40]){
                cout<<arr[40+num]<<" ";
                                 }
      else if (message[i]==arr[41]){
                cout<<arr[41+num]<<" ";
                                 }
      else if (message[i]==arr[42]){
                cout<<arr[42+num]<<" ";
                                 }
      else if (message[i]==arr[43]){
                cout<<arr[43+num]<<" ";
                                 }
      else if (message[i]==arr[44]){
                cout<<arr[44+num]<<" ";
                                 }
      else if (message[i]==arr[45]){
                cout<<arr[45+num]<<" ";
                                 }
      else if (message[i]==arr[46]){
                cout<<arr[46+num]<<" ";
                                 }
      else if (message[i]==arr[47]){
                cout<<arr[47+num]<<" ";
                                 }
      else if (message[i]==arr[48]){
                cout<<arr[48+num]<<" ";
                                 }
      else if (message[i]==arr[49]){
                cout<<arr[49+num]<<" ";
                                 }
      else if (message[i]==arr[50]){
                cout<<arr[50+num]<<" ";
                                 }
      else if (message[i]==arr[51]){
                cout<<arr[51+num]<<" ";
                                 }
      else if (message[i]==arr[52]){
                cout<<arr[52+num]<<" ";

                                 }
    }
    }
    else {
    char arr[78]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    cout<<"enter the message without spaces"<<" ";
    cin>>message ;
    cout<<"enter the number of shifts"<<" ";
    cin>>num ;
    for (i=0;i<message.length();i++){
    message[i]=tolower(message[i]);
    if (message[i]==arr[26]){
                cout<<arr[26+num]<<" ";
                                 }
    else if (message[i]==arr[27]){
                cout<<arr[27+num]<<" ";
                                 }
    else if (message[i]==arr[28]){
                cout<<arr[28+num]<<" ";
                                      }
     else if (message[i]==arr[29]){
                cout<<arr[29+num]<<" ";
                                 }
      else if (message[i]==arr[30]){
                cout<<arr[30+num]<<" ";
                                 }
     else if (message[i]==arr[31]){
                cout<<arr[31+num]<<" ";
                                 }
      else if (message[i]==arr[32]){
                cout<<arr[32+num]<<" ";
                                 }
     else if (message[i]==arr[33]){
                cout<<arr[33+num]<<" ";
                                 }
      else if (message[i]==arr[34]){
                cout<<arr[34+num]<<" ";
                                 }
     else if (message[i]==arr[35]){
                cout<<arr[35+num]<<" ";
                                 }
      else if (message[i]==arr[36]){
                cout<<arr[36+num]<<" ";
                                 }
      else if (message[i]==arr[37]){
                cout<<arr[37+num]<<" ";
                                 }
      else if (message[i]==arr[38]){
                cout<<arr[38+num]<<" ";
                                 }
      else if (message[i]==arr[39]){
                cout<<arr[39+num]<<" ";
                                 }
      else if (message[i]==arr[40]){
                cout<<arr[40+num]<<" ";
                                 }
      else if (message[i]==arr[41]){
                cout<<arr[41+num]<<" ";
                                 }
      else if (message[i]==arr[42]){
                cout<<arr[42+num]<<" ";
                                 }
      else if (message[i]==arr[43]){
                cout<<arr[43+num]<<" ";
                                 }
      else if (message[i]==arr[44]){
                cout<<arr[44+num]<<" ";
                                 }
      else if (message[i]==arr[45]){
                cout<<arr[45+num]<<" ";
                                 }
      else if (message[i]==arr[46]){
                cout<<arr[46+num]<<" ";
                                 }
      else if (message[i]==arr[47]){
                cout<<arr[47+num]<<" ";
                                 }
      else if (message[i]==arr[48]){
                cout<<arr[48+num]<<" ";
                                 }
      else if (message[i]==arr[49]){
                cout<<arr[49+num]<<" ";
                                 }
      else if (message[i]==arr[50]){
                cout<<arr[50+num]<<" ";
                                 }
      else if (message[i]==arr[51]){
                cout<<arr[51+num]<<" ";
                                 }
      else if (message[i]==arr[52]){
                cout<<arr[52+num]<<" ";

                                 }
    }
    }
    return 0;
}
