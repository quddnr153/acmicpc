import java.util.Scanner;
import java.util.Stack;

/**
 * @author Byungwook Lee on 2018-03-31
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class StartAndLink {
	private static final int MAX_N = 21;
	private static int[][] s = new int[MAX_N][MAX_N];
	private static int minDiff = Integer.MAX_VALUE;
	private static Stack<Integer> start = new Stack<>();
	private static int N;

	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);

		N = sc.nextInt();

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				s[i][j] = sc.nextInt();
			}
		}

		start.push(0);
		dfs(start, 1);

		System.out.println(minDiff);
	}

	private static void dfs(Stack<Integer> start, int members) {
		if (members > N) {
			return;
		}
		if (start.size() == N / 2) {
			minDiff = Integer.min(minDiff, calculateDiff(start));

			return;
		}

		start.push(members);
		dfs(start, members + 1);
		start.pop();
		dfs(start, members + 1);
	}

	private static int calculateDiff(Stack<Integer> start) {
		int startSum = 0;
		int linkSum = 0;

		Stack<Integer> link = new Stack<>();

		for (int i = 0; i < N; i++) {
			if (!start.contains(i)) {
				link.push(i);
			}
		}

		for (int i = 0; i < start.size(); i++) {
			for (int j = 0; j < start.size(); j++) {
				startSum += s[start.get(i)][start.get(j)];
				linkSum += s[link.get(i)][link.get(j)];
			}
		}

		return Math.abs(startSum - linkSum);
	}
}
