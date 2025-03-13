
class CA
{
public:
	void normalFun()
	{
	}
	virtual void virtualFun()
	{
	}
};

int main()
{
	CA caObj;
	caObj.normalFun();
	/*
		lea	ecx, DWORD PTR _caObj$[ebp]
		call	?normalFun@CA@@QAEXXZ			; CA::normalFun
	*/
	caObj.virtualFun();
	/*
		lea	ecx, DWORD PTR _caObj$[ebp]
		call	?virtualFun@CA@@UAEXXZ			; CA::virtualFun
	*/
	CA& caRef = caObj;
	CA* caPtr = &caObj;
	caRef.normalFun();
	/*
		mov	ecx, DWORD PTR _caRef$[ebp]
		call	?normalFun@CA@@QAEXXZ			; CA::normalFun
	*/
	caPtr->normalFun();
	/*
		mov	ecx, DWORD PTR _caPtr$[ebp]
		call	?normalFun@CA@@QAEXXZ			; CA::normalFun
	*/
	caRef.virtualFun();//caRef.vptr->vtable[0]()
	/*
		mov	eax, DWORD PTR _caRef$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _caRef$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp
	*/
	caPtr->virtualFun();//caPtr->vptr->vtable[0]()
	/*
		mov	eax, DWORD PTR _caPtr$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _caPtr$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp
	*/
	return 0;
}