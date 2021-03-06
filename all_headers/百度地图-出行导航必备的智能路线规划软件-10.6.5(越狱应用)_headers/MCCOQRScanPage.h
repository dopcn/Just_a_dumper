//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePage.h"

#import "MCCOScanViewDelegate-Protocol.h"

@class BaseNavigationView, MCCOScanView, NSString;
@protocol MCCOScanCodeControllerDelegate;

@interface MCCOQRScanPage : BasePage <MCCOScanViewDelegate>
{
    id <MCCOScanCodeControllerDelegate> _scanDelegate;
    BaseNavigationView *_navBar;
    MCCOScanView *_scanView;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) MCCOScanView *scanView; // @synthesize scanView=_scanView;
@property(retain, nonatomic) BaseNavigationView *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) __weak id <MCCOScanCodeControllerDelegate> scanDelegate; // @synthesize scanDelegate=_scanDelegate;
- (void).cxx_destruct;
- (void)scanCodeController:(id)arg1 codeInfo:(id)arg2;
- (void)scanView:(id)arg1 codeInfo:(id)arg2;
- (void)onNavigationBackButton;
- (void)configView;
- (void)configNavBar;
- (void)pageResult:(int)arg1 requestCode:(int)arg2 data:(id)arg3;
- (void)pageStop;
- (void)pageStart;
- (void)pageCreate:(id)arg1;
- (void)pageDestroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

