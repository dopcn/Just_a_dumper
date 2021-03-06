//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JMComponent-Protocol.h"

@class CALayer, JMSkuConfirmViewModel, NSString, UIButton;

@interface JMSkuConfirmView : UIView <JMComponent>
{
    UIButton *_button;
    UIButton *_leftButton;
    UIButton *_countListButton;
    CDUnknownBlockType _didClickBlock;
    JMSkuConfirmViewModel *_model;
    CALayer *_topLine;
}

+ (id)instanceFromNib;
@property(nonatomic) __weak CALayer *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) JMSkuConfirmViewModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
@property(retain, nonatomic) UIButton *countListButton; // @synthesize countListButton=_countListButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)arg1 leftButtonTitle:(id)arg2 buttonEnabled:(_Bool)arg3;
- (void)setCountListButtonTitle:(id)arg1 buttonEnabled:(_Bool)arg2;
- (void)buttonDidClick:(id)arg1;
- (void)reloadWithData:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)customButton;
- (void)setupContext;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

