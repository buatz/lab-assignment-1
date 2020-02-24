#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b,j,found=0;

cout << "How many items do you want to enter?" <<endl;
cin >>a;

int arr[a];

cout << "Enter the numbers one by one." <<endl;
for (int i=0;i<a;i++)
{
    cin >> arr[i];
}

cout << "What number do you want to search for?" << endl;
cin >>b;

for(j=0;j<a;j++)
{
    if(b==arr[j])
    {
        found = 1;
       // v = j+1;

        break;
    }
};

    if (found == 1){
        cout << "Number found at position " << j+1 <<endl;
    }else{
        cout << "Number not found." << endl;
    };

    system("pause");
    return 0;
}

