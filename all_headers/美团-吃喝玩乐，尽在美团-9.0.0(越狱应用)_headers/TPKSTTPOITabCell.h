//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKTableViewCell.h"

@class NSArray, UIButton, UIView;

@interface TPKSTTPOITabCell : TPKTableViewCell
{
    UIView *_animationBar;
    UIButton *_lastHighLightedButton;
    NSArray *_tabButtons;
    NSArray *_fullSegments;
}

@property(copy, nonatomic) NSArray *fullSegments; // @synthesize fullSegments=_fullSegments;
@property(copy, nonatomic) NSArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) UIButton *lastHighLightedButton; // @synthesize lastHighLightedButton=_lastHighLightedButton;
@property(retain, nonatomic) UIView *animationBar; // @synthesize animationBar=_animationBar;
- (void).cxx_destruct;
- (void)setItem:(id)arg1;
- (void)animateBarToTitleButton:(id)arg1;
- (void)updateIndexWhenClickSegmentIndex:(long long)arg1;
- (void)updateIndexWhenScrollToSegmentIndex:(long long)arg1;
- (double)innerPaddingWithItemCount:(long long)arg1;
- (void)buildViewWithTitles:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

