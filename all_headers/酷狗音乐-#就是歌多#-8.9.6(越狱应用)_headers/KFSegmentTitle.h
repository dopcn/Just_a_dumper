//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface KFSegmentTitle : UIView
{
    CDUnknownBlockType _selectedBlock;
    UIColor *_upTitleColor;
    UIColor *_downTitleColor;
    UIColor *_spreteLineColor;
    NSMutableArray *_segmentTitles;
    NSMutableArray *_spaceLines;
}

@property(retain, nonatomic) NSMutableArray *spaceLines; // @synthesize spaceLines=_spaceLines;
@property(retain, nonatomic) NSMutableArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(retain, nonatomic) UIColor *spreteLineColor; // @synthesize spreteLineColor=_spreteLineColor;
@property(retain, nonatomic) UIColor *downTitleColor; // @synthesize downTitleColor=_downTitleColor;
@property(retain, nonatomic) UIColor *upTitleColor; // @synthesize upTitleColor=_upTitleColor;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)buttonTouchInside:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)configureWithTitleStructs:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

