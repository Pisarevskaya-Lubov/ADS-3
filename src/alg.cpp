// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int res = 0;
  int number = 0;
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    int midl = left + (right - left) / 2;
    if (value == arr[midl]) {
      number = midl;
      break;
    } else if (value > arr[midl]) {
      left = midl;
    } else if (value < arr[midl]) {
      right = midl;
    } else {
      return 1000;
    }
  }
  int n = number;
  while (arr[n] == value) {
    res++;
    n++;
  }
  if (number > 0) {
    while (arr[number-1] == value) {
      res++;
      number--;
    }
  }
  return res;
}

