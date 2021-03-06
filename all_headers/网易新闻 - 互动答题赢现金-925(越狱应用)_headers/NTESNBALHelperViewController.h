//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NTESNBALUIViewController.h"

@class NSString, UIButton, UIView, UIWebView;

@interface NTESNBALHelperViewController : NTESNBALUIViewController
{
    NSString *_url;
    UIView *_headerView;
    UIView *_hairLine;
    UIButton *_closeBtn;
    UIWebView *_webView;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *hairLine; // @synthesize hairLine=_hairLine;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)dismiss;
- (void)setUpUI;
- (void)setHelperViewDismissCompleteBlock:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

@end

