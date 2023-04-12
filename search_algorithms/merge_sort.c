/**
 * complete array is split to smaller sub-arrays till when there is only one element
 * then join all the splits are joined in order to get a complete sorted list
 * 
 * a[] = {15-5-24-8-1-3-16-10-20}
 * lowerbound - lb = first index
 * upper bound - ub = last index
 * 
 * split by getting the middle index (o + last index)/ 2
 * continue dividing the sublists
 * 
 * A = array to sort
 * 
 * mergeSort(A, lb, ub)
 * {
 *      if (lb < ub)
 * {
 *      mid = (lb + ub) / 2;
 *      mergeSort(A, lb, mid);
 *      mergeSort(A, ub, mid);
 *      mergeSort(A, lb, mid, ub);
 * }
 * }
 * 
 * merge(A, lb, mid, ub)
 * {
 *      i = lb;
 *      j = mid + 1;
 *      k = lb;
 * while(i <= mid && j <= ub)
 * {
 *      if(a[i] <= a[j])
 *      {
 *          b[k] = a[i];
 *          i++, k++;
 *      }
 *      else
 *      {
 *          b[k] = a[j];
 *          j++, k++;
 *      }
 * }
 * 
 * if (i > mid)
 * {
 *      while (j <= ub)
 *      {
 *          b[k] = a[j];
 *          j++;
 *          k++;
 *      }
 * }
 * else
 * {
 *      while (i <= mid)
 *      {
 *          b[k] = a[i];
 *          i++;
 *          k++;
 *      }
 * }
 * }
*/