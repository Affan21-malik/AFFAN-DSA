/*
#include <iostream>
using namespace std;
void printnums(int n){
if(n==1){
    cout<<" 1 \n";
    return;
}
cout<<n<<" ";
printnums(n-1);

}
int main()
{
    printnums(4);// jo print krane yha dalna ha to 4 sa 1 tk print hoga 

    return 0;
}
*/



// for n factorial
/*
#include <iostream>
using namespace std;
int factorial(int n){
if(n==1){
    return 1;
}
 return n* factorial(n-1);

}
int main()
{
    cout<<factorial(4)<<endl; 

    return 0;
}

*/



// n sum 

#include <iostream>
using namespace std;
int sumof(int n){
if(n==1){
    return 1;
}
 return n+sumof(n-1);

}
int main()
{
    cout<<sumof(4)<<endl; 

    return 0;
}
