/****************** Reverse an array ***************/
// #include<iostream>
// using namespace std;

/* Function to reverse arr[] from start to end using iterative way*/
// void rvereseArray(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// } 
// void reverseArray(int arr[], int len){
//     for (int i = len-1; i >= 0; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

/* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end)
// {
//     if (start >= end)
//     return;
     
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
     
//     // Recursive Function calling
//     rvereseArray(arr, start + 1, end - 1);
// } 

// int main(){

//     int arr[] = {1, 2, 3, 4, 5, 6};
     
//     int n = sizeof(arr) / sizeof(arr[0]); // getting the length of array

//     // rvereseArray(arr, 0, n-1);

//     // reverseArray(arr, len);

//     // print reverse array
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

/************* How do you get the matching elements in an integer array *******************/

/************** How do you sum all the elements in an array ******************/
// #include<iostream>
// using namespace std;

// int sumArray(int arr[], int len){
//     int sum = 0;
//     for (int i = 0; i < len; i++)
//     {
//         sum += arr[i];
//     }
    
//     return sum;
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     cout<<sumArray(arr, len);
    

//     return 0;
// }

// Find the Missing Number
// Method : This method uses the technique of the summation formula.
// #include <bits/stdc++.h>
// using namespace std;

// // Function to get the missing number
// int getMissingNo(int a[], int n)
// {

// 	int total = (n + 1) * (n + 2) / 2;
//     // cout<<total<<endl;
// 	for (int i = 0; i < n; i++)
// 		total -= a[i]; // 20, 18, 14, 9, 3 // 21 - 18 = 3

// 	return total;
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 2, 4, 5, 6 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
//     // cout<<n<<endl;
// 	int miss = getMissingNo(arr, n);
// 	cout << miss;
// }



/************* Find the minimum and maximum element in an array ************/
// #include<bits/stdc++.h>
// using namespace std;

// int getMin(int arr[], int n)
// {
// 	int result = arr[0];
// 	for(int i=1; i<n; i++)
// 	{
// 		result = min(result, arr[i]);
// 	}

// 	return result;
// }

// int getMax(int arr[], int n)
// {
// 	int result = arr[0];
// 	for(int i=1; i<n; i++)
// 	{
// 		result = max(result, arr[i]);
// 	}

// 	return result;
// }

// int main(){
//     int arr[] = { 12, 23, 222, 45, 2 };
//     int len_arr = sizeof(arr) / sizeof(arr[0]);
//     // cout<<len_arr;
//     // cout<<getMin(arr, len_arr)<<endl;
//     // cout<<getMax(arr, len_arr);
    
//     return 0;
// }

/************ Write a program to reverse the array ***********/
// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

// void reverseArray(int arr[], int start, int end){
//     int temp;
//     while (start < end)
//     {
//         // start = 0 , end = 3
//         // start = 3 , end = 0
//         temp = arr[start]; 
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++; // start = 1
//         end--; // end = 2
//     }
    
// }

// int main(){
//     int arr[] = { 12 , 23 , 34 , 45 };
//     int len_arr = sizeof(arr) / sizeof(arr[0]);

//     // printArray(revArr, len_arr);
//     // cout<<endl;

//     cout<<"Reversed array: ";
//     reverseArray(arr, 0, len_arr-1);
//     printArray(arr, len_arr);

//     return 0;
// }

/**************** Write a program to sort the given array ***************/
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void printArray(int arr[], int n)
// {
// 	for(int i=0; i<n; i++)
// 	{
// 		cout<<arr[i]<<" ";
// 	}

// 	cout<<"\n";
// }

// int main()
// {
// 	int arr[] = {12, 5, 23, 6, 7};
// 	int len = sizeof(arr)/sizeof(arr[0]);
// 	printArray(arr, len);

// 	sort(arr, arr+len); // By default ascending order
// 	// sort(arr, arr+len, greater<int>());

// 	printArray(arr, len);
// 	return 0;
// }


/************ Find the occurrence of an integer in the array **************/
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 1, 1, 1, 1}, x = 1;

//     int count=0;
//     for(int item: arr)
//     {
//         if(item == x)
//         {
//             count++;
//         }
//     }

//     cout<<count;

//     return 0;
// }