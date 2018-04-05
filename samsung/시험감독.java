import java.util.Arrays;
import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-04-05
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class TestInspector {
	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);

		final int N = sc.nextInt();
		final long[] A = new long[N];

		for (int i = 0; i < N; i++) {
			A[i] = sc.nextInt();
		}

		final int B = sc.nextInt();
		final int C = sc.nextInt();

		// Functional version
		long[] withMainInspector = Arrays.stream(A).map(a -> {
			if (a - B < 0) {
				return 0;
			} else {
				return a - B;
			}
		}).toArray();

		long count = Arrays.stream(withMainInspector).map(a -> {
			if (a % C != 0) {
				return (a / C) + 1 + 1;
			}

			return a / C + 1;
		}).sum();

		// for loop version
//		for (int i = 0; i < N; i++) {
//			A[i] -= B;
//
//			if (A[i] < 0) {
//				A[i] = 0;
//			}
//		}
//
//		long count = 0;
//
//		for (int i = 0; i < N; i++) {
//			if (A[i] % C != 0) {
//				count = count + (A[i] / C) + 1 + 1;
//			} else {
//				count = count + (A[i] / C) + 1;
//			}
//		}

		System.out.println(count);
	}
}

