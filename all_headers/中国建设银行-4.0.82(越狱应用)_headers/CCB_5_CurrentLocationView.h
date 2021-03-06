//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBView.h"

@class CCBButton, CCBLabel, NSString;
@protocol CCB_5_CurrentLocationViewDelegate;

@interface CCB_5_CurrentLocationView : CCBView
{
    CCBLabel *_locationLabel;
    CCBButton *_refreshBtn;
    NSString *_changeLocationString;
    CDUnknownBlockType _onClickIndicator;
    id <CCB_5_CurrentLocationViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CCB_5_CurrentLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType onClickIndicator; // @synthesize onClickIndicator=_onClickIndicator;
@property(retain, nonatomic) NSString *changeLocationString; // @synthesize changeLocationString=_changeLocationString;
@property(retain, nonatomic) CCBButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(retain, nonatomic) CCBLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)clickRefreshButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

