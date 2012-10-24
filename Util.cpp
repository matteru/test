
#include <regex>

/**
* IsUrlPath���\�b�h
*
* @brief		URL������`�F�b�N
*
* @param		strWord		������
* @return		URL������Ȃ��TRUE�B
*/
BOOL CXXXX::IsUrlPath(CString strWord)
{
	wstring str = static_cast<LPCTSTR>(strWord);
	wregex reg(_T("^[:/?#\\][@!$&'()*+,;=a-zA-Z0-9_~.-]+$"));
	wsmatch match;
    
	return regex_search(str, match, reg);
}
