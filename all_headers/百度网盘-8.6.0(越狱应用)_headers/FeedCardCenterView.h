//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

@interface FeedCardCenterView : UIView
{
    NSString *_feedID;
    UIView *_moreView;
    NSMutableArray *_thumbImages;
    NSMutableArray *_thumbNames;
    NSMutableArray *_thumbImageViews;
    NSMutableArray *_thumbNameViews;
}

@property(retain, nonatomic) NSMutableArray *thumbNameViews; // @synthesize thumbNameViews=_thumbNameViews;
@property(retain, nonatomic) NSMutableArray *thumbImageViews; // @synthesize thumbImageViews=_thumbImageViews;
@property(retain, nonatomic) NSMutableArray *thumbNames; // @synthesize thumbNames=_thumbNames;
@property(retain, nonatomic) NSMutableArray *thumbImages; // @synthesize thumbImages=_thumbImages;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (void)setHeight:(double)arg1;
- (void)setupThumbNames:(id)arg1;
- (void)setupThumbImages:(id)arg1;
- (id)fetchThumbNames;
- (id)fetchThumbImages;
- (id)fetchThumbNameViews;
- (id)fetchThumbImageViews;
- (void)setupThumbImageViewAtIndex:(int)arg1 contentMode:(long long)arg2;
- (void)setupThumbNameViewAtIndex:(unsigned long long)arg1 enable:(_Bool)arg2;
- (void)setupThumbImageViewAtIndex:(unsigned long long)arg1 enable:(_Bool)arg2;
- (void)setupThumbViewAtIndex:(unsigned long long)arg1 enable:(_Bool)arg2;
- (void)relayoutThumbView:(id)arg1;
- (id)productMoreView;
- (id)productThumbNameView;
- (id)productThumbImageView;
- (void)setupView;
- (void)handleCenterViewAction:(id)arg1 index:(long long)arg2;
- (void)handleCenterViewAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

