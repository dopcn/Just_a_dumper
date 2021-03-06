//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class AdvMaterialModel, NSDate, NSString, NSTimer, UIButton, UIImageView, UIView;

@interface OprAdvertiseVC : NSObject <MFMessageComposeViewControllerDelegate>
{
    AdvMaterialModel *_material;
    UIButton *_btnAdvertise;
    NSTimer *_timer;
    unsigned long long _countdownSec;
    NSDate *_dateStart;
    UIView *_viewAdv;
    UIImageView *_imgViewAdv;
    UIButton *_btnCloseAdv;
}

@property(retain, nonatomic) UIButton *btnCloseAdv; // @synthesize btnCloseAdv=_btnCloseAdv;
@property(retain, nonatomic) UIImageView *imgViewAdv; // @synthesize imgViewAdv=_imgViewAdv;
@property(retain, nonatomic) UIView *viewAdv; // @synthesize viewAdv=_viewAdv;
- (void).cxx_destruct;
- (void)musicAPlayerAdFinished:(id)arg1;
- (void)musicAPlayerAdPlaying:(id)arg1;
- (void)musicAPlayerAdWillPlay:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)findViewController:(id)arg1;
- (void)setRemainSecond:(unsigned long long)arg1;
- (void)onTimer;
- (void)clickAdvertise;
- (void)closeViewAdvertise;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

