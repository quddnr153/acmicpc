import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-02-10
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class Bfs7569 {
    private static final int MAX_SIZE = 100;
    private static final int A_DAY = 1;
    private static final int ANSWER_DAY_FLAG = -1;
    private static final int IMPOSSIBLE = -1;
    private static int M, H, N;
    private static int[][][] tomatoBox = new int[MAX_SIZE][MAX_SIZE][MAX_SIZE];
    private static Queue<Point> ripenedPoints = new ArrayDeque<>();
    private static int notRipenedCount = 0;
    private static int[] dz = {-1, 1, 0, 0, 0, 0};
    private static int[] dy = {0, 0, -1, 1, 0, 0};
    private static int[] dx = {0, 0, 0, 0, -1, 1};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        M = sc.nextInt();
        N = sc.nextInt();
        H = sc.nextInt();

        for (int z = 0; z < H; z++) {
            for (int y = 0; y < N; y++) {
                for (int x = 0; x < M; x++) {
                    int tmp = sc.nextInt();
                    tomatoBox[z][y][x] = tmp;

                    if (tmp == 1) {
                        ripenedPoints.add(new Point(x, y, z));
                    }

                    if (tmp == 0) {
                        notRipenedCount++;
                    }
                }
            }
        }

        System.out.println(bfs());
    }

    private static int bfs() {
        Point currentPoint = new Point();

        while (!ripenedPoints.isEmpty()) {
            currentPoint = ripenedPoints.poll();

            for (int i = 0; i < 6; i++) {
                Point next = new Point(currentPoint.getX() + dx[i], currentPoint.getY() + dy[i], currentPoint.getZ() + dz[i]);

                if (isValidPoint(next)) {
                    if (isNotRipened(next)) {
                        tomatoBox[next.getZ()][next.getY()][next.getX()] = tomatoBox[currentPoint.getZ()][currentPoint.getY()][currentPoint.getX()] + A_DAY;

                        ripenedPoints.add(next);

                        notRipenedCount--;
                    }
                }
            }
        }

        if (notRipenedCount <= 0) {
            return tomatoBox[currentPoint.getZ()][currentPoint.getY()][currentPoint.getX()] + ANSWER_DAY_FLAG;
        }

        return IMPOSSIBLE;
    }

    private static boolean isValidPoint(Point next) {
        return next.getZ() >= 0 && next.getZ() < H && next.getY() >= 0 && next.getY() < N && next.getX() >= 0 && next.getX() < M;
    }

    private static boolean isNotRipened(Point next) {
        return tomatoBox[next.getZ()][next.getY()][next.getX()] == 0;
    }

    private static class Point {
        private int x;
        private int y;
        private int z;

        public Point() {

        }

        public Point(int x, int y, int z) {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        public int getX() {
            return x;
        }

        public int getY() {
            return y;
        }

        public int getZ() {
            return z;
        }
    }
}
