int  binSearch(SeqList T, KeyType k)
{
    int i=1,j=T.len;
    int mid;
    while(i<j)
    {   mid=(i+j)/2;
        if(T.data[mid].key==k)
           return mid;
        if(T.data[mid].key>k)
           j=mid-1;
        if(T.data[mid].key<k)
           i=mid+1;

    }return 0;
}
