void hello()
{
    printf("Hello, world!\n");
}

int main_084()
{
    //�� ��ȯ�� �ڷ���
    void (*fp)();   //��ȯ���� �Ű������� ���� �Լ� ������ fp ����
    //     ��   �� �Ű������� ����
    // �Լ� ������ �̸�
    fp = hello;     //�Լ� ������ fp�� hello �޸� �ּ� ���� ����
    fp();           //Hello, world! �Լ� �����ͷ� hello �Լ� ȣ��

    return 0;
}