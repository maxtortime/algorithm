import java.util.Scanner;

public class Main 
{
	public static void main(String args[]) 
	{
		Scanner scan = new Scanner(System.in);
		int num;
		int input[] = new int[300];
		int max[] = new int[300];

		num = scan.nextInt();

		for(int i = 0; i < num; i++)
		{
			input[i] = scan.nextInt();
		}

		max[0] = input[0];
		max[1] = max[0] + input[1];
		max[2] = (input[1] + input[2] > max[0] + input[2]) ? input[1] + input[2] : max[0] + input[2];

		for(int i = 3; i < num; i++)
		{
			max[i] = (input[i] + input[i - 1] + max[i - 3] > max[i - 2] + input[i]) ? input[i] + input[i - 1] + max[i - 3] : max[i - 2] + input[i];
		}

		System.out.printf("%d", max[num - 1]);
	}
}