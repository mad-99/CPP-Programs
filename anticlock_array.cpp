#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int m, n;
    cin >> m >> n;
    int ut, uj;
    int a[m][n];
    for (ut = 0; ut < m; ut++)
        for (uj = 0; uj < n; uj++)
            cin >> a[ut][uj];

 int i, k = 0, l = 0;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n)
    {

        /* Print the first column from the remaining columns */
        for (i = k; i < m; ++i)
            {
                printf("%d, ", a[i][l]);
            }
            l++;    


        /* Print the last row from the remaining rows */
        for (i = l; i < n; ++i)
            {
                printf("%d, ", a[m-1][i]);
            }
            m--;


        /* Print the last column from the remaining columns */
        for (i = m-1; i >=k; --i)
        {
            printf("%d, ", a[i][n-1]);
        }
        n--;



        /* Print the first row from the remaining rows */
        for (i = n-1; i >=l; --i)
        {
            printf("%d, ", a[k][i]);
        }
        k++;
    }
    cout << "END";
    return 0;
}