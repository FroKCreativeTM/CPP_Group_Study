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
	int iSize;			// 이 링크드리스트에 저장된 노드가 몇 개이냐

private : 
	// 얘는 모든 걸 다 지운다
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
	// 데이터가 들어오면 그걸 지운다.
	void Add(const int _data)
	{
		// 새로운 노드를 할당받고
		PNODE newNode = new NODE;
		newNode->data = _data;

		// 새로운 노드가 헤드 노드가 되도록 한다.
		newNode->pNext = pHead;
		pHead = newNode;

		iSize++;
	}

	// 헤드에 있는 걸 지우도록
	void Delete()
	{
		// 만약 비어 있다면 아무것도 안 한다.
		if (IsEmpty())
		{
			return;
		}

		// 일단 헤드를 받아온다.
		PNODE pDelNode = pHead;

		// 헤드를 옮긴다.
		pHead = pHead->pNext;

		// 할당 받았던 헤드를 지운다.
		delete pDelNode;

		iSize--;
	}

	// 데이터를 넣으면 그걸 지우는 걸로?
	void Delete(int _data)
	{
		// 만약 비어 있다면 아무것도 안 한다.
		if (IsEmpty())
		{
			return;
		}
	}

	// 내가 원하는 데이터를 검색하고 없다면 INT_MIN 반환
	int find()
	{
		// 만약 비어 있다면 -INT_MAX.
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