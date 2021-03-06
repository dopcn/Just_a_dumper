//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSLayoutManagerDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "SGSOCRToolBarDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, NSURLSessionDataTask, SGSOCRImageClipViewController, SGSOCRToolBar, UIButton, UIImage, UITextView;

@interface SGSOCRResultViewController : UIViewController <UITextViewDelegate, NSLayoutManagerDelegate, NSURLSessionDelegate, SGSOCRToolBarDelegate>
{
    UIImage *_inputImage;
    NSString *_resultString;
    SGSOCRImageClipViewController *_parentVC;
    NSURLSessionDataTask *_uploadTask;
    UITextView *_recognizedTextView;
    SGSOCRToolBar *_toolBar;
    UIButton *_crumbItemButton;
    struct CGRect _imageViewFrame;
    struct CGRect _toolBarFrame;
    struct CGRect _recognizedTextViewFrame;
}

@property(nonatomic) struct CGRect recognizedTextViewFrame; // @synthesize recognizedTextViewFrame=_recognizedTextViewFrame;
@property(nonatomic) struct CGRect toolBarFrame; // @synthesize toolBarFrame=_toolBarFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(nonatomic) __weak UIButton *crumbItemButton; // @synthesize crumbItemButton=_crumbItemButton;
@property(retain, nonatomic) SGSOCRToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UITextView *recognizedTextView; // @synthesize recognizedTextView=_recognizedTextView;
@property(retain, nonatomic) NSURLSessionDataTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(nonatomic) __weak SGSOCRImageClipViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(retain, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (double)layoutManager:(id)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecameActive:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)reCapture;
- (void)cancel;
- (void)sendToOtherAppClicked;
- (void)sendToWeChatButtonClicked;
- (void)sendToQQButtonClicked;
- (void)clearButtonClicked;
- (void)copyButtonClicked;
- (void)passStringToKeyboard:(id)arg1;
- (id)trimString:(id)arg1;
- (void)sysReturnButtonClicked;
- (void)getCrumbItemInfo;
- (void)recursiveSubViews:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

