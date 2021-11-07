#include<iostream>
using namespace std;
                    /* spiral M x N matrics spiral traversing */
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = row-1;
    int col_start = 0;
    int col_end = col-1;

    cout<<"after rotation"<<endl;

    while(row_start <= row_end && col_start <= col_end)
    {
        for(int c = col_start;c<=col_end;c++)
        {
            cout<<arr[row_start][c]<<" ";
        }
        
        row_start++;

        for(int r = row_start;r<=row_end;r++)
        {
            cout<<arr[r][col_end]<<" ";
        }
        
         col_end--;

        for(int c = col_end;c>=col_start;c--)
        {
            cout<<arr[row_end][c]<<" ";
        }
    
        row_end--;

        for(int r = row_end;r>=row_start;r--)
        {
            cout<<arr[r][col_start]<<" ";
        }
    
         col_start++;
    }

    return 0;
}