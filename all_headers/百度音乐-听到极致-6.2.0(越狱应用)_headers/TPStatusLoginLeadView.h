//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface TPStatusLoginLeadView : UIView
{
    UIButton *_button;
    UIImageView *_backgroundView;
    CDUnknownBlockType _loginLeadBlock;
}

@property(copy, nonatomic) CDUnknownBlockType loginLeadBlock; // @synthesize loginLeadBlock=_loginLeadBlock;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

