//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface BDPanCardColorGradientView : UIView
{
    int _direction;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) int direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)updateStartColorHex:(id)arg1 endColorHex:(id)arg2;
- (id)initWithDirection:(int)arg1 frame:(struct CGRect)arg2;

@end

