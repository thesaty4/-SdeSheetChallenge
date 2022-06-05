void sort012(int *arr, int n)

{

  int low=0 ; int mid =0;

   int high = n-1;

   while(mid<=high){

       switch(arr[mid])

       {

           //if the element is 0

           case 0:

               swap(arr[low++],arr[mid++]);

               break;

           //if the element is 1

           case 1:

               mid++;

               break;

           //if the element is 2

           case 2:

               swap(arr[mid],arr[high--]);

               break;

       }

   }

   

}