import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-02-10
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class Main {
    private static final int NUMBER_OF_WHEELS = 4;
    private static final int[] wheels = new int[NUMBER_OF_WHEELS];
    private static final int[] SCORE = {1, 2, 4, 8};
    private static final int THREE_DIRECTION = 0b100000;
    private static final int NINE_DIRECTION = 0b10;
    private static final int TWELVE_DIRECTION = 0b10000000;
    private static final int OVER_BIT = 0b100000000;
    private static final int ELEVEN_DIRECTION = 0b1;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < NUMBER_OF_WHEELS; i++) {
            wheels[i] = Integer.parseInt(scanner.next(), 2);
        }

        int k = scanner.nextInt();

        for (int i = 0; i < k; i++) {
            int wheelNumber = scanner.nextInt();
            int direction = scanner.nextInt();

            int[] directions = getDirections(wheelNumber - 1, direction);

            for (int j = 0; j < NUMBER_OF_WHEELS; j++) {
                rotate(j, directions[j]);
            }
        }

        int total = 0;

        for (int i = 0; i < NUMBER_OF_WHEELS; i++) {
            if ((wheels[i] & TWELVE_DIRECTION) > 0) {
                total += SCORE[i];
            }
        }

        System.out.println(total);
    }

    public static int[] getDirections(int wheelNumber, int direction) {
        int[] directions = new int[NUMBER_OF_WHEELS];

        directions[wheelNumber] = direction;

        switch (wheelNumber) {
            case 0:
                directions[1] = ((wheels[0] & THREE_DIRECTION) > 0) == ((wheels[1] & NINE_DIRECTION) > 0) ? 0 : -(directions[0]);
                directions[2] = ((wheels[1] & THREE_DIRECTION) > 0) == ((wheels[2] & NINE_DIRECTION) > 0) ? 0 : -(directions[1]);
                directions[3] = ((wheels[2] & THREE_DIRECTION) > 0) == ((wheels[3] & NINE_DIRECTION) > 0) ? 0 : -(directions[2]);
                break;
            case 1:
                directions[0] = ((wheels[0] & THREE_DIRECTION) > 0) == ((wheels[1] & NINE_DIRECTION) > 0) ? 0 : -(directions[1]);
                directions[2] = ((wheels[1] & THREE_DIRECTION) > 0) == ((wheels[2] & NINE_DIRECTION) > 0) ? 0 : -(directions[1]);
                directions[3] = ((wheels[2] & THREE_DIRECTION) > 0) == ((wheels[3] & NINE_DIRECTION) > 0) ? 0 : -(directions[2]);
                break;
            case 2:
                directions[3] = ((wheels[2] & THREE_DIRECTION) > 0) == ((wheels[3] & NINE_DIRECTION) > 0) ? 0 : -(directions[2]);
                directions[1] = ((wheels[1] & THREE_DIRECTION) > 0) == ((wheels[2] & NINE_DIRECTION) > 0) ? 0 : -(directions[2]);
                directions[0] = ((wheels[0] & THREE_DIRECTION) > 0) == ((wheels[1] & NINE_DIRECTION) > 0) ? 0 : -(directions[1]);
                break;
            case 3:
                directions[2] = ((wheels[2] & THREE_DIRECTION) > 0) == ((wheels[3] & NINE_DIRECTION) > 0) ? 0 : -(directions[3]);
                directions[1] = ((wheels[1] & THREE_DIRECTION) > 0) == ((wheels[2] & NINE_DIRECTION) > 0) ? 0 : -(directions[2]);
                directions[0] = ((wheels[0] & THREE_DIRECTION) > 0) == ((wheels[1] & NINE_DIRECTION) > 0) ? 0 : -(directions[1]);
                break;
            default:
                throw new IllegalArgumentException("Wrong wheel number");
        }

        return directions;
    }

    public static void rotate(int wheelNumber, int direction) {
        int currentWheel = wheels[wheelNumber];

        if (direction == 0) {
            return;
        }

        if (direction == 1) {
            int tmp = currentWheel & ELEVEN_DIRECTION;

            currentWheel >>= 1;

            if (tmp > 0) {
                currentWheel += TWELVE_DIRECTION;
            }

            wheels[wheelNumber] = currentWheel;
        }

        if (direction == -1) {
            int tmp = currentWheel & TWELVE_DIRECTION;

            currentWheel <<= 1;

            if (tmp > 0) {
                currentWheel += ELEVEN_DIRECTION;
                currentWheel -= OVER_BIT;
            }

            wheels[wheelNumber] = currentWheel;
        }
    }

}
