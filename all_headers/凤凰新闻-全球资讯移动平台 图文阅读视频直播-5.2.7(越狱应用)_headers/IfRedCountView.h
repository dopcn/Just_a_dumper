//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IfRedCountView : UIView
{
    int _count;
    UILabel *_countLabel;
}

+ (id)newWithDefaultFrame;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) int count; // @synthesize count=_count;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)initilize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

