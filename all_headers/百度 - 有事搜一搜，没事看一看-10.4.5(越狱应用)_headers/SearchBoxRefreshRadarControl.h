//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

@class BBADimeCircleMessageView, BBADimeCircleRefreshView, NSString, SearchBoxRefreshHeader;

@interface SearchBoxRefreshRadarControl : RCTView
{
    BBADimeCircleRefreshView *_radarView;
    BBADimeCircleMessageView *_messageView;
    double _percent;
    NSString *_status;
    double _refreshHeight;
    double _radarTopMargin;
    double _msgTopMargin;
    SearchBoxRefreshHeader *_searchBoxHeader;
}

@property(nonatomic) __weak SearchBoxRefreshHeader *searchBoxHeader; // @synthesize searchBoxHeader=_searchBoxHeader;
@property(nonatomic) double msgTopMargin; // @synthesize msgTopMargin=_msgTopMargin;
@property(nonatomic) double radarTopMargin; // @synthesize radarTopMargin=_radarTopMargin;
@property(nonatomic) double refreshHeight; // @synthesize refreshHeight=_refreshHeight;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(retain, nonatomic) BBADimeCircleMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) BBADimeCircleRefreshView *radarView; // @synthesize radarView=_radarView;
- (void).cxx_destruct;
- (void)updateSearchBoxHeader:(double)arg1;
- (void)layoutSubViews_after;
- (void)layoutSubViews_before;
- (void)alertWithText:(id)arg1;
- (void)resetControl;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

