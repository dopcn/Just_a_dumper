//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIScrollView;

@interface YYRedPacketWordView : UIView
{
    NSMutableArray *_arrays;
    NSMutableArray *_constraintArrays;
    UIScrollView *_scrollView;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)setMyHidden:(_Bool)arg1;
- (void)clicked:(id)arg1;
- (void)show:(struct CGSize)arg1 words:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

