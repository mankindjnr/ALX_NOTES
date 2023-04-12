/**
 * have a sorted array is requirement of binary search
*/
//we are returing the index of the element we are searching for
//the array is
//a[] = {5-9-17-23-25-45-59-63-71-89}
/**
 * data == target value
 * first index + last index = 0 + 9 = 9
 * get the mid = 4
 * if data == a[mid]
 *      return mid
 * else if data < a[mid]
 *      search the left sub_array(FirstIndex(0) lastIndex(mid))
 * else if data > a[mid]
 *      search the right sub_array(firstidnex(mid + 1) lastindex==last index)
 * 
 * if the value we are searching for is not present, then the base case will be
 * if the left index is greater that the right index(first index > last index) 
 *      the value is not in the array
*/
#include <stdio.h>

/**
 * the binary search function
 * length of the array = n = 10
 * data = the target value
 * binary_search(a, n, data)
 * {
 *      left = 0;
 *      right = n - 1;
 *      mid = (left + right) / 2;
 * 
 * while(left < right)    //the base case for when the value is not in the array
 * {
 *      if (data == a[mid])
 *      {
 *          return mid;
 *      }
 *      else if (data < a[mid])
 *      {
 *          left = mid - 1;
 *      }
 *      else
 *      {
 *          right = mid + 1;
 *      }
 * }
 * return (-1) -> //not found
 * 
 * TIME COMPLEXITY - 0(log n)
 * 
 * }
*/
