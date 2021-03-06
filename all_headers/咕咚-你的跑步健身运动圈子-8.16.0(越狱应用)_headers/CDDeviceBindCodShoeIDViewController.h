//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDViewController.h"

@class CDScanCodShoeHandler, NSLayoutConstraint, UIButton, UILabel, UITextField;

@interface CDDeviceBindCodShoeIDViewController : CDViewController
{
    long long _deviceCategory;
    UITextField *_deviceIDTextField;
    UIButton *_bindDeviceButton;
    NSLayoutConstraint *_layoutWidhtOfContentView;
    UILabel *_titleLabel;
    CDScanCodShoeHandler *_scanCodShoeHandler;
}

+ (id)controller;
@property(retain, nonatomic) CDScanCodShoeHandler *scanCodShoeHandler; // @synthesize scanCodShoeHandler=_scanCodShoeHandler;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *layoutWidhtOfContentView; // @synthesize layoutWidhtOfContentView=_layoutWidhtOfContentView;
@property(nonatomic) __weak UIButton *bindDeviceButton; // @synthesize bindDeviceButton=_bindDeviceButton;
@property(nonatomic) __weak UITextField *deviceIDTextField; // @synthesize deviceIDTextField=_deviceIDTextField;
@property(nonatomic) long long deviceCategory; // @synthesize deviceCategory=_deviceCategory;
- (void).cxx_destruct;
- (_Bool)cd_prefersInteractivePopGestureRecognizerEnabled;
- (_Bool)cd_prefersNavigationBarBottomLineHidden;
- (long long)cd_prefersNavigationBarStyle;
- (_Bool)checkPureInt:(id)arg1;
- (_Bool)checkDeviceID:(id)arg1;
- (void)bindDeviceClicked:(id)arg1;
- (void)didNaviRightButtonClicked;
- (void)viewDidLoad;

@end

