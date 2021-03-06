//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol DGSceneSegmentTabBarDelegate;

@interface DGSegmentTabBar : UIView
{
    _Bool _spreaded;
    _Bool _isManuallySelect;
    long long _selectedTag;
    id <DGSceneSegmentTabBarDelegate> _delegate;
    UIView *_contentView;
    UIView *_selectView;
    NSArray *_tabDataArray;
    NSMutableArray *_tabButtonArray;
    long long _recordSelectedTag;
    double _recordWidth;
    double _contentWidth;
}

@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) _Bool isManuallySelect; // @synthesize isManuallySelect=_isManuallySelect;
@property(nonatomic) double recordWidth; // @synthesize recordWidth=_recordWidth;
@property(nonatomic) long long recordSelectedTag; // @synthesize recordSelectedTag=_recordSelectedTag;
@property(retain, nonatomic) NSMutableArray *tabButtonArray; // @synthesize tabButtonArray=_tabButtonArray;
@property(retain, nonatomic) NSArray *tabDataArray; // @synthesize tabDataArray=_tabDataArray;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <DGSceneSegmentTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedTag; // @synthesize selectedTag=_selectedTag;
@property(nonatomic) _Bool spreaded; // @synthesize spreaded=_spreaded;
- (void).cxx_destruct;
- (void)tabButtonAction:(id)arg1;
- (struct CGRect)selectViewFrameFrombuttonFrame:(id)arg1;
- (void)selectTabWithTag:(long long)arg1 animated:(_Bool)arg2 needCallBack:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setSpreadState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadAnimated:(_Bool)arg1;
- (void)reloadWithSelectedTabTag:(long long)arg1 animated:(_Bool)arg2;
- (id)constructTabDataArray;
- (void)setupShadow;
- (void)setupSubviews;
- (id)init;

@end

