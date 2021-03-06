//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCommonViewController.h"

#import "QMDAKeyboardControlDelegate-Protocol.h"
#import "QMEditorAudioPlayerBarViewControllerDelegate-Protocol.h"
#import "QMEditorDataSourceDelegate-Protocol.h"
#import "QMEditorErrorViewDelegate-Protocol.h"
#import "QMRichEditorDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, QMDAKeyboardControl, QMEditorAudioPlayerBarViewController, QMEditorErrorView, UIActivityIndicatorView;
@protocol QMIEditorDataSource, QMIEditorView;

@interface QMEditorViewController : FMCommonViewController <QMEditorAudioPlayerBarViewControllerDelegate, UIWebViewDelegate, UITextViewDelegate, QMDAKeyboardControlDelegate, UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, QMRichEditorDelegate, QMEditorDataSourceDelegate, QMEditorErrorViewDelegate, UIActionSheetDelegate>
{
    id <QMIEditorView> _editorView;
    _Bool _contentEditable;
    id <QMIEditorDataSource> _dataSource;
    int _keyboardStatus;
    QMDAKeyboardControl *_keyboardControl;
    QMEditorAudioPlayerBarViewController *_audioPlayerViewController;
    _Bool _isPlayingAudio;
    NSString *_playIngElementId;
    int _type;
    UIActivityIndicatorView *_loadingView;
    QMEditorErrorView *_errorView;
    NSMutableDictionary *_dowloadingInfos;
    id _keyBoardCaller;
}

+ (id)loadingView:(struct CGPoint)arg1;
+ (id)loadingViewWithPoint:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 withScale:(double)arg3;
@property(retain, nonatomic) id keyBoardCaller; // @synthesize keyBoardCaller=_keyBoardCaller;
@property(readonly, nonatomic) id <QMIEditorView> editorView; // @synthesize editorView=_editorView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool contentEditable; // @synthesize contentEditable=_contentEditable;
- (void).cxx_destruct;
- (void)adjustFocusWhenInsertImage;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidScroll:(struct CGRect)arg1;
- (void)keyboardDidChanged:(struct CGRect)arg1;
- (void)insertAttachInfo:(id)arg1;
- (void)didProcessEditorInfo:(id)arg1;
- (void)_preprocessEditorInfos:(id)arg1;
- (void)preprocessEditorInfos:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didRichEditorResignFirstResponder;
- (void)didRichEditorBecomeFirstResponder;
- (void)addAddPictureMenuItem;
- (void)goNextInput;
- (_Bool)shouldGoNextInput;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)disableContentEditable;
- (void)enableContentEditable;
- (float)editorVisibleHeight:(long long)arg1;
- (void)setVisibleRectToJs;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getAttachmentsFromJs;
- (void)handleSelectionChange:(id)arg1;
- (void)handlePasteFromJs:(id)arg1;
- (void)handleSetOffsetFromJS:(id)arg1;
- (void)handleStartEditFromJS:(id)arg1;
- (void)handleGetOffsetFromJS:(id)arg1;
- (void)handleLongPressViewerFromJs:(id)arg1;
- (void)handleLongPressImageFromJs:(id)arg1;
- (void)handleDomChangedFromJs:(id)arg1;
- (void)handleDomContentLoadedFromJs:(id)arg1;
- (void)handleAttachmentsChangedFromJs:(id)arg1;
- (void)handleSetWebscaleFromJS:(id)arg1;
- (void)handleEventsFromJs:(id)arg1 withUrl:(id)arg2;
- (void)handleTapEmailLinkFromJS:(id)arg1;
- (void)handleTapCalendarLinkFromJS:(id)arg1;
- (void)handleTapTelephoneNumberLinkFromJS:(id)arg1;
- (_Bool)handleEventsWithUrl:(id)arg1 navigationType:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)adjustEditorContentSizeToFit;
- (void)webViewDidContentFinishLoad:(id)arg1;
- (void)setSpaceUponKeyboardByJS;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)gotoPickerController;
- (void)gotoCameraController;
- (void)didClickErrorViewRetry:(id)arg1;
- (void)hideError;
- (void)showError:(id)arg1;
- (void)showErrorStr:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)didLoadEditorDataFailed:(id)arg1 error:(id)arg2;
- (void)didLoadEditorDataSucessed:(id)arg1;
- (void)refreshData;
- (void)refreshHeaderData;
- (void)loadData;
- (void)removeMenuItems;
- (void)insertImageFromMenuItem:(id)arg1;
- (void)addMenuItems;
- (void)storeCurrentSelection;
- (void)initUrlCache;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)renderKeyboardChanged:(struct CGRect)arg1 withType:(int)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeKeyboardControl;
- (void)addKeyboardControl;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 andType:(int)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)setAdjustsScrollViewInsets;
- (id)init;
- (void)audioPlayerBarViewController:(id)arg1 willExitWithUrl:(id)arg2;
- (void)audioPlayerBarViewController:(id)arg1 didFinishWithUrl:(id)arg2 isFailed:(_Bool)arg3;
- (void)audioPlayerBarViewController:(id)arg1 readyToPlay:(id)arg2;
- (void)didFinishDownLoad:(id)arg1 elementId:(id)arg2;
- (void)didErrorDownLoad:(id)arg1 elementId:(id)arg2 error:(id)arg3;
- (void)startDownLoad:(id)arg1 elementId:(id)arg2;
- (_Bool)isAudioFilePathDownloaded:(id)arg1 elementId:(id)arg2;
- (void)checkAudioAndStopPlaying;
- (void)stopPlayAudio;
- (void)startPlayAudio:(id)arg1 WithElementId:(id)arg2;
- (id)replaceLocalUrlWithFilePath:(id)arg1;
- (void)checkStopAudioDeleted:(id)arg1;
- (void)handleTapAudiotFromJS:(id)arg1;
- (_Bool)isPlayingWithElementId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

