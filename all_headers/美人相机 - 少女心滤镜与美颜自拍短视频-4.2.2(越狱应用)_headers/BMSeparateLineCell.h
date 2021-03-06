//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface BMSeparateLineCell : UITableViewCell
{
    unsigned long long _sequence;
    double _separateStart;
    UIView *_topSeparateLine;
    UIView *_bottomSeparateLine;
}

@property(retain, nonatomic) UIView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) UIView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(nonatomic) double separateStart; // @synthesize separateStart=_separateStart;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

