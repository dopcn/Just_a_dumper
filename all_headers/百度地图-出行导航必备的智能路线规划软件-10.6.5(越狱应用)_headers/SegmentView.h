//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol SegmentViewDelegate;

@interface SegmentView : UIView
{
    id <SegmentViewDelegate> _delegate;
    NSArray *_buttonArray;
    NSArray *_seperatorLineArray;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *seperatorLineArray; // @synthesize seperatorLineArray=_seperatorLineArray;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) __weak id <SegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clickIndex:(id)arg1;
- (void)setButtonNameArray:(id)arg1;

@end

