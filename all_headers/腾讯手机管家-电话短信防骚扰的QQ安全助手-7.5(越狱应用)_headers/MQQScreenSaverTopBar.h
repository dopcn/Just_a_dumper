//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQQLine, UIButton, UILabel;

@interface MQQScreenSaverTopBar : UIView
{
    UIButton *_backButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    MQQLine *_bottomLine;
}

@property(retain, nonatomic) MQQLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

