import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-03-31
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class SnakeProblem {
	private static final int MAX_N = 101;
	private static int N;
	private static boolean[][] board = new boolean[MAX_N][MAX_N];
	private static int second = 0;

	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);

		N = sc.nextInt();
		final int K = sc.nextInt();

		for (int i = 0; i < K; i++) {
			int x = sc.nextInt() - 1;
			int y = sc.nextInt() - 1;
			board[x][y] = true;
		}

		final int L = sc.nextInt();

		List<Action> actions = new ArrayList<>(L);

		for (int i = 0; i < L; i++) {
			actions.add(new Action(sc.nextInt(), sc.next()));
		}

		Snake snake = new Snake();

		do {
			second++;
			Position nextHead = snake.getNextHead();

			if (!snake.isPossibleWay()) {
				break;
			}

			if (hasThereApple(nextHead)) {
				snake.addHead(nextHead);
				removeApple(nextHead);
			} else {
				snake.addHead(nextHead);
				snake.removeTail();
			}

			for (Action action : actions) {
				if (action.getSecond() == second) {
					String toGo = action.getDirection();

					snake.setDirection(Direction.changeDirection(snake.getDirection(), toGo));

					break;
				}
			}
		} while (snake.isPossibleWay());

		System.out.println(second + 1);
	}

	private static boolean hasThereApple(Position position) {
		return board[position.getY()][position.getX()];
	}

	private static void removeApple(Position position) {
		board[position.getY()][position.getX()] = false;
	}

	private static class Snake {
		private List<Position> positions;
		private Direction direction = Direction.RIGHT;

		public Snake() {
			positions = new ArrayList<>();
			positions.add(new Position(0, 0));
		}

		public Direction getDirection() {
			return direction;
		}

		public void setDirection(Direction direction) {
			this.direction = direction;
		}

		public Position getHead() {
			return positions.get(0);
		}

		public void addHead(Position position) {
			positions.add(0, position);
		}

		public void removeTail() {
			positions.remove(positions.size() - 1);
		}

		public Position getNextHead() {
			return getHead().getNextPosition(direction);
		}

		public boolean isPossibleWay() {
			Position next = getNextHead();

			if (next.getX() < 0 || next.getX() >= N || next.getY() < 0 || next.getY() >= N) {
				return false;
			}

			return !positions.contains(next);
		}
	}

	private static class Position {
		private int x;
		private int y;

		public Position(int x, int y) {
			this.x = x;
			this.y = y;
		}

		public int getX() {
			return x;
		}

		public int getY() {
			return y;
		}

		public Position getNextPosition(Direction direction) {
			switch (direction) {
				case UP:
					return new Position(x, y - 1);
				case DOWN:
					return new Position(x, y + 1);
				case RIGHT:
					return new Position(x + 1, y);
				case LEFT:
					return new Position(x - 1, y );
				default:
					throw new IllegalArgumentException();
			}
		}

		@Override
		public boolean equals(Object obj) {
			return x == ((Position)obj).getX() && y == ((Position)obj).getY();
		}
	}

	private static class Action {
		private int second;
		private String direction;

		public Action(int second, String direction) {
			this.second = second;
			this.direction = direction;
		}

		public int getSecond() {
			return second;
		}

		public String getDirection() {
			return direction;
		}
	}

	enum Direction {
		UP, DOWN, RIGHT, LEFT;

		public static Direction changeDirection(Direction direction, String toGo) {
			switch (direction) {
				case UP:
					if (toGo.equals("L")) {
						return Direction.LEFT;
					}
					return Direction.RIGHT;
				case DOWN:
					if (toGo.equals("L")) {
						return Direction.RIGHT;
					}
					return Direction.LEFT;
				case LEFT:
					if (toGo.equals("L")) {
						return Direction.DOWN;
					}
					return Direction.UP;
				case RIGHT:
					if (toGo.equals("L")) {
						return Direction.UP;
					}
					return Direction.DOWN;
				default:
					throw new IllegalArgumentException();
			}
		}
	}
}
