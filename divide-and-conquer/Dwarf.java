import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.IntStream;

/**
 * @author Byungwook Lee on 2018-02-10
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class Dwarf {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int C = sc.nextInt();

        int[] dwarf = new int[N];

        for (int i = 0; i < N; i++) {
            dwarf[i] = sc.nextInt();
        }

        int M = sc.nextInt();

        for (int i = 0; i < M; i++) {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int[] colorsFromAToB = Arrays.copyOfRange(dwarf, A - 1, B);
            int[] colorCount = new int[C];

            for (int colorIndex : colorsFromAToB) {
                colorCount[colorIndex - 1]++;
            }

            int[] tmp = Arrays.copyOf(colorCount, colorCount.length);

            Arrays.sort(tmp);

            if (tmp[tmp.length - 1] == tmp[tmp.length - 2]) {
                System.out.println("no");
            } else {
                IntStream.range(0, colorCount.length)
                        .reduce((a, b) -> colorCount[a] < colorCount[b] ? b : a)
                        .ifPresent(index -> System.out.println("yes " + (index + 1)));
            }
        }
    }
}
