public class Expressions 
{
	public int expressions(int num) 
	{
		int answer = 0;
		int res = 1;
		int rest = 0;
		while(true)
		{
			rest = (res % 2 != 0) ? 0 : (res / 2);
			if(num / res < rest)
				break;
			if(num % res == rest)
				answer++;
			res++;
		}
		return answer;
	}

	public static void main(String args[]) 
	{
		Expressions expressions = new Expressions();
		// 아래는 테스트로 출력해 보기 위한 코드입니다.
		System.out.println(expressions.expressions(15));
	}
}