//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;

@interface DUIIndexCycleAreaPopDanceScroll : UIScrollView
{
    UIView *parentView;
    _Bool bigView;
    _Bool isToCycle;
    long long period;
    long long currentState;
    long long animationId;
    long long _subviewTag;
}

@property(nonatomic) long long subviewTag; // @synthesize subviewTag=_subviewTag;
@property(nonatomic) long long animationId; // @synthesize animationId;
@property(nonatomic) long long currentState; // @synthesize currentState;
@property(nonatomic) _Bool isToCycle; // @synthesize isToCycle;
@property(nonatomic) _Bool bigView; // @synthesize bigView;
@property(nonatomic) long long period; // @synthesize period;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setOffset:(long long)arg1;
- (id)getView:(long long)arg1;
- (void)addView:(id)arg1;
- (void)clearViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

