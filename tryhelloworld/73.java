import java.math.BigInteger;
/*
* http://tryhelloworld.co.kr/challenge_codes/73
*/

class CorrectParenthesis
{
	public BigInteger parenthesisCase(int n)
	{
		BigInteger answer = new BigInteger("0");
		answer = fac(n*2).divide(fac(n).multiply(fac(n+1)));
		return answer;
	}

  public static BigInteger fac(int n) {
  	if (n <= 1) {
     BigInteger one = new BigInteger("1");
      return one;
    }
    else {
      BigInteger n_big = new BigInteger(Integer.toString(n));
      return n_big.multiply(fac(n-1));
    }
  }

	//실행을 위한 main입니다.
	public static void main(String[] args) {
		CorrectParenthesis cp = new CorrectParenthesis();
		if(cp.parenthesisCase(3).equals(new BigInteger("5")))
		{
			System.out.println("parenthesisCase(3)이 정상 동작합니다. 제출을 눌러서 다른 경우에도 정답인지 확인해 보세요.");
		}
		else
		{
			System.out.println("parenthesisCase(3)이 정상 동작하지 않습니다.");
		}
	}
}
