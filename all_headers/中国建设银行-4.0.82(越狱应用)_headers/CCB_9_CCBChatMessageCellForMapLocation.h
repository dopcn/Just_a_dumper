//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCB_9_CCBChatMessageCell.h"

#import "MKMapViewDelegate-Protocol.h"

@class CCBButton, CCBImageView, CCBLabel, NSString;

@interface CCB_9_CCBChatMessageCellForMapLocation : CCB_9_CCBChatMessageCell <MKMapViewDelegate>
{
    double _ctxVaidWidth;
    CCBImageView *_mapView;
    CCBLabel *_titleLabel;
    CCBButton *_leftButton;
    CCBButton *_rightButton;
}

@property(retain, nonatomic) CCBButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) CCBButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) CCBLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCBImageView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) double ctxVaidWidth; // @synthesize ctxVaidWidth=_ctxVaidWidth;
- (void).cxx_destruct;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)onMapImageTouch:(id)arg1;
- (void)reloadData;
- (struct CGSize)messageViewSize;
- (void)resizesSubViews;
- (id)actions;
- (void)resetStateView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

