//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface UIHomePageSimpleFeedsHeader : UIView
{
    UILabel *_textLabel;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

