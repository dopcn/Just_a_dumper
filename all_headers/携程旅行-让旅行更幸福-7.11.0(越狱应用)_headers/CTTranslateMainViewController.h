//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTAnimationLoadingViewDelegate-Protocol.h"
#import "CTHandleTranslateHistoryProtocol-Protocol.h"
#import "CTLanguageSelectProtocol-Protocol.h"
#import "CTTranslateTextField-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CTAnimationLoadingView, CTLanguageSelectView, CTShowEffectTextView, CTTranslateHandleRestrictModel, CTTranslateLanguagesModel, CTTranslateTextField, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface CTTranslateMainViewController : CTRootViewController <CTLanguageSelectProtocol, CTTranslateTextField, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, CTHandleTranslateHistoryProtocol, UIAlertViewDelegate, CTAnimationLoadingViewDelegate>
{
    _Bool _isExcutingScrollAnimation;
    _Bool _isSourceLanguageModelChanged;
    _Bool _isStopRequestTranslate;
    _Bool _isSpeaking;
    _Bool _netError;
    _Bool _isPageDisappear;
    _Bool _isTranslateTextFieldNormal;
    _Bool _isPrePageNavgationBarHidden;
    UILabel *_languageFromLabel;
    UILabel *_languageToLabel;
    UIButton *_changeButton;
    NSLayoutConstraint *_translateContentHeight;
    NSLayoutConstraint *_languageSelectViewHeight;
    NSLayoutConstraint *_bottomLogoContainerViewHeight;
    UIView *_languageSelectContainer;
    UIView *_translateTextFieldContainer;
    CTTranslateTextField *_translateTextField;
    UIView *_translateContentView;
    CTTranslateLanguagesModel *_tranlaterToLanguageModel;
    CTTranslateLanguagesModel *_tranlaterFromlanguageModel;
    CTLanguageSelectView *_languageSelectView;
    CTShowEffectTextView *_showEffectTextView;
    NSMutableArray *_speakHistory;
    CTAnimationLoadingView *_translateLoadingView;
    UIView *_corverView;
    UIView *_clickView;
    UIView *_cameraTranView;
    UIView *_voiceTranView;
    UIButton *_translateButton;
    CDUnknownBlockType _callbackResult;
    CTTranslateHandleRestrictModel *_restrictModel;
    UITableView *_tableView;
    UIView *_leftBarButtonView;
    UIView *_baiduLogoView;
    NSString *_pageFrom;
    NSString *_settingLangFrom;
    NSString *_settingLangTo;
}

