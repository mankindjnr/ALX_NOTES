/**
 * if only one number
 *      quit
 * else
 *      sort left half of numbers
 *      sort right half of numbers
 *      merge sorted halves
*/

int binary_search(int *array, int x, int low, int high)
{
    int mid, x;

    if (low > high)
    {
        return -1;
    }
    else{
        mid = (low + high) / 2;
        
        if (x == array[mid])
        {
            return mid;
        }
        else if (x > array[mid])
        {
            return binary_search(array, x, mid + 1, high);
        }
        else{
            return binary_search(array, x, low, mid - 1);
        }
    }
}