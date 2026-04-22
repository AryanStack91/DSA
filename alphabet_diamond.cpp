 #include<iostream>
 using namespace std;
 int main(){
   int n;
   
   cin>>n;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=0;k<2*i-1;k++){

        cout<<char('A'+k);
        
    }
    cout<<endl;

   }
    
     for(int i=n+1;i<=2*n-1;i++){
        for(int j=1;j<=i-n;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(2*n-i)-1;k++){
            cout<<(char)('A'+k);

        }
        cout<<endl;
    }

   return 0;
 }