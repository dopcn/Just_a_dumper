//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFHateBoardView.h"

@class UIView;
@protocol NFHateBoardViewWithComplaintsDelegate;

@interface NFHateBoardViewWithComplaints : NFHateBoardView
{
    id <NFHateBoardViewWithComplaintsDelegate> _complaintsDelegate;
    UIView *_complaintsView;
    UIView *_complaintsTouchView;
}

@property(retain, nonatomic) UIView *complaintsTouchView; // @synthesize complaintsTouchView=_complaintsTouchView;
@property(retain, nonatomic) UIView *complaintsView; // @synthesize complaintsView=_complaintsView;
@property(nonatomic) id <NFHateBoardViewWithComplaintsDelegate> complaintsDelegate; // @synthesize complaintsDelegate=_complaintsDelegate;
- (void)onClickComplaintsViewWithSender:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

