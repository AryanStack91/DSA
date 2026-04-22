 #include<iostream>
 using namespace std;
 
 int main()
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int k,c=0;
     cout<<"enter the value:"<<endl;
     cin>>k;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                c++;
            }   
        }
     }
     if(c!=0)
        cout<<"YES";
    else
        cout<<"NO";
     return 0;
 }