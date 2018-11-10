    #include <stdio.h>

    int main()

    {

 

        int a[30];

 

        int i, j, b, n;

        printf("Enter the value of N\n");

        scanf("%d", &n);

 

        printf("Enter the numbers \n");

        for (i = 0; i < n; ++i)

	        scanf("%d", &a[i]);

 

        /*  sorting begins ... */

 

        for (i = 0; i < n; ++i) 

        {

            for (j = i + 1; j < n; ++j) 

            {

                if (a[i] < a[j]) 

                {

                    b = a[i];

                    a[i] = a[j];

                    a[j] = b;

                }

            }

        }

 

        printf("\nThe Second Largest Number= %d",a[1]);

 return 0;
}
