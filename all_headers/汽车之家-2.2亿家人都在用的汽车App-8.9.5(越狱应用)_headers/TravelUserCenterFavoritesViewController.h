//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHUIFramework/AHViewController.h>

#import "AHFavouriteHistoryDelegate-Protocol.h"

@class NSString, TravelUserCenterFavoritesJikeViewController, TravelUserCenterFavoritesTravelViewController, UISegmentedControl, UIView;

@interface TravelUserCenterFavoritesViewController : AHViewController <AHFavouriteHistoryDelegate>
{
    TravelUserCenterFavoritesJikeViewController *_jikeVC;
    TravelUserCenterFavoritesTravelViewController *_youjiVC;
    long long _currentIndex;
    UIView *_segmentControlBgview;
    UISegmentedControl *_segmentControl;
    struct CGRect _oriFrame;
}

@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIView *segmentControlBgview; // @synthesize segmentControlBgview=_segmentControlBgview;
@property(nonatomic) struct CGRect oriFrame; // @synthesize oriFrame=_oriFrame;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) TravelUserCenterFavoritesTravelViewController *youjiVC; // @synthesize youjiVC=_youjiVC;
@property(retain, nonatomic) TravelUserCenterFavoritesJikeViewController *jikeVC; // @synthesize jikeVC=_jikeVC;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)segmentValueChege:(id)arg1;
- (void)deleteAction;
- (void)cancelAll;
- (void)selectAll;
- (void)setEditing:(_Bool)arg1;
- (void)p_resetContentFrameWithEdting:(_Bool)arg1;
- (void)p_configSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

