
#include <regex>

/**
* IsUrlPathメソッド
*
* @brief		URL文字列チェック
*
* @param		strWord		文字列
* @return		URL文字列ならばTRUE。
*/
BOOL CXXXX::IsUrlPath(CString strWord)
{
	wstring str = static_cast<LPCTSTR>(strWord);
	wregex reg(_T("^[:/?#\\][@!$&'()*+,;=a-zA-Z0-9_~.-]+$"));
	wsmatch match;
    
	return regex_search(str, match, reg);
}
