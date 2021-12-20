#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

                          //  Array Challenges Questions 
                                // Max Till i

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int mx = INT_MIN;

//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//     }

//     for(int i=0;i<n;i++){
//         mx = max(mx, arr[i]);

//         cout<< mx << " ";
//     }

//     return 0;
// }

                          // Sum Of all Subarrays 
                        
// int main()
// {
//     int n;
//     cin>>n;
//     int arr [n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int currSum = 0;

//     for(int i=0;i<n;i++){
        
//         for(int j=i;j<n;j++){
//             currSum += arr[j];
//             cout<< currSum << " ";
//         }
//     }

//     return 0; 
// }

                        // Longest Arithmetic Subarray 
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j = 2;
//     int curr = 2;
      
//     while(j < n )
//     {
//         if(pd == arr[j] - arr[j-1])
//         {
//             curr++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j-1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }

//     cout<< ans << endl;

//     return 0;
// }
                                // RECORD BREAKER QUESTION // GOOGLE KICKSTART

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n+1];
//     a[n] = -1;

//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     int ans = 0;
//     int mx = INT_MIN;

//     if(n == 1){
//         cout<< "1" << endl;
//         return 0;
//     }
    
//     for(int i=0;i<n;i++){
//         if(a[i] > mx && a[i] > a[i+1]){
//             ans++;
//         }
//         mx = max(mx, a[i]);
//     }
//     cout<< ans << " ";
    
// }
                                 // First Reapeating element (Amazon, Oracle)
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     const int N = 1e6+2;
//     int indx[N];
//     for(int i=0; i<N; i++){
//         indx[i]=-1;
//     }
//     int minidx= INT_MAX;
//     for(int i=0; i<n; i++){
//         if(indx[arr[i]]!=-1){
//             minidx = min(minidx, indx[arr[i]]);
//         }
//         else{
//             indx[arr[i]]= i;
//         }
//     }
//     if(minidx==INT_MAX){
//         cout<<"-1"<<endl;
//     }else{
//         cout<< minidx;
//     }
//     return 0;
// }
                                // Subarray With Given Sum (Google, Facebook, amazon, visa)

// int main()
// {
//     int n , s;
//     cin >> n >> s;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
    
//     int i=0, j=0, st=-1, en=-1, sum=0;
//     while(j<n && sum + a[j] <= s )
//     {
//         sum = sum + a[j];
//         j++;
//     }
//     if(sum == s)
//     {
//         cout<< i+1 << " " << j << endl; 
//         return 0;
//     }

//     while(j<n)
//     {
//         sum += a[j];
//         while(sum > s)
//         {
//             sum -= a[i];
//             i++;
//         }
//         if(sum == s)
//         {
//             st = i+1;
//             en = j+1;
//             break;
//         }
//         j++;
//     }
//     cout<< st << " " << en << endl;

//     return 0;

// }
                                   // Smallest Positive missing number 
                        // Amazon, Accolite, Samsung, Snapdeal
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     const int N = 1e6 + 2;
//     bool check[N];
//     for(int i=0; i<N; i++){
//         check[i] = false;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i] >= 0){
//             check[a[i]] = true;
//         }
//     }
//     int ans = -1;
//     for(int i=1;i<N;i++){
//         if(check[i] == false){
//             ans = i;
//             break;
//         }
//     }
//     cout<< ans <<endl;
//     return 0;
// }

                                 // Subarray Challenges 
                        // Printing the possible subarray of given array
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k] << " ";
//             }cout<< endl;
//         }
//     }

//     return 0;
// }
                                // Maximum Subarray Sum Problem
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum = 0;
//             for(int k=i;k<=j;k++){
//                 cout<< a[k] << " ";
//                 sum += a[k];
//             }
//             cout<< endl;
//             maxSum = max(maxSum, sum);
//         }
//     }

//     cout<< "Maximum Subarray Sum = " << maxSum << endl;

//     return 0;
// }
                            // Better Approach then ABOVE code 
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
    
//     int currsum[n+1];
//     currsum[0] = 0;

//     for(int i=1; i<=n; i++){
//         currsum[i] = currsum[i-1] + arr[i-1];
//     }

//     int maxSum = INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum = 0;
//         for(int j=0;j<i;j++){
//             sum = currsum[i] - currsum[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
    
//     cout<< maxSum << endl;

//     return 0;
// }
                                // BEST APPROACH FOR ABOVE PROBLEM - 
                                // USIGN KADANE'S ALGORITHM
