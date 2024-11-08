buksan = ['채치수','정대만','송태섭','서태웅','강백호']

def position(player):
	if player == buksan[0]:
		print(buksan[0],'은 센터(C)입니다.')
	elif player == buksan[1]:
		print(buksan[1],'은 슈팅 가드(SG)입니다.')
	elif player == buksan[2]:
		print(buksan[2],'은 포인트 가드(PG)입니다.')
	elif player == buksan[3]:
		print(buksan[3],'은 스몰 포워드(SF)입니다.')
	elif player == buksan[4]:
		print(buksan[4],'은 파워 포워드(PF)입니다.')
	else:
		print('알수 없는 선수입니다.')