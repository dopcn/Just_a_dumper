//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol QYProgramDateDelegate;

@interface QYProgramDateView : UIView
{
    unsigned long long _currentIdx;
    UIView *_seprateLine;
    NSArray *_dateItems;
    id <QYProgramDateDelegate> _delegate;
    NSArray *_dateViews;
    NSArray *_intervalViews;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSArray *intervalViews; // @synthesize intervalViews=_intervalViews;
@property(retain, nonatomic) NSArray *dateViews; // @synthesize dateViews=_dateViews;
@property(nonatomic) id <QYProgramDateDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *dateItems; // @synthesize dateItems=_dateItems;
- (void)updateConstraints;
@property(nonatomic) unsigned long long selectedIndex;
- (void)reloadData;
- (id)eventForIndex:(long long)arg1;
- (void)buttonDidClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

