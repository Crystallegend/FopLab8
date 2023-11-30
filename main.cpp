#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
---------------------------------------------------------------------------------
Uncomment any one task to run it.
---------------------------------------------------------------------------------
*/
/*
---------------------------------------------------------------------------------
Home Task 3
---------------------------------------------------------------------------------
*/

/*
    int len=5, nums[len], temp;
    for (int i=0; i<len; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>nums[i];
    }

    temp = nums[2];
    nums[2] = nums[4];
    nums[4] = temp;

    cout<<"Swapped array is: {";
    for (int i=0; i<len; i++) {
        cout<<nums[i];
        if (i==len-1)
            continue;
        cout<<", ";
    }
    cout<<"}";
*/

/*
---------------------------------------------------------------------------------
Home Task 2
---------------------------------------------------------------------------------
*/

/*
    int len=8, a[len] = {13, 15, 17, 9, 99, 77, 65, 43};
    int larger, smaller;

    larger = a[1];
    smaller = a[1];
    for (int i=0; i<len; i++) {
        if (larger < a[i])
            larger = a[i];
        if (smaller > a[i])
            smaller = a[i];
    }

    cout<<"Largest element is: "<<larger<<endl;
    cout<<"Smallest element is: "<<smaller;
*/

/*
---------------------------------------------------------------------------------
Home Task 1
---------------------------------------------------------------------------------
*/

/*
    int len, sum, large;
    bool check;
    string record = "";
    cout<<"Enter the size of array: ";
    cin>>len;
    float nums[len];

    // Get array elements
    cout<<"Enter the elements of array: ";
    for (int i=0; i<len; i++) {
        cin>>nums[i];
    }

    // Making a string which shows the number of times each value occurs in array
    for (int i=0; i<len; i++){

        check = false;
        for (int j=0; j<i; j++) {
            if (nums[i]==nums[j])
                check=true;
        }
        if (check)
            continue;

        sum=0;
        for (int j=0; j<len; j++) {
            if (nums[i]==nums[j])
                sum++;
        }

        record += to_string((int)nums[i])+to_string(sum);
    }

    // Determine the values with most occurences
    large = 0;
    for (int i=1; i<record.length(); i+=2) {
        if (((int)record[i]-48)>large)
            large = (int)record[i]-48;
    }

    // Printing results
    cout<<"Most repeated elements are: ";
    for (int i=1; i<record.length(); i+=2) {
        if (large == ((int)record[i]-48))
            cout<<record[i-1]<<" ";
    }
*/

/*
---------------------------------------------------------------------------------
Lab Task 3
---------------------------------------------------------------------------------
*/

/*
    int len=5, nums[len], indOfMin, temp;
    for (int i=0; i<len; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>nums[i];
    }

    for (int i=0; i<len; i++) {
        indOfMin = i;
        for (int j=i+1; j<len; j++) {
            if (nums[j]<nums[indOfMin])
                indOfMin = j;
        }

        temp = nums[i];
        nums[i] = nums[indOfMin];
        nums[indOfMin] = temp;
    }

    cout<<"Sorted array is: {";
    for (int i=0; i<len; i++) {
        cout<<nums[i];
        if (i==len-1)
            continue;
        cout<<", ";
    }
    cout<<"}";
*/

/*
---------------------------------------------------------------------------------
Lab Task 2
---------------------------------------------------------------------------------
*/

/*
    int len=5, nums[len], temp;
    for (int i=0; i<len; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>nums[i];
    }

    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-1; j++) {
            if (nums[j]>nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    cout<<"Sorted array is: {";
    for (int i=0; i<len; i++) {
        cout<<nums[i];
        if (i==len-1)
            continue;
        cout<<", ";
    }
    cout<<"}";
*/

/*
---------------------------------------------------------------------------------
Lab Task 1
---------------------------------------------------------------------------------
*/

/*
    int length;
    float sum=0;
    cout<<"Enter the size of array: ";
    cin>>length;
    float nums[length];

    cout<<"Enter the elements of array: ";
    for (int i=0; i<length; i++) {
        cin>>nums[i];
    }

    for (int i=0; i<length; i++)
        sum+=nums[i];

    cout<<"The average is "<<sum/length;
*/
    return 0;
}
