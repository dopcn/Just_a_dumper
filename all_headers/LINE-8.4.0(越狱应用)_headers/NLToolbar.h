//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSMutableArray, NSString;

@interface NLToolbar : UIImageView
{
    NSMutableArray *_buttons;
    NSString *_rulesetNameForCustomTypeButton;
}

@property(retain, nonatomic) NSString *rulesetNameForCustomTypeButton; // @synthesize rulesetNameForCustomTypeButton=_rulesetNameForCustomTypeButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)safeAreaInsetsDidChange;
- (id)addButtonWithType:(long long)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)_init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

