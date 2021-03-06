//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface YLPushTipAlterView : UIView
{
    _Bool _isOtherType;
    NSString *_message;
    NSString *_imageName;
    NSString *_pageKey;
    NSString *_title;
    UIImageView *_tipImageView;
    UILabel *_messageLabel;
    UIButton *_goToSetting;
    UIButton *_cancel;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIButton *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) UIButton *goToSetting; // @synthesize goToSetting=_goToSetting;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(nonatomic) _Bool isOtherType; // @synthesize isOtherType=_isOtherType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pageKey; // @synthesize pageKey=_pageKey;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)cancelSetting:(id)arg1;
- (id)retStretchImage:(id)arg1;
- (void)goToSettingPush:(id)arg1;
- (id)retImageVieMessage:(id)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

