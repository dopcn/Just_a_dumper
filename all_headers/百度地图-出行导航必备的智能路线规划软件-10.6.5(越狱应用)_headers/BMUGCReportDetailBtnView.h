//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface BMUGCReportDetailBtnView : UIView
{
    long long _selectedIndex;
    NSArray *_subEntryArray;
    CDUnknownBlockType _onSeletedCallback;
    UILabel *_titleLb;
}

+ (double)btnViewHeight;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(copy, nonatomic) CDUnknownBlockType onSeletedCallback; // @synthesize onSeletedCallback=_onSeletedCallback;
@property(retain, nonatomic) NSArray *subEntryArray; // @synthesize subEntryArray=_subEntryArray;
@property(readonly, nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)onBtnPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

