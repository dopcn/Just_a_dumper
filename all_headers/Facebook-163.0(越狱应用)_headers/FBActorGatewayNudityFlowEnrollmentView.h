//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBContentInsetTracker, UICollectionView;

@interface FBActorGatewayNudityFlowEnrollmentView : UIView
{
    FBContentInsetTracker *_contentInsetTracker;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)recenterCollectionViewContentOfHeight:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double collectionViewMinimumLineSpacing;
- (void)addCollectionView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

