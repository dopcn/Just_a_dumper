//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSCatSearchInputKeyWordsViewDelegate-Protocol.h"
#import "VSCatSearchResultContentViewDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UIViewController, VSCatSearchInputKeyWordsView, VSCatSearchResultContentView, VSCategorySearchGoodsParams, VSFreshmenGuideView;

@interface VSCatSearchResultBarManager : NSObject <VSCatSearchInputKeyWordsViewDelegate, VSCatSearchResultContentViewDelegate>
{
    _Bool _isAssistant;
    _Bool _isExpose;
    _Bool _isOutsiteInputKeyword;
    _Bool _rolesHomeUpdate;
    _Bool _isSearchQuit;
    NSString *_defaultKeywords;
    NSString *_showKeyword;
    VSCatSearchInputKeyWordsView *_inputKeyWordsView;
    CDUnknownBlockType _isQuitCallBack;
    VSCatSearchResultContentView *_searchResultContentView;
    VSFreshmenGuideView *_guideView;
    UIBarButtonItem *_returnBackBarItem;
    UIBarButtonItem *_temporaryBarItem;
    UIViewController *_supporterController;
    CDUnknownBlockType _updateSearchResultParams;
    VSCategorySearchGoodsParams *_params;
    unsigned long long _rolesForSearchStyle;
    unsigned long long _sourceType;
    NSString *_channel_id;
    NSString *_channelName;
    NSString *_operationId;
    NSString *_originalKeywordForProtocol;
}

@property(copy, nonatomic) NSString *originalKeywordForProtocol; // @synthesize originalKeywordForProtocol=_originalKeywordForProtocol;
@property(copy, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *channel_id; // @synthesize channel_id=_channel_id;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool isSearchQuit; // @synthesize isSearchQuit=_isSearchQuit;
@property(nonatomic) _Bool rolesHomeUpdate; // @synthesize rolesHomeUpdate=_rolesHomeUpdate;
@property(nonatomic) unsigned long long rolesForSearchStyle; // @synthesize rolesForSearchStyle=_rolesForSearchStyle;
@property(retain, nonatomic) VSCategorySearchGoodsParams *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType updateSearchResultParams; // @synthesize updateSearchResultParams=_updateSearchResultParams;
@property(nonatomic) __weak UIViewController *supporterController; // @synthesize supporterController=_supporterController;
@property(retain, nonatomic) UIBarButtonItem *temporaryBarItem; // @synthesize temporaryBarItem=_temporaryBarItem;
@property(retain, nonatomic) UIBarButtonItem *returnBackBarItem; // @synthesize returnBackBarItem=_returnBackBarItem;
@property(retain, nonatomic) VSFreshmenGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) VSCatSearchResultContentView *searchResultContentView; // @synthesize searchResultContentView=_searchResultContentView;
@property(nonatomic) _Bool isOutsiteInputKeyword; // @synthesize isOutsiteInputKeyword=_isOutsiteInputKeyword;
@property(nonatomic) _Bool isExpose; // @synthesize isExpose=_isExpose;
@property(copy, nonatomic) CDUnknownBlockType isQuitCallBack; // @synthesize isQuitCallBack=_isQuitCallBack;
@property(nonatomic) _Bool isAssistant; // @synthesize isAssistant=_isAssistant;
@property(retain, nonatomic) VSCatSearchInputKeyWordsView *inputKeyWordsView; // @synthesize inputKeyWordsView=_inputKeyWordsView;
@property(copy, nonatomic) NSString *showKeyword; // @synthesize showKeyword=_showKeyword;
@property(retain, nonatomic) NSString *defaultKeywords; // @synthesize defaultKeywords=_defaultKeywords;
- (void).cxx_destruct;
- (void)sendActionStatistics:(id)arg1;
- (void)fetchNewSearchSuggest:(id)arg1 sendStatistic:(_Bool)arg2;
- (void)selectedHotKeyWord:(id)arg1;
- (void)hiddenKeyBoard;
- (void)actionToWebView:(id)arg1;
- (void)searchAction:(id)arg1 isActionToWeb:(_Bool)arg2 entryWord:(id)arg3;
- (_Bool)locationActionWithSearchLocationModel:(id)arg1;
- (void)startSearch;
- (void)cancelSearch;
- (void)clearInputKeyWord;
- (void)updateHistoryData;
- (void)preloadSuggestData:(id)arg1;
- (void)clearSearchBarResultData;
- (void)inputKeyWordsViewBecomeFristResponder;
- (void)setTemporaryLeftBarButtonItem;
- (void)setReturnBackLeftBarButtonItem;
- (void)removeResultContentView;
- (void)showResultContentView;
- (void)dismissGuidView;
- (void)showTipsView;
- (void)setUp;
- (void)speechFecthSuggest:(id)arg1;
- (void)fetchSearchKeyword;
- (void)observerSubviewsParamsChanging;
- (id)initWithSupporterController:(id)arg1 rolesForSearchStyle:(unsigned long long)arg2 searchParams:(id)arg3 hotKeywordsModel:(id)arg4 originalKeyword:(id)arg5 updateSearchParamsCallBack:(CDUnknownBlockType)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

