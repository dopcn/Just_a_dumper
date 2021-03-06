//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BMShareEditViewDelegate-Protocol.h"

@class BMShareEditView, NSString, UIImageView;

@interface BMShareView : UIView <BMShareEditViewDelegate>
{
    UIView *_showView;
    UIView *_blurView;
    NSString *_text;
    NSString *_imageUrl;
    NSString *_title;
    NSString *_shareUrl;
    BMShareEditView *_shareEditView;
    UIImageView *_holdImgView;
    long long _shareFromType;
    UIView *_whiteView;
}

+ (void)shareWithText:(id)arg1 images:(id)arg2 title:(id)arg3 shareUrl:(id)arg4;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(nonatomic) long long shareFromType; // @synthesize shareFromType=_shareFromType;
@property(retain, nonatomic) UIImageView *holdImgView; // @synthesize holdImgView=_holdImgView;
@property(retain, nonatomic) BMShareEditView *shareEditView; // @synthesize shareEditView=_shareEditView;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
- (void).cxx_destruct;
- (void)BMShareEditView:(id)arg1 didPressedConfirmBtn:(id)arg2;
- (void)BMShareEditView:(id)arg1 didPressedCancelBtn:(id)arg2;
- (id)compressImage:(id)arg1 toByte:(unsigned long long)arg2;
- (void)showShareEditViewWithShareModel:(id)arg1;
- (void)shareEvent:(id)arg1;
- (void)tapOnPage:(id)arg1;
- (void)statisticsWithTag:(long long)arg1;
- (void)cancelShareEvent;
- (void)showCancleAnimation;
- (void)showAnimation;
- (id)addShowView;
- (void)initWithSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shareText:(id)arg2 imageUrl:(id)arg3 title:(id)arg4 shareUrl:(id)arg5 shareFrom:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

