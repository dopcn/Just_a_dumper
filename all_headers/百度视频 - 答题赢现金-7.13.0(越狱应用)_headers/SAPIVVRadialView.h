//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SAPIVVRadialView : UIView
{
    NSArray *_ratios;
    double _unitCount;
}

@property(nonatomic) double unitCount; // @synthesize unitCount=_unitCount;
@property(retain, nonatomic) NSArray *ratios; // @synthesize ratios=_ratios;
- (void).cxx_destruct;
- (void)strokeRoundWithRect:(struct CGRect)arg1 diameter:(double)arg2;
- (void)fillRoundWithRect:(struct CGRect)arg1 diameter:(double)arg2 alpha:(double)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

