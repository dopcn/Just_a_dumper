//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface CTHotelToastView : UIView
{
    UILabel *_tipLabel;
}

+ (void)showTipView:(id)arg1 bottomMargin:(double)arg2 cornerRadius:(double)arg3 inView:(id)arg4 stayTime:(double)arg5;
+ (void)showTipText:(id)arg1 bottomMargin:(double)arg2 cornerRadius:(double)arg3 inView:(id)arg4 stayTime:(double)arg5;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)remove;
- (void)fadeOutAnimation;

@end

