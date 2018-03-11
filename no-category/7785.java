import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 * @author Byungwook Lee on 2018-02-10
 * quddnr153@gmail.com
 * https://github.com/quddnr153
 */
public class Main {
    public static void main(String[] args) {
        final Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();

        List<String> names = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String log = sc.nextLine();
            String[] splitLog = log.split(" ");

            if (splitLog[1].equals("enter")) {
                names.add(splitLog[0]);
            } else {
                names.remove(splitLog[0]);
            }
        }

        Collections.sort(names);
        Collections.reverse(names);

        for (String name : names) {
            System.out.println(name);
        }
    }
}
