//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBGiftMessageComposeViewControllerDelegate-Protocol.h"

@class NSDate, NSLayoutConstraint, NSString, RKBlurredBackgroundView, RKErrorView, RKSeparatorView, TBJSONWorks, TBReaderActivityIndicatorView, UILabel, UIView, UIWebView, _TBGiftNoteViewController_CancellationButton;

@interface TBGiftNoteViewController : UIViewController <TBGiftMessageComposeViewControllerDelegate>
{
    RKBlurredBackgroundView *_titleBarOverlayView;
    RKSeparatorView *_titleBarSeparatorView;
    UIView *_titleBarView;
    UILabel *_titleLabel;
    _TBGiftNoteViewController_CancellationButton *_cancellationButton;
    UIWebView *_webView;
    NSLayoutConstraint *_webViewBottomLayoutConstraint;
    RKErrorView *_errorView;
    TBReaderActivityIndicatorView *_activityIndicatorView;
    TBJSONWorks *_JSONWorks;
    _Bool _isPublicationBundle;
    NSString *_defaultMessage;
    unsigned long long _eventAvailableAmount;
    NSString *_message;
    NSDate *_messageModificationDate;
    unsigned long long _themeStyle;
    unsigned long long _publicationID;
    unsigned long long _eventID;
}

@property(readonly, nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(readonly, nonatomic) unsigned long long publicationID; // @synthesize publicationID=_publicationID;
@property(nonatomic) unsigned long long themeStyle; // @synthesize themeStyle=_themeStyle;
- (void).cxx_destruct;
- (void)giftMessageComposeViewController:(id)arg1 didFinishWithResult:(unsigned long long)arg2;
- (void)errorView:(id)arg1 didClickRefreshButton:(id)arg2 withEvent:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_didClickCancellationButton:(id)arg1 withEvent:(id)arg2;
- (void)_teleportDidPurchaseGiftNotification:(id)arg1;
- (void)_renderGiftNote;
- (void)_loadWebView;
- (void)_loadJSONWorksAndEventMeta;
- (void)_startLoadingAnimated:(_Bool)arg1;
- (void)_setShowsActivityIndicatorView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowsActivityIndicatorView:(_Bool)arg1;
- (_Bool)_showsActivityIndicatorView;
- (void)_setShowsErrorView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowsErrorView:(_Bool)arg1;
- (_Bool)_showsErrorView;
- (void)_themeStyleDidChange;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)rk_keyboardWillChangeToFrame:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rk_willBeDismissedAnimated:(_Bool)arg1;
- (void)rk_willBePresentedAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPublicationID:(unsigned long long)arg1 eventID:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

