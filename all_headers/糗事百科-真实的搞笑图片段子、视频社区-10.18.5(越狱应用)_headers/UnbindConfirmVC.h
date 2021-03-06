//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, PLHttpBlock, QBUITextField, UIButton, UILabel, UIScrollView;

@interface UnbindConfirmVC : QBBaseViewController <UIScrollViewDelegate>
{
    CDUnknownBlockType block;
    int _type;
    UIScrollView *_scrollView;
    UILabel *_unbindTips;
    QBUITextField *_passwordFiled;
    UIButton *_unbindBtn;
    PLHttpBlock *_httpClient;
    NSString *_tipsStr;
}

@property(retain, nonatomic) NSString *tipsStr; // @synthesize tipsStr=_tipsStr;
@property(retain, nonatomic) PLHttpBlock *httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) UIButton *unbindBtn; // @synthesize unbindBtn=_unbindBtn;
@property(retain, nonatomic) QBUITextField *passwordFiled; // @synthesize passwordFiled=_passwordFiled;
@property(retain, nonatomic) UILabel *unbindTips; // @synthesize unbindTips=_unbindTips;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)unbindBtn:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

