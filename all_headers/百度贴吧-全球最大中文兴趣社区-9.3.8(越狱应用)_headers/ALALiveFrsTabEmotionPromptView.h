//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBCResManagerDelegate-Protocol.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel;
@protocol ALALiveFrsTabEmotionPromptViewDelegate;

@interface ALALiveFrsTabEmotionPromptView : UIView <TBCResManagerDelegate>
{
    id <ALALiveFrsTabEmotionPromptViewDelegate> _emotionDelegate;
    UIImageView *_emotionImageView;
    UILabel *_hintLabel;
    UIButton *_hintButton;
    UIImage *_emotionImage;
    NSString *_hintText;
    NSString *_hintButtonTitle;
    UIView *_emotionSuperView;
}

@property(retain, nonatomic) UIView *emotionSuperView; // @synthesize emotionSuperView=_emotionSuperView;
@property(retain, nonatomic) NSString *hintButtonTitle; // @synthesize hintButtonTitle=_hintButtonTitle;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(retain, nonatomic) UIImage *emotionImage; // @synthesize emotionImage=_emotionImage;
@property(retain, nonatomic) UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *emotionImageView; // @synthesize emotionImageView=_emotionImageView;
@property(nonatomic) __weak id <ALALiveFrsTabEmotionPromptViewDelegate> emotionDelegate; // @synthesize emotionDelegate=_emotionDelegate;
- (void).cxx_destruct;
- (void)resoureManagerDelegate;
- (void)clear;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)hintButtonClick;
- (void)setupUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

