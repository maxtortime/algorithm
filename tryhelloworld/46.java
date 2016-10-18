class OneTwoFour {
	public String change124(int n) {
		String answer = "0";
		while (true) {
			String ansTemp = "";
			ansTemp = String.valueOf(n % 3);
			ansTemp = (ansTemp.equals("1")) ? "1" : (ansTemp.equals("2")) ? "2" : "4";
			n /= 3;
			if (answer.equals("0"))
				answer = ansTemp;
			else
				answer = ansTemp + answer;
			if (ansTemp == "4")
				n -= 1;
			if (n <= 0)
				break;
		}
		return answer;
	}

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	public static void main(String[] args) {
		OneTwoFour oneTwoFour = new OneTwoFour();
		System.out.println(oneTwoFour.change124(10));
	}
}
