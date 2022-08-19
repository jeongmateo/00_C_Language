#include <stdio.h>

enum StateIdForTx
{
	FUNC_OFF = 0,
	FUNC_STANDBY,
	FUNC_READY,
	FUNC_ASSIST,
	FUNC_DEGRADE,
	FUNC_FAIL
};

int main()
{
	enum StateIdForTx ApaStateIdForTx;

	ApaStateIdForTx = FUNC_ASSIST;
	int degrade = 0;
	int request = 0;

	switch (ApaStateIdForTx)
	{
	case FUNC_OFF:
		printf("FUNC_OFF\n");
		break;
	case FUNC_STANDBY:
		printf("FUNC_STANDBY\n");
		break;
	case FUNC_READY:
		printf("FUNC_READY\n");
		break;
	case FUNC_ASSIST:
		printf("FUNC_ASSIST\n");
		if (degrade == 1)
		{
			ApaStateIdForTx = FUNC_DEGRADE;
			printf("State changed to FUNC_DEGRADE\n");
		}
		else if(request == 0)
		{
			ApaStateIdForTx = FUNC_OFF;
			printf("State changed to FUNC_OFF\n");
		}
		else {}
		break;
	case FUNC_DEGRADE:
		printf("FUNC_DEGRADE\n");
		break;
	case FUNC_FAIL:
		printf("FUNC_FAIL\n");
		break;
	default:
		break;
	}

	return 0;
}