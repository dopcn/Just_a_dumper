//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMViewController.h"

#import "SearchInputAgentDelegate-Protocol.h"
#import "SearchPlaceHolderDelegate-Protocol.h"
#import "SearchSuggestDelegate-Protocol.h"
#import "TMASRDelegate-Protocol.h"

@class NSDictionary, NSString, SearchSegmentViewController, SearchSuggestViewController, TMASRViewController, TMSearchInputDelegateAgent, TMSearchTextField, TMVoiceSearchBtn, TMVoiceSearchStatusLabel, UIBarButtonItem, UIView;
@protocol TMSearchInputViewControllerDelegate;

@interface SearchInputViewController : TMViewController <SearchInputAgentDelegate, SearchSuggestDelegate, SearchPlaceHolderDelegate, TMASRDelegate>
{
    UIView *_searchTitleView;
    TMVoiceSearchBtn *_voiceSearchButton;
    TMVoiceSearchStatusLabel *_voiceSearchStatusLabel;
    _Bool _jumpFromViewController;
    _Bool _supportImageSearch;
    _Bool _supportHotWord;
    NSString *_fromViewControllerName;
    NSString *_inputHint;
    NSString *_placeHolder;
    NSString *_defaultQuery;
    NSString *_currentInput;
    unsigned long long _status;
    NSString *_searchType;
    NSString *_destUrl;
    NSString *_from;
    NSString *_searchMode;
    id <TMSearchInputViewControllerDelegate> _delegate;
    NSDictionary *_srpParams;
    TMASRViewController *_asrViewController;
    TMSearchTextField *_searchInputField;
    TMSearchInputDelegateAgent *_agent;
    UIBarButtonItem *_photoSearchBtnItem;
    SearchSuggestViewController *_suggestVC;
    SearchSegmentViewController *_segmentVC;
    UIView *_needleLine;
}

@property(retain, nonatomic) UIView *needleLine; // @synthesize needleLine=_needleLine;
@property(retain, nonatomic) SearchSegmentViewController *segmentVC; // @synthesize segmentVC=_segmentVC;
@property(retain, nonatomic) SearchSuggestViewController *suggestVC; // @synthesize suggestVC=_suggestVC;
@property(retain, nonatomic) UIBarButtonItem *photoSearchBtnItem; // @synthesize photoSearchBtnItem=_photoSearchBtnItem;
@property(retain, nonatomic) TMSearchInputDelegateAgent *agent; // @synthesize agent=_agent;
@property(retain, nonatomic) TMSearchTextField *searchInputField; // @synthesize searchInputField=_searchInputField;
@property(nonatomic) __weak TMASRViewController *asrViewController; // @synthesize asrViewController=_asrViewController;
@property(retain, nonatomic) NSDictionary *srpParams; // @synthesize srpParams=_srpParams;
@property(nonatomic) __weak id <TMSearchInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *destUrl; // @synthesize destUrl=_destUrl;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *currentInput; // @synthesize currentInput=_currentInput;
@property(copy, nonatomic) NSString *defaultQuery; // @synthesize defaultQuery=_defaultQuery;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *inputHint; // @synthesize inputHint=_inputHint;
@property(nonatomic) _Bool supportHotWord; // @synthesize supportHotWord=_supportHotWord;
@property(nonatomic) _Bool supportImageSearch; // @synthesize supportImageSearch=_supportImageSearch;
@property(nonatomic) _Bool jumpFromViewController; // @synthesize jumpFromViewController=_jumpFromViewController;
@property(copy, nonatomic) NSString *fromViewControllerName; // @synthesize fromViewControllerName=_fromViewControllerName;
- (void).cxx_destruct;
- (void)recognizeCompleteWith:(long long)arg1 andReason:(id)arg2;
- (void)resumeASR;
- (void)didStopASR;
- (void)didCancelASR;
- (void)searchJump:(id)arg1;
- (void)searchWithASR:(id)arg1;
- (void)voiceSearchButtonClicked;
- (void)onKeyboardHide:(id)arg1;
- (void)searchGuideHide:(id)arg1;
- (void)openSearchResultController:(id)arg1;
- (_Bool)checkIsHongbaoKeyword:(id)arg1;
- (void)updateInputQuery:(id)arg1;
- (void)childViewControllerBecomeFirstResponser:(id)arg1;
- (void)pushToH5WithURL:(id)arg1;
- (void)clickPhotoSearchBtn:(id)arg1;
- (void)updatePlaceHolder;
- (_Bool)checkPlaceholderProperty;
- (void)requestPlaceHolder;
- (void)updatePlaceHolderFormMtopRequestWith:(id)arg1;
- (void)updatePlaceHolderFormHttpRequest:(id)arg1 Query:(id)arg2;
- (void)updatePlaceHolder:(id)arg1 Query:(id)arg2 Color:(id)arg3;
- (void)leftButtonClick:(id)arg1;
- (void)createSearchTitleView;
- (void)didInitParams;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)checkCurrentInputEncode;
- (id)UTPageName;
- (id)pageName;
- (id)init;
- (id)gmy_findNeedleLineWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

