//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGFullscreenIntroInstructionView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_contentView;
    UIView *_textContainerView;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 stepNumber:(long long)arg3;

@end

