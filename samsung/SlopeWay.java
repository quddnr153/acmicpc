mport java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-03-24
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class SlopeWay {
	private static final int MAX_N = 101;
	private static int[][] board = new int[MAX_N][MAX_N];
	private static int ways = 0;
	private static int N;
	private static int L;

	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);

		N = sc.nextInt();
		L = sc.nextInt();

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				board[i][j] = sc.nextInt();
			}
		}

		findHorizontalWays();
		transposeBoard();
		findHorizontalWays();

		System.out.println(ways);
	}

	private static void transposeBoard() {
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				int temp = board[i][j];
				board[i][j] = board[j][i];
				board[j][i] = temp;
			}
		}
	}

	private static void findHorizontalWays() {
		for (int x = 0; x < N; x++) {
			if (isPossibleWay(x)) {
				ways++;
			}
		}
	}

	private static boolean isPossibleWay(int index) {
		boolean[] checked = new boolean[N];

		// 오른쪽으로 고고
		int before = board[index][0];

		for (int y = 1; y < N; y++) {
			int current = board[index][y];

			// 높이가 같네 그냥 ㄱㄱ
			if (current == before) {
				continue;
			}

			// 높이 차이가 2 이상
			if (before - current > 1) {
				return false;
			}

			if (before - current == 1) {
				if (L == 1) {
					checked[y] = true;
				}

				for (int k = 1; k < L; k++) {
					if (y + k >= N) {
						return false;
					}

					int next = board[index][y + k];

					if (!(current == next)) {
						return false;
					}

					checked[y] = true;
					checked[y + k] = true;
				}
			}

			before = current;
		}

		// 왼쪽으로 고고
		before = board[index][N - 1];

		for (int y = N - 2; y >= 0; y--) {
			int current = board[index][y];

			// 높이가 같네 그냥 ㄱㄱ
			if (current == before) {
				continue;
			}

			// 높이 차이가 2 이상
			if (before - current > 1) {
				return false;
			}

			if (before - current == 1) {
				if (L == 1) {
					if (checked[y]) {
						return false;
					}
				}

				for (int k = 1; k < L; k++) {
					if (y - k < 0) {
						return  false;
					}

					int next = board[index][y - k];

					if (!(current == next)) {
						return false;
					}

					if (checked[y - k]) {
						return false;
					}

					checked[y] = true;
					checked[y - k] = true;
				}
			}

			before = current;
		}

		return true;
	}
}