@property(copy, nonatomic) NSString *settingLangTo; // @synthesize settingLangTo=_settingLangTo;
@property(copy, nonatomic) NSString *settingLangFrom; // @synthesize settingLangFrom=_settingLangFrom;
@property(copy, nonatomic) NSString *pageFrom; // @synthesize pageFrom=_pageFrom;
@property(nonatomic) _Bool isPrePageNavgationBarHidden; // @synthesize isPrePageNavgationBarHidden=_isPrePageNavgationBarHidden;
@property(nonatomic) _Bool isTranslateTextFieldNormal; // @synthesize isTranslateTextFieldNormal=_isTranslateTextFieldNormal;
@property(nonatomic) __weak UIView *baiduLogoView; // @synthesize baiduLogoView=_baiduLogoView;
@property(retain, nonatomic) UIView *leftBarButtonView; // @synthesize leftBarButtonView=_leftBarButtonView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPageDisappear; // @synthesize isPageDisappear=_isPageDisappear;
@property(retain, nonatomic) CTTranslateHandleRestrictModel *restrictModel; // @synthesize restrictModel=_restrictModel;
@property(copy, nonatomic) CDUnknownBlockType callbackResult; // @synthesize callbackResult=_callbackResult;
@property(retain, nonatomic) UIButton *translateButton; // @synthesize translateButton=_translateButton;
@property(retain, nonatomic) UIView *voiceTranView; // @synthesize voiceTranView=_voiceTranView;
@property(retain, nonatomic) UIView *cameraTranView; // @synthesize cameraTranView=_cameraTranView;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(retain, nonatomic) UIView *corverView; // @synthesize corverView=_corverView;
@property(retain, nonatomic) CTAnimationLoadingView *translateLoadingView; // @synthesize translateLoadingView=_translateLoadingView;
@property(retain, nonatomic) NSMutableArray *speakHistory; // @synthesize speakHistory=_speakHistory;
@property(nonatomic) _Bool netError; // @synthesize netError=_netError;
@property(nonatomic) _Bool isSpeaking; // @synthesize isSpeaking=_isSpeaking;
@property(retain, nonatomic) CTShowEffectTextView *showEffectTextView; // @synthesize showEffectTextView=_showEffectTextView;
@property(retain, nonatomic) CTLanguageSelectView *languageSelectView; // @synthesize languageSelectView=_languageSelectView;
@property(nonatomic) _Bool isStopRequestTranslate; // @synthesize isStopRequestTranslate=_isStopRequestTranslate;
@property(nonatomic) _Bool isSourceLanguageModelChanged; // @synthesize isSourceLanguageModelChanged=_isSourceLanguageModelChanged;
@property(retain, nonatomic) CTTranslateLanguagesModel *tranlaterFromlanguageModel; // @synthesize tranlaterFromlanguageModel=_tranlaterFromlanguageModel;
@property(retain, nonatomic) CTTranslateLanguagesModel *tranlaterToLanguageModel; // @synthesize tranlaterToLanguageModel=_tranlaterToLanguageModel;
@property(nonatomic) _Bool isExcutingScrollAnimation; // @synthesize isExcutingScrollAnimation=_isExcutingScrollAnimation;
@property(retain, nonatomic) UIView *translateContentView; // @synthesize translateContentView=_translateContentView;
@property(retain, nonatomic) CTTranslateTextField *translateTextField; // @synthesize translateTextField=_translateTextField;
@property(retain, nonatomic) UIView *translateTextFieldContainer; // @synthesize translateTextFieldContainer=_translateTextFieldContainer;
@property(retain, nonatomic) UIView *languageSelectContainer; // @synthesize languageSelectContainer=_languageSelectContainer;
@property(nonatomic) __weak NSLayoutConstraint *bottomLogoContainerViewHeight; // @synthesize bottomLogoContainerViewHeight=_bottomLogoContainerViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *languageSelectViewHeight; // @synthesize languageSelectViewHeight=_languageSelectViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *translateContentHeight; // @synthesize translateContentHeight=_translateContentHeight;
@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(nonatomic) __weak UILabel *languageToLabel; // @synthesize languageToLabel=_languageToLabel;
@property(nonatomic) __weak UILabel *languageFromLabel; // @synthesize languageFromLabel=_languageFromLabel;
- (void).cxx_destruct;
- (void)downScroll;
- (void)upScroll;
- (void)handleScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getTranslatedString:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)voiceTranslate:(id)arg1;
- (void)takeCamera;
- (void)cameraTranslate;
- (void)deleteHistory:(id)arg1;
- (void)fullScreenForHistory:(id)arg1;
- (void)afterCancelLoadingWithView:(id)arg1;
- (_Bool)isHistoryModelExit:(id)arg1;
- (_Bool)isTextHistoryModelExit;
- (_Bool)isTranslateTextFieldEmpty;
- (void)translateString;
- (void)layoutClickView:(id)arg1;
- (void)translateButtonClicked:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)selectViewSelectIndex:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeTextCorverView;
- (void)removeAllHistoryJudge;
- (void)goToBaiduTranslate:(id)arg1;
- (void)addToDesktop:(id)arg1;
- (void)languageExchange:(id)arg1;
- (void)toLanguageSelectClicked:(id)arg1;
- (void)fromLanguageSelectClicked:(id)arg1;
- (void)updateHistory;
- (void)removeAllTranslateHistory;
- (void)removeTranslateHistory:(id)arg1;
- (void)moveTranslateHistoryToHead:(long long)arg1;
- (void)addTranslateHistory:(id)arg1;
- (void)translateHistoryScrollToHead;
- (void)didReceiveMemoryWarning;
- (void)setupLanguage:(id)arg1 isSourceLanguage:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)appWillResignActive;
- (void)appWillBecomeActive;
- (void)initView;
- (void)adjustiPhoneX;
- (void)initData;
- (void)viewDidLoad;
- (void)backBarButtonClicked:(id)arg1;
- (id)initWithPagesign:(id)arg1 langFrom:(id)arg2 langTo:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

