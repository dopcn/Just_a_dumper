//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVLazyScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NVLazyPageScrollView, NVVerticalLine, UIImageView;

@interface NVEntertainmentHotCell : UITableViewCell <NVLazyScrollViewDelegate>
{
    long long _currentIndex;
    UIImageView *_icon;
    NSArray *_dataList;
    NSMutableArray *_viewList;
    NVLazyPageScrollView *_scrollView;
    NVVerticalLine *_line;
}

+ (id)subtitleFont;
+ (id)titleFont;
+ (double)cellHeight;
@property(retain, nonatomic) NVVerticalLine *line; // @synthesize line=_line;
@property(retain, nonatomic) NVLazyPageScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *viewList; // @synthesize viewList=_viewList;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)lazyScrollView:(id)arg1 currentPageChanged:(long long)arg2;
- (id)viewForPage:(long long)arg1;
- (double)lineHeight;
- (void)setupBorder:(id)arg1;
- (id)viewWithIcon:(id)arg1 andString:(id)arg2;
- (id)labelWithString:(id)arg1 andFont:(id)arg2;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

