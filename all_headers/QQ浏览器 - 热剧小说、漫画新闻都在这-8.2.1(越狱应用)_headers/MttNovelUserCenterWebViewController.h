//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttNovelBaseWebViewController.h"

@interface MttNovelUserCenterWebViewController : MttNovelBaseWebViewController
{
    int _webViewType;
    unsigned long long _appType;
}

@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(nonatomic) int webViewType; // @synthesize webViewType=_webViewType;
- (void)onBackButtonClicked:(id)arg1;
- (void)initNavigtionBar;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithType:(int)arg1 appType:(unsigned long long)arg2;

@end

