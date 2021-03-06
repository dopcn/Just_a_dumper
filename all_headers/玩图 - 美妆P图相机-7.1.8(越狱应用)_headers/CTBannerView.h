//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CTNativeBannerView, NSString, NSTimer;

@interface CTBannerView : UIView
{
    _Bool _isInitRqu;
    _Bool _isTest;
    CTNativeBannerView *_anView;
    CTNativeBannerView *_anViewBack;
    long long _failCount;
    NSTimer *_timer;
    NSString *_slot_id;
    NSString *_fb_id;
    NSString *_mob_id;
    NSString *_keyWords;
    id _dlg;
    unsigned long long _whRate;
    CTBannerView *_hangSelf;
}

@property(retain, nonatomic) CTBannerView *hangSelf; // @synthesize hangSelf=_hangSelf;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(nonatomic) unsigned long long whRate; // @synthesize whRate=_whRate;
@property(nonatomic) __weak id dlg; // @synthesize dlg=_dlg;
@property(retain, nonatomic) NSString *keyWords; // @synthesize keyWords=_keyWords;
@property(retain, nonatomic) NSString *mob_id; // @synthesize mob_id=_mob_id;
@property(retain, nonatomic) NSString *fb_id; // @synthesize fb_id=_fb_id;
@property(retain, nonatomic) NSString *slot_id; // @synthesize slot_id=_slot_id;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) _Bool isInitRqu; // @synthesize isInitRqu=_isInitRqu;
@property(retain, nonatomic) CTNativeBannerView *anViewBack; // @synthesize anViewBack=_anViewBack;
@property(retain, nonatomic) CTNativeBannerView *anView; // @synthesize anView=_anView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)animateHandelMB;
- (void)animateHandel;
- (void)getWithSlot_id:(id)arg1 fbid:(id)arg2 ADmobID:(id)arg3 delegate:(id)arg4 imageWidthHightRate:(unsigned long long)arg5 isTest:(_Bool)arg6 keyWords:(id)arg7 Success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (void)getAdWithSlot_id:(id)arg1 fbid:(id)arg2 ADmobID:(id)arg3 delegate:(id)arg4 imageWidthHightRate:(unsigned long long)arg5 isTest:(_Bool)arg6 keyWords:(id)arg7 Success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (id)initWithFrame:(struct CGRect)arg1;

@end

