//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKCell.h"

@class UIView;

@interface PFBMineBaseCell : SAKCell
{
    unsigned long long _seperatorStyle;
    UIView *_topSeperatorLine;
    UIView *_bottomSeperatorLine;
}

@property(retain, nonatomic) UIView *bottomSeperatorLine; // @synthesize bottomSeperatorLine=_bottomSeperatorLine;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(nonatomic) unsigned long long seperatorStyle; // @synthesize seperatorStyle=_seperatorStyle;
- (void).cxx_destruct;
- (void)addBottomSeperatorLineWithLeftMargin:(double)arg1;
- (void)addTopSeperatorLine;

@end

