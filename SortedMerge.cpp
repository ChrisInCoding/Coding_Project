

//problem: given two sorted array, A and B, where A has a large enough buffer at the end to B. Write a method to merge B into A in sorted ordered

// if we insert an element into the front of A, then we will have to shift the existing elements backwards to make room for it.

void merge(int[] a,int[] b, int countA, int countB)
{
    int indexMerge = countA + countB -1; // last location of merged array
    int indexA = countA-1; // last element in array a
    int indexB = countB-1; // last element in array b

    /*Merge a and b start from the last element in each*/
    while(indexB>=0){
        if(indexA>=0 && a[indexA]>b[indexB])  // end of A > end of b
        {
            a[indexMerge] = a[indexA];  // copy element
            indexA--;
        }
        else
        {
            a[indexMerge] = b[indexB];  // copy element
            indexB--;
        }
        indexMerge--; // move indice
    }

}