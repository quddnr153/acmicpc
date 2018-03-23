import java.util.Arrays;
import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-02-10
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class Main {
    private static final int MAX_N = 21;
    private static final int MAX_MOVEMENT = 5;
    private static int N;
    private static int[][] board = new int[MAX_N][MAX_N];
    private static int maxBlock = 0;

    public static void main(String[] args) {
        final Scanner sc = new Scanner(System.in);

        N = sc.nextInt();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                board[i][j] = sc.nextInt();
            }
        }

        for (Direction direction : Direction.values()) {
            move(direction, board, 0);
        }

        System.out.println(maxBlock);
    }

    private static void move(Direction currentDirection, int[][] board, int movementCount) {
        if (movementCount == MAX_MOVEMENT) {
            maxBlock = Math.max(maxBlock, getMaxBlock(board));

            return;
        }

        int[][] afterMovement = changeBlocks(currentDirection, board);

        for (Direction nextDirection : Direction.values()) {
            move(nextDirection, afterMovement, movementCount + 1);
        }
    }

    private static int getMaxBlock(int[][] board) {
        return Arrays.stream(board).flatMapToInt(Arrays::stream).reduce(Integer.MIN_VALUE, Integer::max);
    }

    private static int[][] changeBlocks(Direction direction, int[][] board) {
        int[][] afterMovement = new int[MAX_N][MAX_N];

        switch (direction) {
            case UP:
                for (int i = 0; i < N; i++) {
                    int tmp = 0;
                    for (int j = 0; j < N; j++) {
                        int current = board[i][j];

                        if (current == 0) {
                            continue;
                        }

                        if (j == N - 1) {
                            afterMovement[i][tmp++] = current;
                            continue;
                        }

                        boolean summable = false;

                        for (int k = j + 1; k < N; k++) {
                            int next = board[i][k];
                            if (next == 0) {
                            } else if (current == next) {
                                summable = true;
                                j = k;
                                break;
                            } else {
                                summable = false;
                                break;
                            }
                        }

                        if (summable) {
                            afterMovement[i][tmp++] = current * 2;
                        } else {
                            afterMovement[i][tmp++] = current;
                        }
                    }
                }
                break;
            case DOWN:
                for (int i = 0; i < N; i++) {
                    int tmp = N - 1;
                    for (int j = N - 1; j >= 0; j--) {
                        int current = board[i][j];
                        if (current == 0) {
                            continue;
                        }

                        if (j == 0) {
                            afterMovement[i][tmp--] = current;
                            continue;
                        }

                        boolean summable = false;

                        for (int k = j - 1; k >= 0; k--) {
                            int next = board[i][k];
                            if (next == 0) {
                            } else if (current == next) {
                                summable = true;
                                j = k;
                                break;
                            } else {
                                summable = false;
                                break;
                            }
                        }

                        if (summable) {
                            afterMovement[i][tmp--] = current * 2;
                        } else {
                            afterMovement[i][tmp--] = current;
                        }
                    }
                }
                break;
            case LEFT:
                for (int j = 0; j < N; j++) {
                    int tmp = 0;
                    for (int i = 0; i < N; i++) {
                        int current = board[i][j];

                        if (current == 0) {
                            continue;
                        }

                        if (i == N - 1) {
                            afterMovement[tmp++][j] = current;
                            continue;
                        }

                        boolean summable = false;

                        for (int k = i + 1; k < N; k++) {
                            int next = board[k][j];
                            if (next == 0) {
                            } else if (current == next) {
                                summable = true;
                                i = k;
                                break;
                            } else {
                                summable = false;
                                break;
                            }
                        }

                        if (summable) {
                            afterMovement[tmp++][j] = current * 2;
                        } else {
                            afterMovement[tmp++][j] = current;
                        }
                    }
                }
                break;
            case RIGHT:
                for (int j = 0; j < N; j++) {
                    int tmp = N - 1;
                    for (int i = N - 1; i >= 0; i--) {
                        int current = board[i][j];

                        if (current == 0) {
                            continue;
                        }

                        if (i == 0) {
                            afterMovement[tmp--][j] = current;
                            continue;
                        }

                        boolean summable = false;

                        for (int k = i - 1; k >= 0; k--) {
                            int next = board[k][j];
                            if (next == 0) {
                            } else if (current == next) {
                                summable = true;
                                i = k;
                                break;
                            } else {
                                summable = false;
                                break;
                            }
                        }

                        if (summable) {
                            afterMovement[tmp--][j] = current * 2;
                        } else {
                            afterMovement[tmp--][j] = current;
                        }
                    }
                }
                break;
        }

        return afterMovement;
    }

    private enum Direction {
        UP,
        DOWN,
        RIGHT,
        LEFT
    }
}

