//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface FALivePriaseSingLevelTipView : UIView
{
    UILabel *_singLevelLabel;
}

@property(retain, nonatomic) UILabel *singLevelLabel; // @synthesize singLevelLabel=_singLevelLabel;
- (void).cxx_destruct;
- (void)updateSingLevel:(id)arg1;
- (void)removeAllAnimations;
- (void)doPriaseBtnAppearAnimationWithFinalFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