// int main()
// {
//     int n;;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     int currsum = 0;
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++) {
//         currsum += a[i];
//         if(currsum < 0){
//             currsum = 0;
//         }
//         maxSum = max(maxSum, currsum);
//     }
//     cout<< maxSum << endl;
//     return 0;
// }
                                // MAXIMUM CIRCULAR SUBARRAY SUM :-
// int kadane(int arr[], int n){
//     int currsum = 0;
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++) {
//         currsum += arr[i];
//         if(currsum < 0){
//             currsum = 0;
//         }
//         maxSum = max(maxSum, currsum);
//     }
//     return maxSum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int wrapsum;
//     int nonwrapsum;

//     nonwrapsum = kadane (arr, n);
//     int totalsum = 0;
//     for(int i=0;i<n;i++){
//         totalsum += arr[i];
//         arr[i] = -arr[i];
//     }
    
//     wrapsum = totalsum + kadane(arr, n);
//     cout<< max(wrapsum, nonwrapsum) << endl;

//     return 0;

                                // Pair sum problem
        // Check if there exists two elements in an array such that their sum is equal to given K.
        //  Time Complexity is O(n^2)
// bool pairSum(int arr[], int n, int k){
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i] + arr[j] == k)
//             {
//                 cout<< i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//     cout<< pairSum(arr, n , k) <<endl;

//     return 0;
// }
                            // Better version of above code with
                            // Time complexity of order n.
// bool pairSum(int arr[], int n, int k){
//     int low = 0;
//     int high = n-1;
//     while(low < high)
//     {
//         if(arr[low] + arr[high] == k)
//         {
//             cout<< low << " " << high << endl;
//             return true;
//         }
//         else if (arr[low] + arr[high] > k)
//         {
//             high --;
//         }
//         else{
//             low ++;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//     cout<< pairSum(arr, n , k) <<endl;

//     return 0;
// }

                            // 2 - D ARRAY
                    // Spiral Order Matrix Traversal

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int row_start=0, row_end=n-1, column_start=0, column_end=m-1;

//     while(row_start <= row_end && column_start <= column_end)
//     {
//         // for Row_Start
//         for(int col = column_start; col <= column_end;col++){
//             cout<< arr[row_start][col] << " ";
//         }
//         row_start++;

//         // for column_end
//         for(int row = row_start; row <=row_end; row++){
//             cout<< arr[row][column_end]<< " ";
//         }
//         column_end--;

//         // for row_end
//         for(int col = column_end; col>=column_start; col--){
//             cout<< arr[row_end][col] << " ";
//         }
//         row_end--;

//         // for column_start
//         for(int row = row_end; row>=row_start; row--){
//             cout<< arr[row][column_start] << " ";
//         }
//         column_start++;
//     }

//     return 0;
// }
                                // 2 D Array Challenge
                    // Matrix Transpose
// int main()
// {
//     int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             // Swap code
//             int temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
//         }
        
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<< a[i][j] << " ";
//         }
//         cout<< endl;
//     }

//     return 0;
// }
                                // Matrix Multiplcaiton

// int main()
// {
//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;

//     int m1[n1][n2];
//     int m2[n2][n3];

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin >> m1[i][j];
//         }
//     }

//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin >> m2[i][j];
//         }
//     }

//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j] = 0;
//         }
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 ans[i][j] += m1[i][k] * m2[k][j];
//             }
//         }
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<< ans[i][j] << " ";
//         }
//         cout<< endl;
//     }
//     return 0;
// }
                                    // Matrix Search || having Sorted Matrix
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int mat[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> mat[i][j];
//         }
//     }
//     int target;
//     cin >> target;

//     int r=0;
//     int c = m-1;
//     bool found = false;
//     while(r<=n && c>=0)
//     {
//         if(mat[r][c] == target){
//             found = true;
//         }
//         if(mat[r][c] > target){
//             c--;
//         }
//         else{
//             r++;
//         }
//     }
//     if(found)
//     {
//         cout<< "Element found ";
//     }
//     else{
//         cout<< "Element Does not exist";
//     }
// }
                                    // Character Array
                        // Check given charater is palindrom or not
// int main()
// {
//     int n;
//     cin >> n;
//     char arr[n+1];
//     cin >> arr;

//     bool check = true;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] != arr[n-1-i])
//         {
//             check = false;
//             break;
//         }
//     }
//     if(check == true){
//         cout<< "Character in palindrom"<<endl;
//     }
//     else{
//         cout<< "Character is not a plindrom";
//     }
// }
                                // Maximum Length word in a sentence
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int maxLength = 0, currLength = 0 , i;

    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLength > maxLength){
                maxLength = currLength;
            }
            currLength = 0;
        }
        else
        currLength ++;
        if(arr[i] == '\0'){
            break;
        }
        i++;

        
    }

    cout<< maxLength << endl;
    return 0;
}