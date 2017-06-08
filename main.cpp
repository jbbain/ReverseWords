/***************************************/
/*Jared Bain              Assignment#9 */
/*CISC 1110 TR8B            Dec 3,2013 */
/***************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int countwords(string);
string reverse(string);

int main()
{
int leastc,mostc=0;
string most,least;
string str,rstr;
    ifstream datafile;
        datafile.open("Datafile.txt");
      getline(datafile,str);
    leastc=countwords(str);
    while(datafile){
rstr=reverse(str);
    if(mostc<=countwords(str)){
        most=str;
        mostc=countwords(str);}
    if(leastc>countwords(str)){
        least=str;
        leastc=countwords(str);}
cout<<"SENTENCE:  "<<str<<endl<<"REVERSE:  "<<rstr<<endl<<"NUMBWORDS: "<<countwords(str)<<endl<<endl;
getline(datafile,str);
}
cout<<endl<<"MOST: "<<most<<endl<<"LEAST: "<<least<<endl;
    return 0;
}

int countwords(string str){
	int numspaces=1;
    char spaces=' ';
for(int i=0;i<str.length();i++){
    if(str[i]==spaces){
        numspaces++;}
}
	return numspaces;
}
string reverse(string str){
string rstr="";
char spaces=' ',dot='.';
for(int n=str.length();n>=0;n--){
    if(str[n]==spaces||str[n]==dot){
   rstr=rstr+str.substr(n,str.length());
    str.erase(n,str.length());}
   else if(str[n]==str[0]){
    rstr=rstr+spaces+str.substr(n,str.length());
   }}

return rstr;
}
