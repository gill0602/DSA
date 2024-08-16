#include <bits/stdc++.h> 

string one[]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
string ten[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};

string numtowords(int n ,string s){
    string str="";
    if(n>19){
        str=str+ ten[n/10] + one[n%10];
    }
    else{
        str=str+one[n];
    }
    if(n){
        str=str+s;
    }
    return str;
}

string handleAll(int n)
{
    //Write your code here.
    string out="";
    out=out+numtowords(n/10000000, "crore ");
    out=out+numtowords((n/100000)%100,"lakh ");
    out=out+numtowords((n/1000)%100,"thousand ");
    out=out+numtowords((n/100)%10,"hundred ");
    if(n>100 && n%100){
        out=out+"and ";
    }
    out=out+numtowords((n%100),"");
    if(out==""){
        out="zero";
    }
    return out;

}