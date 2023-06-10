#include<iostream>
using namespace std;
//-------------------------------------bu array method-----------------------------------------
int main(){
    int array[]={1,2,3,4,5};
 int k =2;
    int n =5;
    k=k%n;

    int ansarray[5];
    int j=0;
    // put n-k element in our new array;
    for(int i=n-k ; i<n ;i++){
        ansarray[j++]=array[i];
    }
    for(int i=0 ; i<=k ; i++){
        ansarray[j++]=array[i];
    }

    for(int i=0 ; i<n ;i++){
        cout<<ansarray[i]<<" ";
    }
    return 0;
}

//-----------------------------------------------by vector method --------------------------------------------------------------
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k = 2;
    k = k % v.size();

    // reverse(v.begin(),v.end());
    // reverse(v.begin(), v.begin()+k);
    // reverse(v.begin()+k ,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;


    return 0;
}
