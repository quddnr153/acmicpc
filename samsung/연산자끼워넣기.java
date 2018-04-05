import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-04-04
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class OperatorInsertion {
	private static final int MAX_N = 11;
	private static int[] numbers = new int[MAX_N];
	private static int[] operators = new int[4];
	private static int N;
	private static long minimum = Long.MAX_VALUE;
	private static long maximum = Long.MIN_VALUE;

	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);

		N = sc.nextInt();

		for (int i = 0; i < N; i++) {
			numbers[i] = sc.nextInt();
		}

		for (int i = 0; i < 4; i++) {
			operators[i] = sc.nextInt();
		}

		dfs(0, numbers[0], -1);

		System.out.println(maximum);
		System.out.println(minimum);

		sc.close();
	}

	private static void dfs(int index, long result,int operator) {
		if (operator == 0) {
			result += numbers[index];
		}
		if (operator == 1) {
			result -= numbers[index];
		}
		if (operator == 2) {
			result *= numbers[index];
		}
		if (operator == 3) {
			long tmp = result;

			if (tmp < 0) {
				tmp = (-tmp) / numbers[index];
				tmp = -tmp;
			} else {
				tmp /= numbers[index];
			}

			result = tmp;
		}

		if (index == N - 1) {
			minimum = Long.min(minimum, result);
			maximum = Long.max(maximum, result);

			return;
		}

		for (int i = 0; i < 4; i++) {
			if (operators[i] != 0) {
				operators[i]--;
				dfs(index + 1, result, i);
				operators[i]++;
			}
		}
	}
}
