//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class UILabel;

@interface FMCounterTextView : UITextView
{
    unsigned long long _limitCount;
    UILabel *_counterLabel;
}

@property(readonly, nonatomic) UILabel *counterLabel; // @synthesize counterLabel=_counterLabel;
@property(nonatomic) unsigned long long limitCount; // @synthesize limitCount=_limitCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)counterLabelText;
- (void)layoutSubviews;
- (id)init;

@end

