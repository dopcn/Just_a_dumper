//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMYFloatingAdInfo, NSDictionary, NSURL, UIButton, UIImageView;

@interface MTMYFloatingAdView : UIView
{
    MTMYFloatingAdInfo *_adInfo;
    NSDictionary *_paramsDic;
    NSURL *_adImageURL;
    UIView *_parentView;
    UIImageView *_ivContent;
    UIView *_maskView;
    UIButton *_btnClose;
    CDUnknownBlockType _tapBlock;
}

+ (id)showWithParams:(id)arg1 inView:(id)arg2 tapBlock:(CDUnknownBlockType)arg3;
+ (id)showWithAdInfo:(id)arg1 InView:(id)arg2 TapBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UIButton *btnClose; // @synthesize btnClose=_btnClose;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *ivContent; // @synthesize ivContent=_ivContent;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSURL *adImageURL; // @synthesize adImageURL=_adImageURL;
@property(retain, nonatomic) NSDictionary *paramsDic; // @synthesize paramsDic=_paramsDic;
@property(retain, nonatomic) MTMYFloatingAdInfo *adInfo; // @synthesize adInfo=_adInfo;
- (void).cxx_destruct;
- (void)ivContentClicked;
- (void)btnCloseClicked;
- (void)initFloatingAdLayout;
- (void)initFloatingAdView;

@end

