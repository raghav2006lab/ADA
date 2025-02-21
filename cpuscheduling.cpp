#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void sjf(float arrival[], float finish[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((finish[i] - arrival[i]) > (finish[j] - arrival[j])) {
                swap(arrival[i], arrival[j]);
                swap(finish[i], finish[j]);
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (arrival[i + 1] < finish[i]) {
            count++;
        }
    }
    cout << count << endl;
}

void sarrival(float arrival[], float finish[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arrival[i] > arrival[j]) {
                swap(arrival[i], arrival[j]);
                swap(finish[i], finish[j]);
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (arrival[i + 1] < finish[i]) {
            count++;
        }
    }
    cout << count << endl;
}

void sfinish(float arrival[], float finish[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (finish[i] > finish[j]) {
                swap(finish[i], finish[j]);
                swap(arrival[i], arrival[j]);
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (arrival[i + 1] < finish[i]) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    int n= rand() %100;
   // cout <<n;

    float arrival[n], finish[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arrival[i] = rand() % 24;
       // cout<<arrival[i]<<" ";
        finish[i] = arrival[i] + (rand() % 10 + 1);
       // cout<<finish[i]<<endl;
    }
    sjf(arrival, finish, n);
    sarrival(arrival, finish, n);
    sfinish(arrival, finish, n);
    return 0;
}
