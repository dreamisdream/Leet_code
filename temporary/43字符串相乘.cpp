#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

string multiply(string num1, string num2){
    int n1=num1.size();
        int n2=num2.size();
        string res(n1+n2,'0');
        for(int i=n2-1;i>=0;i--){
            for(int j=n1-1;j>=0;j--){
                int temp=(res[i+j+1]-'0')+(num1[j]-'0')*(num2[i]-'0');
                res[i+j+1]=temp%10+'0';//��ǰλ
                res[i+j]+=temp/10; //ǰһλ���Ͻ�λ��res[i+j]�Ѿ���ʼ��Ϊ'0'������int�����Զ�ת��Ϊchar�����Դ˴�����'0'
            }
        }
//ȥ����λ'0'
        for(int i=0;i<n1+n2;i++){
            if(res[i]!='0')
                return res.substr(i);
        }
        return "0";
}
string multiply02(string num1, string num2){
  
  
}

int main(){
    string str("2");
    string str2("2288");
    cout<< multiply(str2,str)<<endl;
    cout<< multiply02(str2,str)<<endl;
    return 0;
}