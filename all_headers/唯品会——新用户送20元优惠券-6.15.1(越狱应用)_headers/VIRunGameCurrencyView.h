//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UICountingLabel, UIImageView;

@interface VIRunGameCurrencyView : UIView
{
    UIImageView *_backgroundImageView;
    UICountingLabel *_label;
}

@property(retain, nonatomic) UICountingLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)setCurrency:(long long)arg1 animated:(_Bool)arg2;
- (void)setCurrency:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

