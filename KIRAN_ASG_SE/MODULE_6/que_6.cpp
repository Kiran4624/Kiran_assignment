#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_s()
                {
                     cout<<"\n Enter String =";
                        cin>>str;
                }
                void display_s()
                {
                        cout<<str;
                }
                String operator+(String x) 
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;
         str1.accept_s();
        str2.accept_s();

        cout<<"\n .................................";
        cout<<"\n\n First String is = ";
        str1.display_s();   

        cout<<"\n\n Second String is =  ";
        str2.display_s();  

        cout<<"\n .................................";
        str3=str1+str2;      
        cout<<"\n\n Concatenated String is    :  ";
        str3.display_s();

}