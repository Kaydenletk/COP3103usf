// Khanh Tram Le
// UID: 28888200
// Description:The program is designed to check if a given sequence of integers is an alternating sequence.

#include <stdio.h>

int is_alternating_sequence(int *sequence, int n) {
    // Check if the sequence if alternating
    if (n <= 1) {
        return 1; 
    }

    // Check if the sequence is alternating
    for (int i = 1; i < n; i++) {
        if ((sequence[i] > 0 && sequence[i - 1] > 0) || 
            (sequence[i] < 0 && sequence[i - 1] < 0)) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int n, i;
    // Prompt user for sequence length
    printf("Enter length of the sequence: Enter numbers of the sequence: ");
    scanf("%d", &n);
    
    int sequence[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    // Check if the sequence is alternating AFTER the loop
    printf("%s", is_alternating_sequence(sequence, n) ? "yes" : "no");

    return 0;
}
