public class Main {
    public static void main(String[] args) {
        // Create array
        int[] numbers = {1, 2, 3, 4, 5};
        
        // Print original numbers
        System.out.print("Original numbers: ");
        printArray(numbers);
        
        // Calculate and print squares
        int[] squares = new int[numbers.length];
        for (int i = 0; i < numbers.length; i++) {
            squares[i] = numbers[i] * numbers[i];
        }
        System.out.print("Squared numbers: ");
        printArray(squares);
        
        // Print even numbers
        System.out.print("Even numbers: ");
        for (int n : numbers) {
            if (n % 2 == 0) System.out.print(n + " ");
        }
        System.out.println();
        
        // Calculate and print sum
        int sum = 0;
        for (int n : numbers) sum += n;
        System.out.println("Sum of numbers: " + sum);
    }

    private static void printArray(int[] arr) {
        for (int n : arr) System.out.print(n + " ");
        System.out.println();
    }
}