#include<stdio.h>
#include<limits.h>
int harr[100009];
int capacity; 
int heap_size;
int parent(int i) { return (i-1)/2; }
int left(int i) { return (2*i + 1); }
int right(int i) { return (2*i + 2); }
int getMax() { return harr[0]; }
void MaxHeap(int cap)
{
    heap_size = 0;
    capacity = cap;
}
void insertKey(int k)
{
    if (heap_size == capacity)
    {
        printf("\nOverflow: Could not insertKey\n");
        return;
    }
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;
    while (i != 0 && harr[parent(i)] < harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}
void decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] < harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}
int deleteMax()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }
    int root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MaxHeapify(0);
    return root;
}
void deleteKey(int ele)
{
    int index,u;
    for(u=0;u<heap_size;u++)
    {
    if(harr[u]==ele)
    {index=u;break;}
    }
    decreaseKey(index, INT_MAX);
    deleteMax();
}
void MaxHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest = i;
    if (l < heap_size && harr[l] > harr[i])
        largest = l;
    if (r < heap_size && harr[r] > harr[largest])
        largest = r;
    if (largest != i)
    {
        swap(&harr[i], &harr[largest]);
        MaxHeapify(largest);
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int u,k,i;
    scanf("%d",&k);
    MaxHeap(11);
    insertKey(3);
    insertKey(2);
    insertKey(15);
    insertKey(5);
    insertKey(4);
    insertKey(45);
    //deleteKey(15);
    for(i=0;i<k-1;i++)
    deleteMax();
    printf("%d\n",getMax());
    return 0;
}
