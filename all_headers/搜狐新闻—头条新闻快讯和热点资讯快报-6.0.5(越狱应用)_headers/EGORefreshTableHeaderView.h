//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHNewsAnimationLoading;
@protocol EGORefreshTableHeaderDelegate;

@interface EGORefreshTableHeaderView : UIView
{
    id _delegate;
    int _state;
    SHNewsAnimationLoading *_animaitonView;
}

@property(retain, nonatomic) SHNewsAnimationLoading *animaitonView; // @synthesize animaitonView=_animaitonView;
@property(nonatomic) __weak id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)egoRefreshScrollViewWillBeginDragging:(id)arg1;
- (void)setState:(int)arg1;
@property(readonly, nonatomic) int state; // @dynamic state;
- (void)refreshLastUpdatedDate;
- (void)saveRefreshLastUpdateDate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 arrowImageName:(id)arg2 textColor:(id)arg3;

@end

