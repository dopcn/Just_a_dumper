//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CTIMEmojiButton, UIImageView, UILabel;

@interface CTIMButtonEmojiTip : UIView
{
    CTIMEmojiButton *_btn;
    UIImageView *_backgroundImageView;
    UILabel *_label;
}

+ (id)sharedTip;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) CTIMEmojiButton *btn; // @synthesize btn=_btn;
- (void).cxx_destruct;
- (void)showTipOnButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

