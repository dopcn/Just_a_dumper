//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView, UIViewController;
@protocol JDSHWebViewNavBarControllerDataSource;

@interface JDSHWebViewNavBarController : NSObject
{
    UIView *_backAndCloseView;
    UIBarButtonItem *placeholderBarButtonItem;
    UIViewController<JDSHWebViewNavBarControllerDataSource> *_webViewVC;
    id _shareButton;
    id _moreButton;
}

@property(retain, nonatomic) id moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) id shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak UIViewController<JDSHWebViewNavBarControllerDataSource> *webViewVC; // @synthesize webViewVC=_webViewVC;
- (void).cxx_destruct;
- (void)exitWebViewController;
- (void)showBackAndCloseButton;
- (void)shareAction:(id)arg1;
- (void)gotoCareList:(id)arg1;
- (void)gotoHomePage:(id)arg1;
- (void)gotoMassageCenter:(id)arg1;
- (void)showMenu:(id)arg1;
- (void)shopCartAction:(id)arg1;
- (id)customRightBarButtonItem:(_Bool)arg1;
- (void)backAction:(id)arg1;
- (void)share;
- (void)setWebviewControllerTitle:(id)arg1;
- (void)updateNavigationItems;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

