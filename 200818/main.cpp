#include <iostream>
#include <string>

/*
typedef struct _tagUserInfo
{
	std::string ID;
	std::string PW;
}USERINFO, *PUSERINFO;

class CUserInfo
{
private :
	std::string ID;
	std::string PW;
};
*/

class SingleLinkedListNode
{
private : 
	int data;
	SingleLinkedListNode* pNext;

public : 
	friend class SingleLinkedList;

private : 
	SingleLinkedListNode() :
		pNext(nullptr), data(0) {}
	~SingleLinkedListNode() {}
};

class SingleLinkedList 
{
private : 
	typedef SingleLinkedListNode NODE;
	typedef SingleLinkedListNode* PNODE;

private : 
	PNODE pHead;
	int iSize;			// �� ��ũ�帮��Ʈ�� ����� ��尡 �� ���̳�

private : 
	// ��� ��� �� �� �����
	void Clear()
	{

	}

public : 
	SingleLinkedList() :
		pHead(nullptr), iSize(0)
	{
		pHead->pNext = nullptr;
	}

	~SingleLinkedList()
	{
		Clear();
		iSize = 0;
	}

public : 
	// �����Ͱ� ������ �װ� �����.
	void Add(const int _data)
	{
		// ���ο� ��带 �Ҵ�ް�
		PNODE newNode = new NODE;
		newNode->data = _data;

		// ���ο� ��尡 ��� ��尡 �ǵ��� �Ѵ�.
		newNode->pNext = pHead;
		pHead = newNode;

		iSize++;
	}

	// ��忡 �ִ� �� ���쵵��
	void Delete()
	{
		// ���� ��� �ִٸ� �ƹ��͵� �� �Ѵ�.
		if (IsEmpty())
		{
			return;
		}

		// �ϴ� ��带 �޾ƿ´�.
		PNODE pDelNode = pHead;

		// ��带 �ű��.
		pHead = pHead->pNext;

		// �Ҵ� �޾Ҵ� ��带 �����.
		delete pDelNode;

		iSize--;
	}

	// �����͸� ������ �װ� ����� �ɷ�?
	void Delete(int _data)
	{
		// ���� ��� �ִٸ� �ƹ��͵� �� �Ѵ�.
		if (IsEmpty())
		{
			return;
		}
	}

	// ���� ���ϴ� �����͸� �˻��ϰ� ���ٸ� INT_MIN ��ȯ
	int find()
	{
		// ���� ��� �ִٸ� -INT_MAX.
		if (IsEmpty())
		{
			return INT_MIN;
		}
	}

	bool IsEmpty() const
	{
		return iSize == 0;
	}
};

int main()
{

	return 0;
}