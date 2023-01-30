### Kadane's Algorithm

```
Begin
Function kadanes(int array[], int length):
   Initialize
   highestMax = 0
   currentElementMax = 0
   for i = 0 to length-1
      currentElementMax = max(array[i],currentElementMax + array[i])
      highestMax = max(highestMax, currentElementMax)
   return highestMax
End
```
